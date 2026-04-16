// RGT_Zeus_fnc_placeFillBox
// Inventory-fill ammunition boxes. Refuses Man targets.
params ["_logic", "_units", "_activated"];
if (!_activated) exitWith {};
if (!isServer) exitWith {};

private _cfg          = configOf _logic;
private _fncName      = getText (_cfg >> "RGT_fnc");
private _defaultCrate = getText (_cfg >> "RGT_defaultCrate");
private _pos          = getPosATL _logic;

private _fnc = missionNamespace getVariable [_fncName, {}];
if (_fnc isEqualTo {}) exitWith {
    ["RGT Zeus: missing function %1 — is @RGT loaded?", _fncName] call BIS_fnc_error;
    deleteVehicle _logic;
};

// Detect target: use large 3D radius then filter by 2D distance (5m).
private _nearby = nearestObjects [_pos, [], 15];
_nearby = _nearby select { !(_x isKindOf "Logic") && alive _x && {(_pos distance2D getPosATL _x) < 2} };
private _target = if (count _nearby > 0) then { _nearby select 0 } else { objNull };

// Refuse Man targets
if (!isNull _target && {_target isKindOf "CAManBase"}) exitWith {
    ["RGT: Inventory boxes cannot be applied to people."] remoteExec ["hint", 0];
    deleteVehicle _logic;
};

if (isNull _target) then {
    _target = createVehicle [_defaultCrate, _pos, [], 0, "NONE"];
    _target setDir (getDir _logic);

    // Make the spawned crate editable by all curators
    { _x addCuratorEditableObjects [[_target], true]; } forEach allCurators;
};

// Always clear existing cargo and actions before filling
clearWeaponCargoGlobal _target;
clearMagazineCargoGlobal _target;
clearItemCargoGlobal _target;
clearBackpackCargoGlobal _target;
removeAllActions _target;

[_target] call _fnc;
deleteVehicle _logic;
