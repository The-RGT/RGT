// RGT_Zeus_fnc_getQMLoadout
// Returns a loadout array for the given QM type.
params ["_type"];

switch (_type) do {
    case "inf": {
        [[[],[],[],["milgp_u_g3_field_set_mc",[["ACE_epinephrine",1],["ACE_elasticBandage",5],["ACE_tourniquet",3],["ACE_CableTie",1],["ACE_EarPlugs",1],["ACE_Flashlight_MX991",1],["ACE_MapTools",1],["B_IR_Grenade",1,1],["Chemlight_green",1,1],["ACE_Chemlight_IR",1,1],["Chemlight_red",1,1]]],["rhsusf_spcs_ocp_rifleman",[]],[],"rhsusf_ach_helmet_headset_ocp","",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr","rhsusf_ANPVS_14"]],[]]
    };
    case "sniper": {
        [[[],[],[],["U_B_T_FullGhillie_tna_F",[["ACE_fieldDressing",5],["ACE_morphine",2],["ACE_EarPlugs",1],["ACE_Flashlight_MX991",1],["ACE_MapTools",1],["ACE_ATragMX",1],["ACE_Kestrel4500",1],["ACE_RangeCard",1],["ACE_microDAGR",1],["B_IR_Grenade",1,1],["ACE_Chemlight_IR",1,1]]],["V_TacChestrig_grn_F",[["SmokeShell",2,1],["HandGrenade",1,1]]],["B_ViperLightHarness_blk_F",[["ACE_bloodIV",2],["ACE_bloodIV_500",4],["ACE_fieldDressing",20],["ACE_epinephrine",5],["ACE_morphine",20],["rhsusf_acc_premier_anpvs27",1],["APERSTripMine_Wire_Mag",2,1]]],"","rhsusf_shemagh2_od",["ACE_Vector","","","",[],[],""],["ItemMap","ItemGPS","","ItemCompass","TFAR_microdagr","rhsusf_ANPVS_14"]],[]]
    };
    case "rus": {
        [[[],[],[],["rhs_uniform_emr_patchless",[["ACE_epinephrine",1],["ACE_elasticBandage",5],["ACE_tourniquet",3],["ACE_CableTie",1],["ACE_EarPlugs",1],["ACE_Flashlight_MX991",1],["ACE_MapTools",1],["O_IR_Grenade",1,1],["Chemlight_green",1,1],["rhs_mag_rdg2_white",1,1]]],["rhs_6b23_digi_6sh92",[["ACE_CableTie",1],["ACE_microDAGR",1],["ACE_EntrenchingTool",1],["rhs_mag_f1",1,1]]],[],"rhs_6b47","",[],["ItemMap","ItemGPS","TFAR_fadak","ItemCompass","TFAR_microdagr","rhs_1PN138"]],[]]
    };
    case "taliban": {
        [[[],[],[],["TRYK_U_taki_wh",[["ACE_epinephrine",1],["ACE_elasticBandage",5],["ACE_tourniquet",3],["ACE_CableTie",2],["ACE_EarPlugs",1],["ACE_Flashlight_MX991",1],["ACE_MapTools",1],["ACE_Clacker",1],["ACE_microDAGR",1],["Chemlight_green",1,1],["ACE_Chemlight_IR",1,1],["Chemlight_red",1,1]]],[],[],"TRYK_H_pakol2","",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr",""]],[]]
    };
    case "pmc": {
        [[[],[],[],["U_I_G_Story_Protagonist_F",[["ACE_EarPlugs",1],["ACE_MapTools",1],["ACE_CableTie",1],["ACE_fieldDressing",3],["ACE_morphine",1],["ACE_Flashlight_XL50",1],["Chemlight_green",1,1],["ACE_Chemlight_IR",1,1],["Chemlight_red",1,1]]],["V_TacVestIR_blk",[["ACE_microDAGR",1],["SmokeShell",2,1],["HandGrenade",1,1],["SmokeShellGreen",1,1],["SmokeShellRed",1,1]]],[],"","rhs_googles_clear",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""]],[]]
    };
    case "ch": {
        [[[],[],[],["TRYK_U_B_RED_T_BR",[["ACE_epinephrine",1],["ACE_elasticBandage",5],["ACE_tourniquet",3],["ACE_CableTie",3],["ACE_EarPlugs",1],["ACE_Flashlight_MX991",1],["ACE_Clacker",1],["ACE_MapTools",1],["ACE_microDAGR",1],["ACE_bodyBag",1],["Chemlight_green",1,1],["ACE_Chemlight_IR",1,1],["Chemlight_red",1,1],["rhsusf_mag_17Rnd_9x19_FMJ",1,17]]],["milgp_v_jpc_assaulter_belt_cb",[["HandGrenade",2,1],["SmokeShell",1,1],["SmokeShellRed",1,1],["SmokeShellBlue",1,1],["rhs_mag_30Rnd_556x45_Mk318_PMAG",6,30],["tsp_breach_linear_mag",1,1],["ACE_M84",2,1]]],[],"milgp_h_opscore_05_goggles_CB","rhsusf_shemagh2_od",[],["ItemMap","ItemGPS","","ItemCompass","","rhsusf_ANPVS_15"]],[]]
    };
    case "civ": {
        [[[],[],[],["U_C_Man_casual_2_F",[]],[],[],"","",[],["ItemMap","ItemGPS","","ItemCompass","",""]],[]]
    };
    case "arctic": {
        [[[],[],[],["milgp_u_pcu_g3_field_pants_mcalpine",[]],["milgp_v_mmac_assaulter_belt_KHK",[]],[],"LOP_H_Beanie_tan","",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr",""]],[]]
    };
    case "cbrn": {
        [[[],[],[],["CBRN_Expansion_Olive",[["ACE_epinephrine",1],["ACE_elasticBandage",5],["ACE_tourniquet",3],["ACE_CableTie",1],["ACE_EarPlugs",1],["ACE_Flashlight_MX991",1],["ACE_MapTools",1],["B_IR_Grenade",1,1],["Chemlight_green",1,1],["ACE_Chemlight_IR",1,1],["Chemlight_red",1,1]]],["USP_EAGLE_MBAV_LOAD_MCT",[]],["USP_HYDRATION_PACK_MCT",[]],"USP_OPSCORE_FASTMTC_MCT_TW","MK50",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr","USP_PVS31_BLK"]],[]]
    };
    case "wd": {
        [[[],[],[],["rhs_uniform_bdu_erdl",[["ACE_epinephrine",1],["ACE_elasticBandage",5],["ACE_tourniquet",3],["ACE_CableTie",1],["ACE_EarPlugs",1],["ACE_Flashlight_MX991",1],["ACE_MapTools",1],["B_IR_Grenade",1,1],["Chemlight_green",1,1],["ACE_Chemlight_IR",1,1],["Chemlight_red",1,1]]],["milgp_v_marciras_assaulter_rgr",[]],[],"rhsusf_ach_helmet_M81","",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr","rhsusf_ANPVS_14"]],[]]
    };
    case "recon": {
        [[[],[],[],["milgp_u_g3_field_set_rolled_mctropic",[["ACE_epinephrine",1],["ACE_elasticBandage",5],["ACE_tourniquet",3],["ACE_CableTie",1],["ACE_EarPlugs",1],["ACE_Flashlight_MX991",1],["ACE_MapTools",1],["B_IR_Grenade",1,1],["Chemlight_green",1,1],["ACE_Chemlight_IR",1,1],["Chemlight_red",1,1]]],["V_TacChestrig_grn_F",[]],[],"MCTropic_Boonie_HS","",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr",""]],[]]
    };
    case "guer": {
        [[[],[],[],["LOP_U_UA_Fatigue_03",[["ACE_epinephrine",1],["ACE_elasticBandage",5],["ACE_tourniquet",3],["ACE_CableTie",1],["ACE_EarPlugs",1],["ACE_Flashlight_MX991",1],["ACE_MapTools",1],["B_IR_Grenade",1,1],["Chemlight_green",1,1],["ACE_Chemlight_IR",1,1],["Chemlight_red",1,1]]],[],[],"H_Bandanna_gry","",[],["ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","TFAR_microdagr",""]],[]]
    };
    case "uc": {
        [[[],[],[],["TRYK_U_B_Denim_T_BG_BK",[]],["rhsusf_mbav_light",[["ACE_CableTie",1],["ACE_microDAGR",1],["HandGrenade",2,1],["SmokeShell",1,1],["SmokeShellRed",1,1],["SmokeShellBlue",1,1],["tsp_breach_linear_mag",1,1],["ACE_M84",1,1]]],[],"rhsusf_opscore_rg_cover","",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr","rhsusf_ANPVS_14"]],[]]
    };
    case "spetsnaz": {
        [[[],[],[],["milgp_u_g3_field_set_rolled_atacsau",[["ACE_epinephrine",1],["ACE_elasticBandage",5],["ACE_tourniquet",3],["ACE_CableTie",3],["ACE_EarPlugs",1],["ACE_Flashlight_MX991",1],["ACE_Clacker",1],["ACE_MapTools",1],["ACE_microDAGR",1],["ACE_bodyBag",1],["Chemlight_green",1,1],["ACE_Chemlight_IR",1,1],["Chemlight_red",1,1]]],["milgp_v_marciras_assaulter_belt_rgr",[["DemoCharge_Remote_Mag",1,1],["rhs_mag_rgd5",2,1],["rhs_mag_rdg2_white",1,1],["rhs_mag_nspn_red",1,1],["O_IR_Grenade",1,1],["rhs_mag_fakel",1,1]]],["milgp_bp_hydration_rgr",[]],"rhs_altyn_novisor_ess_bala","rhs_balaclava1_olive",[],["ItemMap","ItemGPS","","ItemCompass","","rhsusf_ANPVS_14"]],[]]
    };
    case "sof": {
        [[[],[],[],["USP_G3C_IST_KP_GRY",[["ACE_epinephrine",1],["ACE_elasticBandage",5],["ACE_tourniquet",3],["ACE_CableTie",1],["ACE_EarPlugs",1],["ACE_Flashlight_MX991",1],["ACE_MapTools",1],["ACE_IR_Strobe_Item",1]]],["V_RebreatherB",[]],[],"USP_OPSCORE_FASTMTC_AOR1_CG","G_B_Diving",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr","USP_GPNVG18_TAN"]],[]]
    };
    case "cw": {
        [[[],[],[],["rhs_uniform_bdu_erdl",[["ACE_epinephrine",1],["ACE_elasticBandage",5],["ACE_tourniquet",3],["ACE_CableTie",1],["ACE_EarPlugs",1],["ACE_Flashlight_MX991",1],["ACE_MapTools",1],["B_IR_Grenade",1,1],["Chemlight_green",1,1],["ACE_Chemlight_IR",1,1],["Chemlight_red",1,1]]],["rhsgref_alice_webbing",[]],[],"rhsgref_helmet_M1_erdl","",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr",""]],[]]
    };
    case "cwM16": {
        [[[],[],[],["rhs_uniform_bdu_erdl",[["ACE_epinephrine",1],["ACE_elasticBandage",5],["ACE_tourniquet",3],["ACE_CableTie",1],["ACE_EarPlugs",1],["ACE_Flashlight_MX991",1],["ACE_MapTools",1],["B_IR_Grenade",1,1],["Chemlight_green",1,1],["ACE_Chemlight_IR",1,1],["Chemlight_red",1,1]]],["rhsgref_alice_webbing",[]],[],"","USP_BEARD_CH_MS_BLK5",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr",""]],[]]
    };
    case "diving": {
        [[[],[],[],["USP_G3C_IST_KP_GRY",[["ACE_epinephrine",1],["ACE_elasticBandage",5],["ACE_tourniquet",3],["ACE_CableTie",1],["ACE_EarPlugs",1],["ACE_Flashlight_MX991",1],["ACE_MapTools",1],["ACE_IR_Strobe_Item",1]]],["V_RebreatherB",[]],[],"USP_OPSCORE_FASTMTC_AOR1_CG","G_B_Diving",[],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","TFAR_microdagr","USP_GPNVG18_TAN"]],[]]
    };
    default { [] };
};
