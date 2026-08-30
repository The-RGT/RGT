// RGT_Factions_fnc_initRandomCiv
// Randomly picks one of the 12 civilian loadout functions and applies it.
params ["_unit"];
if (isNull _unit) exitWith {};

private _fncs = [
    "RGT_fnc_civi","RGT_fnc_busi","RGT_fnc_mech","RGT_fnc_peas",
    "RGT_fnc_scie","RGT_fnc_repo","RGT_fnc_poli","RGT_fnc_wise",
    "RGT_fnc_ngo","RGT_fnc_para","RGT_fnc_cons","RGT_fnc_band"
];
[_unit, selectRandom _fncs] call RGT_Factions_fnc_initUnit;
