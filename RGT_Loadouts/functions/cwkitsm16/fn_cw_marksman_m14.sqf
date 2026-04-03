comment "Remove gear before applying loadouts";
removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;

comment "Create the arrays for different equipment";
_rifle = [
	"UK3CB_M1903A1_unertl", 0.50,
	"UK3CB_CZ550", 0.10,
	"rhs_weap_m14_rail_wd", 0.10,
	"rhs_weap_m14_rail", 0.10]	call BIS_fnc_selectRandomWeighted;
_optic = [
	"", 0.70, 
	"rhsgref_acc_l1a1_l2a2", 0.05] call BIS_fnc_selectRandomWeighted;
_uniform = [
	"rhs_uniform_bdu_erdl", 0.7, 
	"UK3CB_FIA_B_U_M10_CombatUniform_WDL01_01", 0.4,
	"rhsgref_uniform_woodland", 0.1, 
	"rhsgref_uniform_ERDL", 0.1, 
	"rhsgref_uniform_og107_erdl", 0.1, 
	"rhsgref_uniform_woodland_olive", 0.1, 
	"rhs_uniform_afghanka_wdl", 0.05] call BIS_fnc_selectRandomWeighted;
_vest = [
	"rhsgref_alice_webbing", 0.40, 
	"rhsgref_chicom", 0.40, 
	"rhs_chicom_khk", 0.05, 
	"rhs_chicom", 0.05,
	"rhs_lifchik", 0.05,
	"rhs_lifchik_light", 0.05,
	"rhs_suspender_AK8_chestrig", 0.05] call BIS_fnc_selectRandomWeighted;
_ammo = [
	"rhs_mag_20Rnd_762x51_m61_fnfal", 
	"rhs_mag_20Rnd_762x51_m62_fnfal", 
	"rhs_mag_20Rnd_762x51_m80_fnfal", 
	"rhs_mag_20Rnd_762x51_m80a1_fnfal"] call BIS_fnc_selectRandom;
_helmet = [
	"rhsgref_helmet_M1_erdl", 0.70,
	"UK3CB_H_M1_Helmet_Covered_Band_OLI", 0.05,
	"UK3CB_H_M1_Helmet_Covered_Band_OLI", 0.05, 
	"rhsgref_helmet_M1_mit", 0.05, 
	"rhsgref_helmet_M1_bare", 0.05, 
	"rhsgref_helmet_M1_bare_alt01", 0.05, 
	"rhsgref_helmet_M1_painted", 0.10, 
	"rhsgref_helmet_M1_painted_alt01", 0.10] call BIS_fnc_selectRandomWeighted;
_bag = [
	"rhsgref_hidf_alicepack",
	"rhsgref_ttsko_alicepack",
	"UK3CB_B_Alice_pack_01",
	"UK3CB_B_Alice_pack_02_M81",
	"UK3CB_B_Alice_pack_02",
	"UK3CB_B_Alice_pack_03_M81",
	"UK3CB_B_Alice_pack_03",
	"UK3CB_B_Alice_pack_04",
	"UK3CB_B_Alice_pack_04_M81",
	"UK3CB_B_Alice_pack_covered_01",
	"UK3CB_B_Alice_Bedroll_K",
	"UK3CB_B_Alice_Bedroll_2_K",
	"UK3CB_B_Alice_pack_frame_01_M81",
	"UK3CB_B_Alice_pack_frame_01",
	"UK3CB_B_Alice_pack_frame_02_M81",
	"UK3CB_B_Alice_pack_frame_02",
	"rhsgref_wdl_alicepack",
	"rhssaf_alice_md2camo",
	"rhssaf_alice_smb"] call BIS_fnc_selectRandom;
_frag = [
	"HandGrenade",
	"rhs_grenade_mkii_mag"] call BIS_fnc_selectRandom;
_smk = [
	"rhs_mag_an_m8hc",
	"rhs_grenade_m15_mag",
	"rhs_grenade_anm8_mag"] call BIS_fnc_selectRandom;
	
comment "Add Uniforms and Gear";
player forceAddUniform _uniform;
player addVest _vest;
player addBackpack _bag;
player addHeadgear _helmet;

comment "Add Weapons and attachments";
player addWeapon _rifle;
switch (_rifle) do {
	case "rhs_weap_m14_rail_wd": {
		player addPrimaryWeaponItem "optic_MRCO";
	};
	case "rhs_weap_m14_rail": {
		player addPrimaryWeaponItem "optic_MRCO";
	};
	case "UK3CB_CZ550": {
		player addPrimaryWeaponItem "uk3cb_optic_sro";
	};
	default {
		player addPrimaryWeaponItem "rhsgref_acc_l1a1_l2a2";
	};
};

comment "Fill Uniform and Gear";
player addItem "ACE_morphine";
for "_i" from 1 to 5 do {player addItem "ACE_fieldDressing";};
for "_i" from 1 to 3 do {player addItem "ACE_tourniquet";};
player addItem "ACE_CableTie";
player addItem "ACE_EarPlugs";
player addItem "ACE_Flashlight_MX991";
player addItem "ACE_MapTools";
for "_i" from 1 to 3 do {player addItem "rhsusf_mag_15Rnd_9x19_JHP";};
player addItem "ACE_microDAGR";
for "_i" from 1 to 3 do {player addItem _frag;};
player addItem "ACE_EntrenchingTool";
player addItem _smk;
switch (_rifle) do {
	case "rhs_weap_m14_rail_wd": {
		for "_i" from 1 to 4 do {player addItem "rhsusf_20Rnd_762x51_m118_special_Mag";};
		for "_i" from 1 to 3 do {player addItem "rhsusf_20Rnd_762x51_m993_Mag";};
	};
	case "rhs_weap_m14_rail": {
		for "_i" from 1 to 4 do {player addItem "rhsusf_20Rnd_762x51_m118_special_Mag";};
		for "_i" from 1 to 3 do {player addItem "rhsusf_20Rnd_762x51_m993_Mag";};
	};
	case "UK3CB_M1903A1_unertl": {
		for "_i" from 1 to 10 do {player addItem "UK3CB_M1903A1_3006_5rnd_Magazine";};
		for "_i" from 1 to 8 do {player addItem "UK3CB_M1903A1_3006_5rnd_Magazine_R";};
	};
	case "UK3CB_CZ550": {
		for "_i" from 1 to 10 do {player addItem "UK3CB_CZ550_5rnd_Mag";};
		for "_i" from 1 to 8 do {player addItem "UK3CB_CZ550_5rnd_Mag_R";};
	};
	default {
		for "_i" from 1 to 7 do {player addItem _ammo;};
	};
};

comment "Add final Gear";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "TFAR_microdagr";
player linkItem "TFAR_anprc152";
player linkItem "ItemGPS";
player setSpeaker "ACE_NoVoice";

player setVariable ["ACE_GForceCoef", 1];

[[player],"ace_medical_medicClass", 0, true] call ace_common_fnc_assignObjectsInList;
[[player],"ACE_IsEngineer", 0, true] call ace_common_fnc_assignObjectsInList;

hint "You're now equipped as an infantry marksman. \nYour equipment is optimized for daylight medium-range precision engagements";
