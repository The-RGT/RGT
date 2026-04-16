comment "Remove gear before applying loadouts";
removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;

comment "Create the arrays for different equipment";
private ["_ammo", "_ammo1"];
_lam = "";
_rifles = [
	["rhs_weap_mk17_LB", "scar"], 
	["rhs_weap_sr25_d", "sr25"], 
	["rhs_weap_sr25", "sr25"], 
	["rhs_weap_m14ebrri", "m14"], 
	["rhs_weap_m14_rail", "m14"],  
	["rhs_weap_m14_rail_d", "m14"], 
	["rhs_weap_m14_rail_fiberglass", "m14"],
	["rhs_weap_m14_rail_wd", "m14"]] call BIS_fnc_selectRandom;
_rifle = _rifles select 0;
_rifletype = _rifles select 1;
switch (_rifletype) do {
	case "scar": {
		_lam = "rhsusf_acc_anpeq15_wmx_sc";
		_ammo = "rhs_mag_20Rnd_SCAR_762x51_mk316_special";
		_ammo1 = "rhs_mag_20Rnd_SCAR_762x51_m61_ap";
	};
	case "sr25": {
		_lam = "rhsusf_acc_anpeq15side";
		_ammo = "rhsusf_20Rnd_762x51_SR25_m118_special_Mag";
		_ammo1 = "rhsusf_20Rnd_762x51_SR25_m993_Mag";
	};
	case "m14": {
		_ammo = "ACE_20Rnd_762x51_M118LR_Mag";
		_ammo1 = "ACE_20Rnd_762x51_M993_AP_Mag";
	};
};
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
	"rhsusf_spcs_ocp_sniper", 
	"milgp_v_marciras_marksman_mc", 
	"milgp_v_marciras_marksman_belt_mc"] call BIS_fnc_selectRandom;
_bag = [
	"TRYK_B_BAF_BAG_mcamo", 
	"USP_PATROL_PACK_CS_FH_ZT", 
	"USP_PATROL_PACK_CB_CS_FH_RP_ZT", 
	"USP_45L_RUCKSACK_MC"] call BIS_fnc_selectRandom;
_helmet = [
	"rhsusf_ach_helmet_ocp_norotos", 
	"rhsusf_ach_helmet_camo_ocp", 
	"rhsusf_ach_helmet_headset_ess_ocp", 
	"rhsusf_ach_helmet_headset_ocp", 
	"rhsusf_ach_helmet_ESS_ocp", 
	"rhsusf_ach_helmet_ocp"] call BIS_fnc_selectRandom;
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
player addPrimaryWeaponItem "optic_MRCO";
player addPrimaryWeaponItem _lam;
player addPrimaryWeaponItem "rhsusf_acc_harris_bipod";
player addPrimaryWeaponItem "rhsusf_acc_m14_bipod";
player addWeapon "rhsusf_weap_m9";

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
for "_i" from 1 to 3 do {player addItem "rhsusf_mag_15Rnd_9x19_JHP";};
player addItem "ACE_microDAGR";
for "_i" from 1 to 2 do {player addItem "HandGrenade";};
player addItem "ACE_EntrenchingTool";
for "_i" from 1 to 2 do {player addItem "SmokeShell";};
player addItem "SmokeShellBlue";
for "_i" from 1 to 4 do {player addItem _ammo;};
for "_i" from 1 to 3 do {player addItem _ammo1;};

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

hint "You're now equipped as an infantry marksman. \nYour equipment is optimized for daylight medium-range precision engagements";
