comment "Remove gear before applying loadouts";
removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;

comment "Create the arrays for different equipment";
private ["_optic", "_ammo", "_mags"];
_rifles = [
    ["rhs_weap_l1a1", "L1"], 0.10,
    ["rhs_weap_l1a1_wood", "L1"], 0.10,
    ["UK3CB_G3A3V", "G3"], 0.10,
    ["UK3CB_G3SG1", "G3"], 0.70,
    ["UK3CB_G3A3", "G3"], 0.10,
    ["uk3cb_enfield_no4t_walnut", "303enf"], 0.10,
    ["uk3cb_enfield_no4t", "303enf"], 0.10,
    ["uk3cb_enfield_no3t", "303enf"], 0.10,
    ["uk3cb_enfield_l8t_walnut", "762enf"], 0.10,
    ["uk3cb_enfield_l42_walnut", "762enf"], 0.10,
    ["uk3cb_enfield_l42", "762enf"], 0.10,
    ["uk3cb_enfield_l8t", "762enf"], 0.10] call BIS_fnc_selectRandomWeighted;
_rifle = _rifles select 0;
_rifletype = _rifles select 1;

switch (_rifletype) do {
	case "303enf": {
		_mags = 14;
		_ammo = "uk3cb_no4_enfield_303_10Rnd_magazine";
		_optic = "uk3cb_optic_no32_distressed";
	};
	case "762enf": {
		_mags = 14;
		_ammo = "uk3cb_l42_enfield_762_10Rnd_magazine";
		_optic = "uk3cb_optic_no32_distressed";
	};
	case "G3": {
		_mags = 7;
		_ammo = [
			"ACE_20Rnd_762x51_M118LR_Mag", 
			"ACE_20Rnd_762x51_M993_AP_Mag", 
			"UK3CB_G3_20rnd_762x51_R", 
			"UK3CB_G3_20rnd_762x51"] call BIS_fnc_selectRandom;
		_optic = "uk3cb_optic_STANAGZF2D_G3";
	};
	case "L1": {
		_mags = 7;
		_ammo = [
			"rhs_mag_20Rnd_762x51_m61_fnfal", 
			"rhs_mag_20Rnd_762x51_m62_fnfal", 
			"rhs_mag_20Rnd_762x51_m80_fnfal", 
			"rhs_mag_20Rnd_762x51_m80a1_fnfal"] call BIS_fnc_selectRandom;
		_optic = "rhsgref_acc_l1a1_l2a2";
	};
};
_uniform = [
	"rhs_uniform_bdu_erdl", 0.7, 
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
_helmet = [
	"rhsgref_helmet_M1_erdl", 0.70, 
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
player addPrimaryWeaponItem _optic;

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
for "_i" from 1 to _mags do {player addItem _ammo;};

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
