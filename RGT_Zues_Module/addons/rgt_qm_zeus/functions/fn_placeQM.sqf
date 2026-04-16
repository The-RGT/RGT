// RGT_Zeus_fnc_placeQM
// Called when a Quartermaster module is placed by Zeus.
params ["_logic", "_units", "_activated"];
if (!_activated) exitWith {};
if (!isServer) exitWith {};

private _cfg         = configOf _logic;
private _fncName     = getText (_cfg >> "RGT_fnc");
private _defaultUnit = getText (_cfg >> "RGT_defaultUnit");
private _pos         = getPosATL _logic;

private _fnc = missionNamespace getVariable [_fncName, {}];
if (_fnc isEqualTo {}) exitWith {
    ["RGT Zeus: missing function %1 — is @RGT loaded?", _fncName] call BIS_fnc_error;
    deleteVehicle _logic;
};

// Detect target: use large 3D radius then filter by 2D distance (5m).
// This catches vehicles (module placed on roof) without grabbing distant ground objects.
private _nearby = nearestObjects [_pos, [], 15];
_nearby = _nearby select { !(_x isKindOf "Logic") && alive _x && {(_pos distance2D getPosATL _x) < 2} };
private _target = if (count _nearby > 0) then { _nearby select 0 } else { objNull };

if (isNull _target) then {
    if (_defaultUnit isKindOf "CAManBase") then {
        private _grp = createGroup [west, true];
        _target = _grp createUnit [_defaultUnit, _pos, [], 0, "NONE"];
    } else {
        _target = createVehicle [_defaultUnit, _pos, [], 0, "NONE"];
    };
    _target setDir (getDir _logic);

    // Make the spawned unit editable by all curators
    { _x addCuratorEditableObjects [[_target], true]; } forEach allCurators;

    // Apply custom loadout if configured
    private _loadoutType = getText (_cfg >> "RGT_loadoutType");
    if (_loadoutType != "") then {
        private _loadout = [_loadoutType] call RGT_Zeus_fnc_getQMLoadout;
        if (count _loadout > 0) then {
            _target setUnitLoadout (_loadout select 0);
        };
    };

    // Strip weapons so the unit doesn't hold anything
    removeAllWeapons _target;
    // Arms at sides animation
    _target switchMove "AmovPercMstpSnonWnonDnon";
    // Invincible and frozen in place
    _target allowDamage false;
    _target disableAI "ALL";
};

// Clear existing actions before applying new ones (allows overriding)
removeAllActions _target;
_target call _fnc;
deleteVehicle _logic;
