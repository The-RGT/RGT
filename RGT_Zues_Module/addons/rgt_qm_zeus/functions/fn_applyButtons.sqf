// RGT_Zeus_fnc_applyButtons
// Scroll-menu "Buttons" modules. Require an existing target (any object).
params ["_logic", "_units", "_activated"];
if (!_activated) exitWith {};
if (!isServer) exitWith {};

private _cfg     = configOf _logic;
private _fncName = getText (_cfg >> "RGT_fnc");
private _pos     = getPosATL _logic;

private _fnc = missionNamespace getVariable [_fncName, {}];
if (_fnc isEqualTo {}) exitWith {
    ["RGT Zeus: missing function %1 — is @RGT loaded?", _fncName] call BIS_fnc_error;
    deleteVehicle _logic;
};

// Detect target: use large 3D radius then filter by 2D distance (5m).
private _nearby = nearestObjects [_pos, [], 15];
_nearby = _nearby select { !(_x isKindOf "Logic") && alive _x && {(_pos distance2D getPosATL _x) < 2} };

if (count _nearby == 0) exitWith {
    ["RGT: Buttons modules require an existing target - place on a crate or unit."] remoteExec ["hint", 0];
    deleteVehicle _logic;
};

private _target = _nearby select 0;
// Clear existing actions before applying new ones (allows overriding)
removeAllActions _target;
_target call _fnc;
deleteVehicle _logic;
