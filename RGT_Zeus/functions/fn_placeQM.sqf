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

// Detect target: 5m 3D radius covers vertical offset (vehicle roofs), 0.5m 2D filter.
private _nearby = nearestObjects [_pos, [], 5];
_nearby = _nearby select { !(_x isKindOf "Logic") && alive _x && {(_pos distance2D getPosATL _x) < 0.5} };
private _target = if (count _nearby > 0) then { _nearby select 0 } else { objNull };

if (isNull _target) then {
    if (_defaultUnit isKindOf "CAManBase") then {
        private _grp = createGroup [west, true];
        _target = _grp createUnit [_defaultUnit, _pos, [], 0, "NONE"];
    } else {
        _target = createVehicle [_defaultUnit, _pos, [], 0, "NONE"];
    };

    if (isNull _target) exitWith {
        ["RGT: Failed to spawn unit — is the class '%1' valid?", _defaultUnit] remoteExec ["hint", 0];
        deleteVehicle _logic;
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

    // Name the unit after the module displayName
    private _displayName = getText (_cfg >> "displayName");
    _target setName _displayName;

    // Arms at sides animation, invincible, frozen in place
    _target switchMove "AmovPercMstpSnonWnonDnon";
    _target allowDamage false;
    _target disableAI "ALL";
};

// Clear existing actions on ALL clients, then apply new ones on ALL clients (+ JIP).
// addAction is local — must remoteExec to every client for dedicated server support.
_target remoteExec ["removeAllActions", 0];
_target remoteExec [_fncName, 0, _target];

deleteVehicle _logic;
