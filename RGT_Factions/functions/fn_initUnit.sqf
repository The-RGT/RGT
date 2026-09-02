// RGT_Factions_fnc_initUnit
// Adapter: RGT loadout functions are written to modify `player`, not a passed unit.
// This wrapper reads the RGT function's source, replaces `player` with `_this`,
// compiles the patched version, and calls it on the target unit.
//
// Called from CfgVehicles init EH:
//   init = "[_this select 0, 'RGT_fnc_Rifleman'] call RGT_Factions_fnc_initUnit;";
params ["_unit", "_fncName"];
if (isNull _unit) exitWith {};
if (!local _unit) exitWith {};

// Cache patched compiled functions so we only patch once per function name
if (isNil "RGT_Factions_loadoutCache") then {
    RGT_Factions_loadoutCache = createHashMap;
};

private _cachedFn = RGT_Factions_loadoutCache getOrDefault [_fncName, nil];

if (isNil "_cachedFn") then {
    // Strip "RGT_fnc_" prefix to get bare class name
    private _bareName = _fncName select [8];

    // Find the function's file path via CfgFunctions lookup
    private _rgtRoot = configFile >> "CfgFunctions" >> "RGT";
    private _subcats = "true" configClasses _rgtRoot;
    private _path = "";
    {
        if (isClass (_x >> _bareName)) exitWith {
            _path = format ["\%1\fn_%2.sqf", getText (_x >> "file"), _bareName];
        };
    } forEach _subcats;

    if (_path == "") exitWith {
        diag_log format ["[RGT_Factions] Function not found in CfgFunctions: %1", _fncName];
    };

    // Load raw source
    private _src = preprocessFileLineNumbers _path;
    if (_src isEqualTo "") exitWith {
        diag_log format ["[RGT_Factions] Empty source for %1 at %2", _fncName, _path];
    };

    // Route nested kit calls (e.g. `player call RGT_fnc_medbag`) back through
    // this adapter so the nested kit also targets the unit, not the human
    // player. Must run BEFORE the blanket `player`->`_this` replace below.
    private _patched = _src regexReplace ["\bplayer\s+call\s+(RGT_fnc_\w+)", "[_this, '$1'] call RGT_Factions_fnc_initUnit"];

    // Replace remaining standalone `player` tokens with `_this`
    _patched = _patched regexReplace ["\bplayer\b", "_this"];

    _cachedFn = compile _patched;
    RGT_Factions_loadoutCache set [_fncName, _cachedFn];
};

if (!isNil "_cachedFn") then {
    _unit call _cachedFn;

    // Kits add the weapon before any magazine is in inventory (mags are added
    // afterwards via addItem), so the primary spawns unloaded. Force the unit
    // to chamber a magazine from inventory so AI don't stand around with an
    // empty weapon.
    reload _unit;
};
