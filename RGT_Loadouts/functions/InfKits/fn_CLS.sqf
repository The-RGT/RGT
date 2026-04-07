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
_clothing = [
	"milgp_u_g3_field_set_rolled_mc", 0.75, 
	"milgp_u_g3_field_set_mc", 0.25, 
	"USP_G3C_RS_MC", 0.25, 
	"USP_G3C_RS_CU_MC", 0.25, 
	"USP_G3C_RS_CU_KP_MC", 0.25, 
	"USP_G3C_RS_CU_KP_MX_MC", 0.25, 
	"USP_G3C_RS_CU_KP_OR_MC", 0.25, 
	"USP_G3C_RS_CU_KP_OR_VQ_MC", 0.25, 
	"USP_G3C_RS_KP_MC", 0.25, 
	"USP_G3C_RS2_MC", 0.25, 
	"USP_G3C_RS2_CU_MC" , 0.25, 
	"USP_G3C_RS2_CU_KP_MC", 0.25, 
	"USP_G3C_RS2_CU_KP_MX_MC", 0.25, 
	"USP_G3C_RS2_CU_KP_OR_MC", 0.25, 
	"USP_G3C_RS2_OR_VQ_MC", 0.25] call BIS_fnc_selectRandomWeighted;
_vest = [
	"rhsusf_spcs_ocp_medic", 
	"milgp_v_marciras_medic_mc", 
	"milgp_v_marciras_medic_belt_mc"] call BIS_fnc_selectRandom;
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
	"rhsusf_ach_helmet_headset_ocp"] call BIS_fnc_selectRandom;
_nods = [
	"USP_PVS14",
	"USP_PVS14_TAR"] call BIS_fnc_selectRandom;

comment "Add Uniforms and Gear";
player forceAddUniform _clothing;
player addVest _vest;
player addHeadgear _helmet;

comment "Add Weapons and attachments";
player addWeapon _rifle;
player addPrimaryWeaponItem _rail;
player addPrimaryWeaponItem _optic;
player addPrimaryWeaponItem _grip;

comment "Add standard medical gear";
player call RGT_fnc_medbag;

comment "Fill Uniform and Gear";
player addItem "ACE_EarPlugs";
player addItem "ACE_MapTools";
player addItem "ACE_CableTie";
player addItem "ACE_Flashlight_MX991";
player addItem "ACE_morphine";
for "_i" from 1 to 5 do {player addItem "ACE_fieldDressing";};
for "_i" from 1 to 3 do {player addItem "ACE_tourniquet";};
player addItem "Chemlight_green";
player addItem "ACE_Chemlight_IR";
player addItem "Chemlight_red";
player addItem "B_IR_Grenade";
player addItem "ACE_microDAGR";
for "_i" from 1 to 2 do {player addItem "SmokeShell";};
player addItem "HandGrenade";
player addItem "SmokeShellRed";
for "_i" from 1 to 7 do {player addItem _ammo;};

comment "Add final Gear";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "TFAR_anprc152";
player linkItem "ItemGPS";
player linkItem _nods;
player setSpeaker "ACE_NoVoice";

comment "Set G Force resistance and Medical + Engineer training";
player setVariable ["ACE_GForceCoef", 1];

[[player],"ace_medical_medicClass", 2, true] call ace_common_fnc_assignObjectsInList;
[[player],"ACE_IsEngineer", 0, true] call ace_common_fnc_assignObjectsInList;

hint "You're now equipped as an infantry medic. \nYour medical equipment and expertise is vital for your unit's survival.";