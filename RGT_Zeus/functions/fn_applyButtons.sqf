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

// Detect target: 5m 3D radius covers vertical offset, 0.5m 2D filter.
private _nearby = nearestObjects [_pos, [], 5];
_nearby = _nearby select { !(_x isKindOf "Logic") && alive _x && {(_pos distance2D getPosATL _x) < 0.5} };

if (count _nearby == 0) exitWith {
    ["RGT: Buttons modules require an existing target - place on a crate or unit."] remoteExec ["hint", 0];
    deleteVehicle _logic;
};

private _target = _nearby select 0;

// Clear existing actions on ALL clients, then apply new ones on ALL clients (+ JIP).
// addAction is local — must remoteExec to every client for dedicated server support.
_target remoteExec ["removeAllActions", 0];
_target remoteExec [_fncName, 0, _target];

deleteVehicle _logic;
