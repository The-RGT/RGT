comment "Remove gear before applying loadouts";
removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;

comment "Create the arrays for different equipment";
_grip = "";
_rifle = [
	"rhs_weap_hk416d10_LMT_d", 0.50,
	"rhs_weap_HK416D10_smr_tan", 0.50,
	"rhs_weap_HK416D10_smr_kac_tan", 0.50,
	"rhs_weap_mk18_nsr_tan", 0.50,
	"rhs_weap_mk18_nsr", 0.50,
	"rhs_weap_HK416D10_smr", 0.50] call BIS_fnc_selectRandomWeighted;
switch(_rifle) do {
	case "rhs_weap_mk18_nsr": {
		_grip = [
			"rhs_acc_nsr9_blk",
			"rhs_acc_nsr9_bcm_blk",
			"rhs_acc_nsr9_des",
			"rhs_acc_nsr9_bcm_des",
			"rhs_acc_nsr9_tan",
			"rhs_acc_nsr9_bcm_tan"] call BIS_fnc_selectRandom;
	};
	case "rhs_weap_mk18_nsr_tan": {
		_grip = [
			"rhs_acc_nsr9_blk",
			"rhs_acc_nsr9_bcm_blk",
			"rhs_acc_nsr9_des",
			"rhs_acc_nsr9_bcm_des",
			"rhs_acc_nsr9_tan",
			"rhs_acc_nsr9_bcm_tan"] call BIS_fnc_selectRandom;
	};
	case "rhs_weap_HK416D10_smr": {
		_grip = [
			"rhs_acc_smr_s_blk",
			"rhs_acc_smr_s_bcm_blk",
			"rhs_acc_smr_s_tan",
			"rhs_acc_smr_s_bcm_tan"] call BIS_fnc_selectRandom;
	};
	case "rhs_weap_hk416d10_LMT_d": {
		_grip = [
			"",
			"rhsusf_acc_kac_grip_frwd",
			"rhsusf_acc_rvg_de",
			"rhsusf_acc_tdstubby_tan"] call BIS_fnc_selectRandom;
	};
	case "rhs_weap_HK416D10_smr_tan": {
		_grip = [
			"rhs_acc_smr_s_blk",
			"rhs_acc_smr_s_bcm_blk",
			"rhs_acc_smr_s_tan",
			"rhs_acc_smr_s_bcm_tan",
			"rhs_acc_smr_s_des",
			"rhs_acc_smr_s_bcm_des"] call BIS_fnc_selectRandom;
	};
	case "rhs_weap_HK416D10_smr_kac_tan": {
		_grip = [
			"rhs_acc_smr_s_blk",
			"rhs_acc_smr_s_bcm_blk",
			"rhs_acc_smr_s_tan",
			"rhs_acc_smr_s_bcm_tan",
			"rhs_acc_smr_s_des",
			"rhs_acc_smr_s_bcm_des"] call BIS_fnc_selectRandom;
	};
};
_lam = [
	"rhsusf_acc_anpeq15", 0.50, 
	"rhsusf_acc_anpeq15_bk", 0.25, 
	"rhsusf_acc_anpeq15_wmx", 0.25] call BIS_fnc_selectRandomWeighted;
_optic = [
    "rhsusf_acc_EOTECH", 0.50, 
    "rhsusf_acc_eotech_xps3", 0.15, 
    "tsp_acc_xps3_tan_unity_black", 0.05, 
    "tsp_acc_xps3_black_unity_black", 0.05,
    "tsp_acc_t2_hydra_tan", 0.05,  
    "rhsusf_acc_t1_high", 0.15, 
    "tsp_acc_t2_unity_tan", 0.15, 
    "tsp_acc_t2_unity_black", 0.15, 
    "tsp_acc_xps3_tan_unity_black", 0.15, 
    "tsp_acc_t2_unity_black_g33_black_flip", 0.05, 
    "tsp_acc_t2_unity_tan_g33_black_flip", 0.05, 
    "tsp_acc_t2_unity_tan_g33_tan_flip", 0.05, 
    "tsp_acc_xps3_tan_unity_tan_g33_black_flip", 0.05, 
    "tsp_acc_xps3_tan_unity_black_g33_tan_flip", 0.05, 
    "rhsusf_acc_g33_xps3_tan", 0.15, 
    "optic_mrco", 0.05] call BIS_fnc_selectRandomWeighted;
switch(_optic) do {
    case "tsp_acc_t2_hydra_tan": {
        _lam = [
            "rhsusf_acc_M952V",
            "rhsusf_acc_wmx",
            "rhsusf_acc_wmx_bk"] call BIS_fnc_selectRandom;
    };
};
_muzzle = [
	"rhsusf_acc_rotex5_grey", 0.75, 
	"rhsusf_acc_rotex5_tan", 0.25] call BIS_fnc_selectRandomWeighted;
_clothing = [
	"ARD_MC_Blk_Camo_Cyre", 0.60, 
	"ARD_MC_Blk_Camo_Cyre_SS", 0.30, 
	"ARD_MC_Camo_Cyre_TS", 0.10, 
	"USP_PCU_G3C_BLK_MC", 0.10, 
	"USP_PCU_G3C_KP_BLK_MC", 0.10, 
	"USP_PCU_G3C_KP_OR_MCB_MC", 0.10, 
	"USP_PCU_G3C_KP_MX_BLK_MC", 0.10, 
	"USP_SOFTSHELL_G3C_BLK_MC", 0.10, 
	"USP_PCU_G3C_KP_MX_MCB_MC", 0.10, 
	"USP_PCU_G3C_KP_MCB_MC", 0.10, 
	"USP_PCU_G3C_MCB_MC", 0.10, 
	"USP_SOFTSHELL_G3C_KP_BLK_MC", 0.10, 
	"USP_SOFTSHELL_G3C_BLK_MC", 0.10,
	"USP_RUGBY_G3C_BLK_MC", 0.05,
	"USP_RUGBY_G3C_CBR_MC", 0.05,
	"USP_RUGBY_G3C_KP_BLK_MC", 0.05,
	"USP_RUGBY_G3C_KP_MX_BLK_MC", 0.05,
	"USP_RUGBY_G3C_MX_CBR_MC", 0.05,
	"USP_G3C_CS_CU_OR_VQ_MC", 0.05,
	"USP_G3C_CS_MC", 0.05,
	"USP_G3C_CS_CU_MC", 0.05,
	"USP_G3C_CS_CU_KP_MC", 0.05,
	"USP_G3C_CS_CU_KP_MX_MC", 0.05,
	"USP_G3C_CS_CU_KP_OR_MC", 0.05,
	"USP_G3C_CS_CU_KP_VQ_MC", 0.05,
	"USP_G3C_CS_CU_MX_MC", 0.05,
	"USP_G3C_CS_CU_MX_VQ_MC", 0.05,
	"USP_G3C_CS_CU_VQ_MC", 0.05,
	"USP_G3C_CS_KP_MC", 0.05,
	"USP_G3C_CS_CU_KP_MX_VQ_MC", 0.05,
	"USP_G3C_CS_CU_KP_OR_VQ_MC", 0.05,
	"USP_G3C_CS_CU_OR_MC", 0.05,
	"USP_G3C_CS_KP_MX_MC", 0.05,
	"USP_G3C_CS_KP_OR_MC", 0.05,
	"USP_G3C_CS_KP_OR_VQ_MC", 0.05,
	"USP_G3C_CS_KP_VQ_MC", 0.05,
	"USP_G3C_CS_MX_MC", 0.05,
	"USP_G3C_CS_MX_VQ_MC", 0.05,
	"USP_G3C_CS_OR_MC", 0.05,
	"USP_G3C_CS_OR_VQ_MC", 0.05,
	"USP_G3C_CS_VQ_MC", 0.05] call BIS_fnc_selectRandomWeighted;
_vest = [
	"milgp_v_mmac_assaulter_belt_MC", 
	"milgp_v_mmac_assaulter_MC", 
	"milgp_v_jpc_Assaulter_mc", 
	"milgp_v_jpc_assaulter_belt_mc", 
	"USP_CRYE_CPC_COMMS_MC", 
	"USP_CRYE_CPC_COMMS_BELT_MC", 
	"USP_CRYE_JPC_ASLTB", 
	"USP_CRYE_JPC_ASLT", 
	"USP_CRYE_NCPC_ASLT_AOR1", 
	"USP_VEST_STRANDHOGG2_MC", 
	"USP_VEST_PLATEFRAME_LOAD2_MC"] call BIS_fnc_selectRandom;
_ammo = [
	"rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan", 0.70, 
	"rhs_mag_30Rnd_556x45_Mk318_SCAR_Pull", 0.10, 
	"rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger", 0.10, 
	"rhs_mag_30Rnd_556x45_Mk318_SCAR", 0.10] call BIS_fnc_selectRandomWeighted;
_helmet = [
	"rhsusf_opscore_mc_cover_pelt_cam", 
	"rhsusf_opscore_mc_pelt_nsw", 
	"milgp_h_opscore_05_MC", 
	"milgp_h_airframe_06_MC", 
	"milgp_h_opscore_04_MC", 
	"milgp_h_opscore_05_goggles_MC", 
	"milgp_h_opscore_04_goggles_MC", 
	"milgp_h_opscore_03_MC", 
	"milgp_h_opscore_03_goggles_MC", 
	"USP_OPS_FASTXP_TAN_MC_08", 
	"USP_OPS_FASTXP_BLK_MC_08", 
	"USP_OPS_FASTXP_TAN_MC_07", 
	"USP_OPS_FASTXP_BLK_MC_07", 
	"USP_OPS_FASTXP_TAN_MC_06", 
	"USP_OPS_FASTXP_BLK_MC_06", 
	"USP_OPS_FASTXP_TAN_MC_05",
	"USP_OPS_FASTXP_BLK_MC_05", 
	"USP_OPS_FASTXP_TAN_MC_04", 
	"USP_OPS_FASTXP_BLK_MC_04", 
	"USP_OPS_FASTXP_TAN_MC_03", 
	"USP_OPS_FASTXP_BLK_MC_03"] call BIS_fnc_selectRandom;
_goggles = [
	"rhsusf_shemagh2_od", 
	"rhsusf_shemagh2_grn", 
	"rhsusf_shemagh2_tan", 
	"milgp_f_face_shield_BLK", 
	"milgp_f_face_shield_CB", 
	"milgp_f_face_shield_khk", 
	"milgp_f_face_shield_MC", 
	"milgp_f_face_shield_RGR", 
	"milgp_f_face_shield_shemagh_BLK", 
	"milgp_f_face_shield_shemagh_CB", 
	"milgp_f_face_shield_shemagh_khk", 
	"milgp_f_face_shield_shemagh_MC", 
	"milgp_f_face_shield_shemagh_RGR", 
	"TRYK_kio_balaclavas", 
	"USP_GATORZ_BLK", 
	"USP_ok_detc_MC", 
	"USP_ok_detc_MC_EMB",
	"USP_ok_sisj_MC", 
	"USP_ok_sisj_MC_EMB",
	"USP_BEARD2_BRN6",
	"USP_BEARD_BRN4"] call BIS_fnc_selectRandom;
_nods = [
    "USP_GPNVG18_WP_GM_TAN", 0.25, 
    "USP_GPNVG18_WP_GM_TAR_TAN", 0.25,
    "USP_GPNVG18_WP_CB3_TAR_TAN", 0.10,
    "USP_GPNVG18_WP_CB3_TAN", 0.10,
    "USP_GPNVG18_WP_CB2_TAR_TAN", 0.10,
    "USP_GPNVG18_CB2_TAN", 0.10,
    "USP_PVS31_WP_BLK2", 0.50, 
    "USP_PVS31_WP_TAN", 0.50, 
    "USP_PVS31_WP_TAN2", 0.25,
    "USP_PVS31_WP_HIGH_BLK", 0.25,
    "USP_PVS31_WP_HIGH_BLK2", 0.25,
    "USP_PVS31_WP_HIGH_TAN", 0.25,
    "USP_PVS31_WP_HIGH_TAN2", 0.25,
    "USP_PVS31_WP_LOW_BLK", 0.25,
    "USP_PVS31_WP_LOW_BLK2", 0.25,
    "USP_PVS31_WP_LOW_TAN", 0.25,
    "USP_PVS31_WP_LOW_TAN2", 0.25,
    "USP_PVS31_WP_MID_BLK", 0.25,
    "USP_PVS31_WP_MID_BLK2", 0.25,
    "USP_PVS31_WP_MID_TAN2", 0.25,
    "USP_PVS31_WP_TAR_BLK", 0.25,
    "USP_PVS31_WP_TAR_BLK2", 0.25,
    "USP_PVS31_WP_TAR_TAN", 0.25,
    "USP_PVS31_WP_TAR_TAN2", 0.25,
    "USP_PVS31_WP_TAR_HIGH_BLK", 0.25,
    "USP_PVS31_WP_TAR_HIGH_BLK2", 0.25,
    "USP_PVS31_WP_TAR_HIGH_TAN", 0.25,
    "USP_PVS31_WP_TAR_HIGH_TAN2", 0.25,
    "USP_PVS31_WP_TAR_LOW_BLK", 0.25,
    "USP_PVS31_WP_TAR_LOW_BLK2", 0.25,
    "USP_PVS31_WP_TAR_LOW_TAN", 0.25,
    "USP_PVS31_WP_TAR_LOW_TAN2", 0.25,
    "USP_PVS31_WP_TAR_MID_BLK", 0.25,
    "USP_PVS31_WP_TAR_MID_BLK2", 0.25,
    "USP_PVS31_WP_TAR_MID_TAN", 0.25,
    "USP_PVS31_WP_TAR_MID_TAN2", 0.25,    
    "USP_PVS15", 0.25,
    "USP_PVS15_TAR", 0.25] call BIS_fnc_selectRandomWeighted;
_flash = [
	"ACE_M84",
	"ACE_CTS9"] call BIS_fnc_selectRandom;
	
comment "Add Weapons and attachments";
player addWeapon _rifle;
player addPrimaryWeaponItem _grip;
player addPrimaryWeaponItem _optic;
player addPrimaryWeaponItem _lam;
player addPrimaryWeaponItem _muzzle;
player addWeapon "ACE_VMM3";

comment "Add Uniforms and Gear";
player forceAddUniform _clothing;
player addVest _vest;
player addBackpack "milgp_b_patrol_01_khk";
player addHeadgear _helmet;
player addGoggles _goggles;

comment "Fill Uniform and Gear";
player addItem "ACE_EarPlugs";
player addItem "ACE_morphine";
for "_i" from 1 to 5 do {player addItem "ACE_fieldDressing";};
for "_i" from 1 to 3 do {player addItem "ACE_tourniquet";};
player addItem "HandGrenade";
player addItem "SmokeShellRed";
for "_i" from 1 to 6 do {player addItem _ammo;};
for "_i" from 1 to 2 do {player addItem _flash;};
for "_i" from 1 to 3 do {player addItem "ACE_CableTie";};
player addItem "SmokeShell";
player addItem "ACE_EntrenchingTool";
player addItemToBackpack "ACE_wirecutter";
player addItem "ACE_DefusalKit";
player addItem "ACE_Clacker";
player addItem "ACE_SpraypaintRed";
player addItem "ACE_SpraypaintGreen";
for "_i" from 1 to 2 do {player addItem "tsp_breach_linear_mag";};
player addItem "tsp_breach_package_mag";
for "_i" from 1 to 2 do {player addItem "DemoCharge_Remote_Mag";};
player addItem "ACE_MapTools";
player addItem "ACE_CableTie";
player addItem "ACE_Flashlight_MX991";
player addItem "ACE_microDAGR";
player addItem "Chemlight_green";
player addItem "ACE_Chemlight_IR";
player addItem "ACE_IR_Strobe_Item";
player addItem "Chemlight_red";
player addItem "tsp_lockpick";

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

[[player],"ace_medical_medicClass", 0, true] call ace_common_fnc_assignObjectsInList;
[[player],"ACE_IsEngineer", 2, true] call ace_common_fnc_assignObjectsInList;

hint "You're now equipped as a breacher. \nYour equipment is optimized for getting through any obstacle with or without explosives.";