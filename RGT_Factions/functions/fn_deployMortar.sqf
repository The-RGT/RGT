// RGT_Factions_fnc_deployMortar
// Called from a mortarman's init AFTER its loadout has run (the loadout gives it
// a mortar backpack). Assembles that backpack's static weapon and moves the unit
// onto it as gunner, so the team spawns with the mortar already deployed and manned.
//
// Mod-agnostic: the static weapon class is read from the carried backpack's
// CfgVehicles >> <bag> >> assembleInfo >> base, i.e. whatever that bag assembles
// into in-game. If the bag has no assembleInfo (non-standard assemble), it logs
// and leaves the unit carrying the bag rather than erroring.
params ["_unit"];
if (isNull _unit) exitWith {};
if (!local _unit) exitWith {};

[_unit] spawn {
    params ["_unit"];

    // Wait for the loadout to have applied the mortar backpack (with a timeout
    // so a unit that never receives a bag doesn't wait forever).
    private _t0 = time;
    waitUntil { !alive _unit || {backpack _unit != ""} || {time - _t0 > 5} };
    if (!alive _unit) exitWith {};

    private _bag = backpack _unit;
    if (_bag == "") exitWith {
        diag_log format ["[RGT_Factions] deployMortar: %1 has no backpack; not deploying.", _unit];
    };

    private _static = getText (configFile >> "CfgVehicles" >> _bag >> "assembleInfo" >> "base");
    if (_static == "") exitWith {
        diag_log format ["[RGT_Factions] deployMortar: bag '%1' has no assembleInfo base; not deploying.", _bag];
    };

    private _dir = getDir _unit;
    private _mortar = createVehicle [_static, getPosATL _unit, [], 0, "CAN_COLLIDE"];
    _mortar setDir _dir;
    _mortar setPosATL (getPosATL _unit);
    removeBackpack _unit;               // the bag is consumed to build the static
    _unit assignAsGunner _mortar;
    _unit moveInGunner _mortar;

    // Keep the spawned static editable for any active Zeus curators.
    { _x addCuratorEditableObjects [[_mortar], true]; } forEach allCurators;
};
