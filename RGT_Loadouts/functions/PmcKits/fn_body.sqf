comment "Remove gear before applying loadouts";
removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;

comment "Create the arrays for universal equipment";
_role = "";
_suit = [
	"LOP_U_CHR_Functionary_01", 0.45, 
	"LOP_U_CHR_Functionary_02", 0.45, 
	"TRYK_SUITS_BLK_F", 0.05, 
	"TRYK_SUITS_BR_F", 0.05] call BIS_fnc_selectRandomWeighted;
_head = [
	"", 
	"TRYK_H_wig"] call BIS_fnc_selectRandom;
_glasses = [
	"USP_DETCORD", 
	"USP_DETCORD3", 
	"USP_DETCORD_GRN", 
	"USP_DETCORD_GRN3", 
	"USP_DETCORD_TAN", 
	"USP_DETCORD_TAN3"] call BIS_fnc_selectRandom;
_pistolinfo = [
	["rhsusf_weap_glock17g4", "rhsusf_mag_17Rnd_9x19_FMJ"], 
	["UK3CB_USP", "UK3CB_USP_9_15Rnd"], 
	["UK3CB_CZ75", "UK3CB_CZ75_9_20Rnd"], 
	["rhs_weap_cz99", "rhssaf_mag_15Rnd_9x19_FMJ"], 
	["UK3CB_PC9_ZOAF", "UK3CB_PC9_ZOAF_9_12Rnd"]] call BIS_fnc_selectRandom;
_pistol = _pistolinfo select 0;
_pammo = _pistolinfo select 1;

comment "Check what gear the player should get.";
if (_suit in ["TRYK_SUITS_BLK_F", "TRYK_SUITS_BR_F"]) then {
    _role = "rifle";
} else {
	_bag = [
	"", 0.80, 
	"B_Messenger_Black_F", 0.10, 
	"B_Messenger_Gray_F", 0.10] call BIS_fnc_selectRandomWeighted;
	player addBackpack _bag;
    if !(_bag isEqualTo "") then {
        _role = "pdw";
    } else {
        _role = "pistol";
    };
};

comment "Add Uniforms and Gear";
player forceAddUniform _suit;
player addHeadgear _head;
player addGoggles _glasses;
player addWeapon _pistol;

comment "Fill Uniform and Gear";
player addItem "ACE_epinephrine";
for "_i" from 1 to 5 do {player addItem "ACE_elasticBandage";};
for "_i" from 1 to 3 do {player addItem "ACE_tourniquet";};
for "_i" from 1 to 2 do {player addItem "ACE_CableTie";};
player addItem "ACE_EarPlugs";
player addItem "ACE_MapTools";
player addItem "ACE_Flashlight_XL50";
player addItem "ACE_microDAGR";

comment "Role based gear branching";
switch (_role) do {
	case "pistol": {
		for "_i" from 1 to 6 do {player addItem _pammo;};

		hint "You're a lightly armed bodyguard. Ideal for close protection in public.";
	};

	case "pdw": {
        _pdw = ["rhsusf_weap_MP7A2", "UK3CB_MP5K_PDW", "UK3CB_MP5A3"] call BIS_fnc_selectRandom;
        player addWeapon _pdw;
        switch (_pdw) do {
            case "rhsusf_weap_MP7A2": {
                player addPrimaryWeaponItem "rhs_acc_grip_ffg2";
                player addPrimaryWeaponItem "rhsusf_acc_mrds";
                for "_i" from 1 to 5 do { player addItemToBackpack "rhsusf_mag_40Rnd_46x30_FMJ" };
            };
            default {
                for "_i" from 1 to 5 do { player addItemToBackpack "UK3CB_MP5_30Rnd_9x19_Magazine" };
            };
        };
		for "_i" from 1 to 3 do {player addItem _pammo;};
		for "_i" from 1 to 2 do { player addItemToBackpack "SmokeShell" };
        player addItemToBackpack "SmokeShellBlue";
        for "_i" from 1 to 2 do { player addItemToBackpack "HandGrenade" };
        for "_i" from 1 to 15 do { player addItemToBackpack "ACE_morphine" };
        for "_i" from 1 to 10 do { player addItemToBackpack "ACE_epinephrine" };
        player addItemToBackpack "ACE_SpraypaintRed";
        player addItemToBackpack "ACE_personalAidKit";
        for "_i" from 1 to 10 do { player addItemToBackpack "ACE_elasticBandage" };
		for "_i" from 1 to 10 do {player addItemToBackpack "ACE_packingBandage";};
		for "_i" from 1 to 10 do {player addItemToBackpack "ACE_quikclot";};
        for "_i" from 1 to 7 do { player addItemToBackpack "ACE_tourniquet" };

        hint "You're a bodyguard with a PDW and go‑bag — ready for escalation.";
	};

	case "rifle": {
    	player addVest "rhsusf_plateframe_light";
		_rifle = ["UK3CB_M16_Carbine", "rhs_weap_m4a1_handguard"] call BIS_fnc_selectRandom;
        player addWeapon _rifle;
        if (_rifle == "rhs_weap_m4a1_handguard") then {
            _grip = ["rhs_acc_m4_moe", "rhs_acc_m4_moe_tan"] call BIS_fnc_selectRandom;
            player addPrimaryWeaponItem _grip;
        };

	_ammo = [
		"rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger", 
		"rhs_mag_30Rnd_556x45_M855A1_EPM", 
		"rhs_mag_30Rnd_556x45_M855A1_PMAG", 
		"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan", 
		"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull", 
		"rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger", 
		"rhs_mag_30Rnd_556x45_M855A1_Stanag"] call BIS_fnc_selectRandom;
    for "_i" from 1 to 3 do { player addItem _ammo };
	for "_i" from 1 to 2 do { player addItem "SmokeShell" };
	for "_i" from 1 to 3 do {player addItem _pammo;};

    hint "You're a heavily armed PSD agent — armored and ready for high‑risk threats.";
	};
};

comment "Add final Gear";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "TFAR_microdagr";
player linkItem "ItemGPS";
player linkItem "TFAR_anprc152";

player setSpeaker "ACE_NoVoice";

comment "Set G Force resistance and Medical + Engineer training";
player setVariable ["ACE_GForceCoef", 1];

[[player],"ace_medical_medicClass", 1, true] call ace_common_fnc_assignObjectsInList;
[[player],"ACE_IsEngineer", 0, true] call ace_common_fnc_assignObjectsInList;