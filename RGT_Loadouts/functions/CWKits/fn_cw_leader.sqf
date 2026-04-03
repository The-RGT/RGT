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
	"uk3cb_m1a1_carbine", 0.70,
	"uk3cb_m2a1_carbine", 0.70,
	"UK3CB_Sten", 0.40,
	"uk3cb_m1carbine", 0.20,
	"uk3cb_thompson_m1a1", 0.20,
	"uk3cb_thompson_m1928a1", 0.20,
	"uk3cb_thompson_m1928", 0.20,
	"rhs_weap_akm", 0.10,
	"rhs_weap_m1garand_sa43", 0.05,
	"rhs_weap_m3a1", 0.30]	call BIS_fnc_selectRandomWeighted;
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
_ammo = [
	"UK3CB_M1_15Rnd_30Carbine_Magazine", 0.80,
	"UK3CB_M1_30Rnd_30Carbine_Magazine", 0.20] call BIS_fnc_selectRandomWeighted;
_ammo1 = [
	"rhsgref_30rnd_1143x23_M1911B_SMG", 
	"rhsgref_30rnd_1143x23_M1911B_2mag_SMG"] call BIS_fnc_selectRandom;
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
player addWeapon "rhssaf_zrak_rd7j";

comment "Fill Uniform and Gear";
player addItem "ACE_morphine";
for "_i" from 1 to 5 do {player addItem "ACE_fieldDressing";};
for "_i" from 1 to 3 do {player addItem "ACE_tourniquet";};
player addItem "ACE_CableTie";
player addItem "ACE_EarPlugs";
player addItem "ACE_Flashlight_MX991";
player addItem "ACE_MapTools";
player addItem "ACE_microDAGR";
for "_i" from 1 to 3 do {player addItem _frag;};
player addItem "ACE_EntrenchingTool";
for "_i" from 1 to 2 do {player addItem _smk;};
player addItem "rhs_mag_m18_yellow";
switch (_rifle) do {
	case "rhs_weap_akm": {
		for "_i" from 1 to 8 do {player addItem "rhs_30Rnd_762x39mm";};
	};
	case "uk3cb_thompson_m1a1": {
		for "_i" from 1 to 8 do {player addItem "UK3CB_Thompson_30rnd_1143x23_M1911B_Magazine";};
	};	
	case "uk3cb_thompson_m1928a1": {
		for "_i" from 1 to 4 do {player addItem "UK3CB_Thompson_30rnd_1143x23_M1911B_Magazine";};
		for "_i" from 1 to 2 do {player addItem "UK3CB_Thompson_50rnd_1143x23_M1911B_Magazine";};
	};		
	case "UK3CB_Sten": {
		for "_i" from 1 to 7 do {player addItem "UK3CB_Sten_34Rnd_Magazine";};
	};		
	case "uk3cb_thompson_m1928": {
		for "_i" from 1 to 4 do {player addItem "UK3CB_Thompson_30rnd_1143x23_M1911B_Magazine";};
		for "_i" from 1 to 2 do {player addItem "UK3CB_Thompson_50rnd_1143x23_M1911B_Magazine";};
	};	
	case "rhs_weap_m1garand_sa43": {
		for "_i" from 1 to 20 do {player addItem "rhsgref_8Rnd_762x63_M2B_M1rifle";};
		for "_i" from 1 to 10 do {player addItem "rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle";};
	};	
	case "rhs_weap_m3a1": {
		switch (_ammo1) do {
			case "rhsgref_30rnd_1143x23_M1911B_SMG": {
				for "_i" from 1 to 14 do {player addItem "rhsgref_30rnd_1143x23_M1911B_SMG";};
			};
			case "rhsgref_30rnd_1143x23_M1911B_2mag_SMG": {
				for "_i" from 1 to 14 do {player addItem "rhsgref_30rnd_1143x23_M1911B_2mag_SMG";};
			};
		};
	};
	default {
		for "_i" from 1 to 12 do {player addItem _ammo;};
	};
};

comment "Add final Gear";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "TFAR_microdagr";
player linkItem "TFAR_anprc152";
player linkItem "ItemGPS";

player setSpeaker "ACE_NoVoice";

comment "Set G Force resistance and Medical + Engineer training";
player setVariable ["ACE_GForceCoef", 1];

[[player],"ace_medical_medicClass", 0, true] call ace_common_fnc_assignObjectsInList;
[[player],"ACE_IsEngineer", 0, true] call ace_common_fnc_assignObjectsInList;

hint "You're now equipped as an infantry rifleman. \nYour equipment is optimized for long daylight short to medium range firefights.";