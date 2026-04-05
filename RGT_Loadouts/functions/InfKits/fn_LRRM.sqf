comment "Remove gear before applying loadouts";
removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;

comment "Create the arrays for different equipment";
_grip = [
	"", 
	"rhsusf_acc_grip1",
	"rhsusf_acc_grip2",
	"rhsusf_acc_rvg_blk"] call BIS_fnc_selectRandom;
_rifles = [
	["rhs_weap_m4a1_blockII", "grip"], 0.48, 
	["rhs_weap_m4a1_blockII_d", "grip"], 0.25, 
	["rhs_weap_m4a1_blockII_KAC", "grip"], 0.48, 
	["rhs_weap_m4a1", "grip"], 0.3, 
	["rhs_weap_mk18", "grip"], 0.02,
	["rhs_weap_m4a1_urgi", "m4urgi"], 0.3,
	["rhs_weap_m4a1_urgi_kac", "m4urgi"], 0.3,
	["rhs_weap_mk18_urgi", "mk18urgi"], 0.02,
	["rhs_weap_mk18_urgi_kac", "mk18urgi_kac"], 0.02] call BIS_fnc_selectRandomWeighted;
_rifle = _rifles select 0;
_rifletype = _rifles select 1;
switch (_rifletype) do {
	case "m4urgi": {
		_grip = [
			"rhs_acc_urgi_bcm_blk",
			"rhs_acc_urgi_blk",
			"rhs_acc_urgi_bcm_coy",
			"rhs_acc_urgi_coy"] call BIS_fnc_selectRandom;
	};
	case "mk18urgi": {
		_grip = [
			"rhs_acc_urgi_s_blk",
			"rhs_acc_urgi_s_bcm_blk",
			"rhs_acc_urgi_s_bcm_coy",
			"rhs_acc_urgi_s_coy"] call BIS_fnc_selectRandom;
	};
};
_rail = [
	"rhsusf_acc_M952V", 
	"acc_flashlight", 
	"rhsusf_acc_wmx", 
	"rhsusf_acc_wmx_bk"] call BIS_fnc_selectRandom;
_optic = [
	"rhsusf_acc_eotech_552", 0.70, 
	"rhsusf_acc_compm4", 0.25, 
	"rhsusf_acc_ACOG_RMR", 0.05] call BIS_fnc_selectRandomWeighted;
_uniform = [
	"milgp_u_g3_field_set_mc",
	"USP_G3F_MC",
	"USP_G3F_MX_MC",
	"USP_G3F_OR_MC",
	"USP_G3F_G3C_MC",
	"USP_G3F_G3C_KP_MC",
	"USP_G3F_G3C_KP_MX_MC",
	"USP_G3F_G3C_KP_OR_MC",
	"USP_G3F_G3C_MX_MC",
	"USP_G3F_G3C_OR_MC",
	"USP_PCU_G3C_MC", 
	"USP_PCU_G3C_KP_MC", 
	"USP_PCU_G3C_KP_MX_MC", 
	"USP_PCU_G3C_KP_OR_MC", 
	"USP_PCU_G3C_MX_MC", 
	"USP_PCU_G3C_OR_MC", 
	"USP_SOFTSHELL_G3C_MC", 
	"USP_SOFTSHELL_G3C_KP_MC", 
	"USP_SOFTSHELL_G3C_KP_MX_MC", 
	"USP_SOFTSHELL_G3C_KP_OR_MC", 
	"USP_SOFTSHELL_G3C_MX_MC", 
	"USP_SOFTSHELL_G3C_OR_MC"] call BIS_fnc_selectRandom;
_vest = [
	"rhsusf_spcs_ocp_rifleman", 0.40, 
	"rhsusf_spcs_ocp_rifleman_alt", 0.40, 
	"milgp_v_marciras_assaulter_mc", 0.05, 
	"milgp_v_marciras_assaulter_belt_mc", 0.05, 
	"rhsusf_iotv_ocp_Rifleman", 0.10] call BIS_fnc_selectRandomWeighted;
_ammo = [
	"rhs_mag_30Rnd_556x45_M855A1_EPM_Pull", 
	"rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger", 
	"rhs_mag_30Rnd_556x45_M855A1_EPM", 
	"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull", 
	"rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger", 
	"rhs_mag_30Rnd_556x45_M855A1_Stanag"] call BIS_fnc_selectRandom;
_helmet = [
	"rhsusf_ach_helmet_ocp_norotos", 
	"rhsusf_ach_helmet_camo_ocp", 
	"rhsusf_ach_helmet_headset_ess_ocp", 
	"rhsusf_ach_helmet_headset_ocp", 
	"rhsusf_ach_helmet_ESS_ocp", 
	"rhsusf_ach_helmet_ocp"] call BIS_fnc_selectRandom;
_bag = [
	"UK3CB_ION_B_B_RadioBag_BRN",
	"TFAR_rt1523g_sage",
	"UK3CB_ION_B_B_RadioBag_OLI",
	"USP_TACTICAL_PACK_CCT",
	"USP_TACTICAL_PACK_CCT2",
	"USP_TACTICAL_PACK_CCT3",
	"USP_TACTICAL_PACK_CCT4",
	"USP_TACTICAL_PACK_CCT7",
	"USP_TACTICAL_PACK_CCT8"] call BIS_fnc_selectRandom;
_nods = [
	"USP_PVS14",
	"USP_PVS14_TAR"] call BIS_fnc_selectRandom;

comment "Add Uniforms and Gear";
player forceAddUniform _uniform;
player addVest _vest;
player addBackpack _bag;
player addHeadgear _helmet;

comment "Add Weapons and attachments";
player addWeapon _rifle;
player addPrimaryWeaponItem _rail;
player addPrimaryWeaponItem _optic;
player addPrimaryWeaponItem _grip;

comment "Fill Uniform and Gear";
player addItem "ACE_morphine";
for "_i" from 1 to 5 do {player addItem "ACE_fieldDressing";};
for "_i" from 1 to 3 do {player addItem "ACE_tourniquet";};
player addItem "ACE_CableTie";
player addItem "ACE_EarPlugs";
player addItem "ACE_Flashlight_MX991";
player addItem "ACE_MapTools";
player addItem "B_IR_Grenade";
player addItem "Chemlight_green";
player addItem "ACE_Chemlight_IR";
player addItem "Chemlight_red";
player addItem "ACE_microDAGR";
for "_i" from 1 to 2 do {player addItem "HandGrenade";};
player addItem "ACE_EntrenchingTool";
for "_i" from 1 to 2 do {player addItem "SmokeShell";};
player addItem "SmokeShellBlue";
for "_i" from 1 to 7 do {player addItem _ammo;};

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
[[player],"ACE_IsEngineer", 0, true] call ace_common_fnc_assignObjectsInList;

hint "You're now equipped as an infantry radio operator. \nYou're your unit's lifeline through long-range communications.";