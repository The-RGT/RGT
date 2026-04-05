comment "Remove gear before applying loadouts";
removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;


comment "Create the arrays for different equipment";
_grip = "";
_lam = "";
_smoke = "";
_frag = "";
_muzzle = "";
_mags = 0;
_rifleinfo = [
	["rhs_weap_vss_grip", "rhs_20rnd_9x39mm_SP6"], 0.50,
	["rhs_weap_aks74n_gp25", "rhs_30Rnd_545x39_7N6M_AK"], 0.20,
	["rhs_weap_ak74n_2_gp25", "rhs_30Rnd_545x39_7N6M_plum_AK"], 0.20] call BIS_fnc_selectRandomWeighted;
_rifle = _rifleinfo select 0;
_mag = _rifleinfo select 1;

switch (_mag) do {
	case "rhs_20rnd_9x39mm_SP6": {
		_smoke = "rhs_mag_rdg2_white";
		_frag = "rhs_mag_f1";
		_grip = "rhsusf_acc_tdstubby_blk";
		_lam = "rhs_acc_perst1ik_ris";
		_mags = 20;
	};
	case "rhs_30Rnd_545x39_7N6M_plum_AK": {
		_smoke = "rhs_GRD40_White";
		_frag = "rhs_VOG25";
		_muzzle = "rhs_acc_dtk4short";
		_mags = 7;
	};
};

_uniform = [
	"rhs_uniform_gorka_1_moss", 0.50,
	"rhs_uniform_gorka_1_green", 0.10,
	"rhs_uniform_gorka_1_emr", 0.50] call BIS_fnc_selectRandomWeighted;
private ["_vest", "_pack", "_headgear"];
switch(_uniform) do {
    case "rhs_uniform_gorka_1_emr": {
        _vest = [
			"rhs_6sh92_headset", 
			"rhs_6sh92_digi_headset", 
			"rhs_6sh92_vsr_headset"] call BIS_fnc_selectRandom;
			switch(_vest) do {
				case "rhs_6sh92_vsr_headset": {
					_pack = "rhs_tortila_khaki";
				};
				default {
					_pack = [
						"rhs_tortila_olive", 0.50,
						"rhs_tortila_grey", 0.20, 
						"rhs_tortila_emr", 0.10] call BIS_fnc_selectRandomWeighted;
				};
			};
		_headgear = [
            ["rhs_Booniehat_flora", "TRYK_Shemagh_MESH_NV"], 
            ["rhs_Booniehat_digi", "TRYK_Shemagh_MESH_NV"],
            ["rhs_headband", "UK3CB_PVS5A"],
			["rhs_beanie_green", "UK3CB_PVS5A"],
            ["rhs_beanie", "UK3CB_PVS5A"]] call BIS_fnc_selectRandom;
    };  
    default {
        _vest = [
			"rhs_6sh92_headset", 
			"rhs_6sh92_digi_headset"] call BIS_fnc_selectRandom;
        _pack = [
			"rhs_tortila_olive", 0.50, 
			"rhs_tortila_grey", 0.20, 
			"rhs_tortila_emr", 0.10] call BIS_fnc_selectRandomWeighted;      
        _headgear = [
			["rhs_Booniehat_digi", "TRYK_Shemagh_MESH_NV"],
			["rhs_beanie_green", "UK3CB_PVS5A"],
            ["rhs_headband", "UK3CB_PVS5A"]] call BIS_fnc_selectRandom;
    };
};
_hat = _headgear select 0;
_nods = _headgear select 1;

comment "Add Uniforms and Gear";
player forceAddUniform _uniform;
player addVest _vest;
player addBackpack _pack;
player addHeadgear _headgear;

comment "Add Weapons and attachments";
player addWeapon _rifle;
player addPrimaryWeaponItem _muzzle;
player addPrimaryWeaponItem _grip;
player addPrimaryWeaponItem _lam;
player addPrimaryWeaponItem "rhs_acc_pso1m21_ak";
player addWeapon "rhs_pdu4";

comment "Fill Uniform and Gear";
player addItem "ACE_morphine";
for "_i" from 1 to 5 do {player addItem "ACE_fieldDressing";};
for "_i" from 1 to 3 do {player addItem "ACE_tourniquet";};
player addItem "ACE_EarPlugs";
player addItem "ACE_Flashlight_MX991";
player addItem "ACE_MapTools";
player addItem "ACE_ATragMX";
player addItem "ACE_Kestrel4500";
player addItem "ACE_RangeCard";
player addItem "O_IR_Grenade";
player addItem "ACE_Chemlight_IR";
player addItem "ACE_microDAGR";
player addItem "ACE_DefusalKit";
player addItem "ACE_SpottingScope";
player addItem "APERSBoundingMine_Range_Mag";
for "_i" from 1 to _mags do {player addItem _mag;};
for "_i" from 1 to 5 do {player addItem _smoke;};
for "_i" from 1 to 5 do {player addItem _frag;};
for "_i" from 1 to 2 do {player addItem "APERSTripMine_Wire_Mag";};

comment "Add final Gear";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "TFAR_microdagr";
player linkItem "TFAR_anprc152";
player linkItem "ItemGPS";
player linkItem _nods;
player setSpeaker "ACE_NoVoice";

comment "Set G Force resistance and Medical + Engineer training";
player setVariable ["ACE_GForceCoef", 1];

[[player],"ace_medical_medicClass", 0, true] call ace_common_fnc_assignObjectsInList;
[[player],"ACE_IsEngineer", 1, true] call ace_common_fnc_assignObjectsInList;

hint "You're the spotter, radioman and team leader of a 2-man sniper team. \nYou're equipped with 40mm UGL, tripwire mines and a defusal kit for added firepower and sniper hide security.";