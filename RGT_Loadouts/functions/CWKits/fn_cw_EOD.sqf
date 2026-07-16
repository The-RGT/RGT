comment "Remove gear before applying loadouts";
removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;

comment "Create the arrays for different equipment";
_ammo = "";
_mags = 0;
_rifles = [
	["rhs_weap_l1a1", "l1"], 0.70,
	["rhs_weap_l1a1_wood", "l1"], 0.70,
	["UK3CB_M14", "m14"], 0.20,
	["UK3CB_G3A3V", "g3"], 0.20,
	["UK3CB_G3A3", "g3"], 0.20,
	["rhs_weap_m14", "m14"], 0.20,
	["rhs_weap_akm", "akm"], 0.10,
	["rhs_weap_m1garand_sa43", "m1"], 0.05]	call BIS_fnc_selectRandomWeighted;
_rifle = _rifles select 0;
_rifletype = _rifles select 1;
switch (_rifletype) do {
	case "l1": {
		_ammo = [
			"rhs_mag_20Rnd_762x51_m61_fnfal", 
			"rhs_mag_20Rnd_762x51_m62_fnfal", 
			"rhs_mag_20Rnd_762x51_m80_fnfal", 
			"rhs_mag_20Rnd_762x51_m80a1_fnfal"] call BIS_fnc_selectRandom;
		_mags = 12;
	};
	case "m14": {
		_ammo = "rhsusf_20Rnd_762x51_m80_Mag";
		_mags = 12;
	};
	case "g3": {
		_ammo = [
			"ACE_20Rnd_762x51_M118LR_Mag", 
			"ACE_20Rnd_762x51_M993_AP_Mag", 
			"UK3CB_G3_20rnd_762x51_R", 
			"UK3CB_G3_20rnd_762x51"] call BIS_fnc_selectRandom;
		_mags = 12;
	};
	case "akm": {
		_ammo = "rhs_30Rnd_762x39mm";
		_mags = 8;
	};
	case "m1": {
		_ammo = [
			"rhsgref_8Rnd_762x63_M2B_M1rifle", 
			"rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle"] call BIS_fnc_selectRandom;
		_mags = 30;
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
player addHeadgear _helmet;
player addBackpack _bag;

comment "Add Weapons and attachments";
player addWeapon _rifle;
player addPrimaryWeaponItem "rhsgref_acc_falMuzzle_l1a1";
player addWeapon "ACE_VMM3";

comment "Fill Uniform and Gear";
player addItem "ACE_morphine";
for "_i" from 1 to 5 do {player addItem "ACE_fieldDressing";};
for "_i" from 1 to 3 do {player addItem "ACE_tourniquet";};
player addItem "ACE_CableTie";
player addItem "ACE_EarPlugs";
player addItem "ACE_Flashlight_MX991";
player addItem "ACE_MapTools";
player addItem "ACE_microDAGR";
for "_i" from 1 to 2 do {player addItem _frag;};
player addItem "ACE_EntrenchingTool";
player addItem _smk;
player addItem "rhs_mag_m18_yellow";
for "_i" from 1 to _mags do {player addItem _ammo;};
player addItem "ACE_DefusalKit";
player addItem "ACE_Clacker";
player addItem "ACE_ChalkGreen";
player addItem "ACE_ChalkRed";
player addItemToBackpack "DemoCharge_Remote_Mag";
player addItemToBackpack "SatchelCharge_Remote_Mag";
for "_i" from 1 to 2 do {player addItemToBackpack "SLAMDirectionalMine_Wire_Mag";};
for "_i" from 1 to 10 do {player addItemToBackpack "ace_marker_flags_green";};
for "_i" from 1 to 10 do {player addItemToBackpack "ace_marker_flags_red";};
for "_i" from 1 to 10 do {player addItemToBackpack "Chemlight_red";};
for "_i" from 1 to 10 do {player addItemToBackpack "Chemlight_green";};

comment "Add final Gear";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "TFAR_anprc152";
player linkItem "ItemGPS";
player setSpeaker "ACE_NoVoice";

comment "Set G Force resistance and Medical + Engineer training";
player setVariable ["ACE_GForceCoef", 1];

[[player],"ace_medical_medicClass", 0, true] call ace_common_fnc_assignObjectsInList;
[[player],"ACE_IsEngineer", 2, true] call ace_common_fnc_assignObjectsInList;

hint "You're now equipped as an Explosive Ordnance Disposal specialist. \nYou're equipped to find and defuse explosives.";