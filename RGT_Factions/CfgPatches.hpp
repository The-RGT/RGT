class CfgPatches {
    class RGT_Factions {
        name = "RGT Factions";
        author = "The Regiment";
        url = "https://steamcommunity.com/sharedfiles/filedetails/?id=3451417468";
        requiredVersion = 2.00;
        requiredAddons[] = {"RGT_Loadouts", "A3_Characters_F"};
        units[] = {
            // Infantry (BLUFOR)
            "RGT_Inf_Rifleman","RGT_Inf_Leader","RGT_Inf_CLS",
            "RGT_Inf_AR","RGT_Inf_ARAmmoBearer",
            "RGT_Inf_MG","RGT_Inf_MGAmmoBearer",
            "RGT_Inf_Grenadier","RGT_Inf_GrenadierAmmoBearer",
            "RGT_Inf_Marksman","RGT_Inf_JTAC",
            "RGT_Inf_Radioman","RGT_Inf_EOD",
            "RGT_Inf_MedAT","RGT_Inf_MedATAmmoBearer",
            "RGT_Inf_HeavyAT","RGT_Inf_HeavyATAmmoBearer",
            "RGT_Inf_AntiAir","RGT_Inf_AntiAirAmmoBearer",
            "RGT_Inf_Mortarman","RGT_Inf_MortarAmmoBearer","RGT_Inf_LightAT",
            "RGT_Inf_Crewman","RGT_Inf_HeliCrewman","RGT_Inf_PlaneCrewman",
            // Woodland (BLUFOR)
            "RGT_WD_Rifleman","RGT_WD_Leader","RGT_WD_CLS",
            "RGT_WD_AR","RGT_WD_ARAmmoBearer",
            "RGT_WD_MG","RGT_WD_MGAmmoBearer",
            "RGT_WD_Grenadier","RGT_WD_GrenadierAmmoBearer",
            "RGT_WD_Marksman","RGT_WD_JTAC",
            "RGT_WD_Radioman","RGT_WD_EOD","RGT_WD_Engineer",
            "RGT_WD_MedAT","RGT_WD_MedATAmmoBearer",
            "RGT_WD_HeavyAT","RGT_WD_HeavyATAmmoBearer",
            "RGT_WD_AntiAir","RGT_WD_AntiAirAmmoBearer",
            "RGT_WD_Mortarman","RGT_WD_MortarAmmoBearer","RGT_WD_LightAT",
            "RGT_WD_Crewman","RGT_WD_HeliCrewman","RGT_WD_PlaneCrewman",
            // Arctic (BLUFOR)
            "RGT_Arctic_AR","RGT_Arctic_Assault","RGT_Arctic_Breacher",
            "RGT_Arctic_CLS","RGT_Arctic_Grenadier","RGT_Arctic_Leader",
            "RGT_Arctic_LightAT","RGT_Arctic_Marksman",
            "RGT_Arctic_RTO","RGT_Arctic_JTAC",
            // CBRN (BLUFOR)
            "RGT_CBRN_AR","RGT_CBRN_CLS","RGT_CBRN_EOD",
            "RGT_CBRN_Grenadier","RGT_CBRN_JTAC","RGT_CBRN_Leader",
            "RGT_CBRN_Radioman","RGT_CBRN_Marksman","RGT_CBRN_Rifleman",
            // Cold War (BLUFOR)
            "RGT_CW_AntiAir","RGT_CW_CLS","RGT_CW_EOD",
            "RGT_CW_Grenadier","RGT_CW_Leader","RGT_CW_Radioman",
            "RGT_CW_Marksman","RGT_CW_MG","RGT_CW_Rifleman","RGT_CW_LightAT",
            "RGT_CW_Crewman","RGT_CW_HeliCrewman","RGT_CW_PlaneCrewman",
            // Cold War M16 (BLUFOR)
            "RGT_CWM16_AntiAir","RGT_CWM16_CLS","RGT_CWM16_EOD",
            "RGT_CWM16_Grenadier","RGT_CWM16_Leader","RGT_CWM16_Radioman",
            "RGT_CWM16_Marksman","RGT_CWM16_Rifleman","RGT_CWM16_LightAT","RGT_CWM16_MG",
            "RGT_CWM16_Crewman","RGT_CWM16_HeliCrewman","RGT_CWM16_PlaneCrewman",
            // SOF (BLUFOR)
            "RGT_SOF_AR","RGT_SOF_Assault","RGT_SOF_Breacher","RGT_SOF_CLS",
            "RGT_SOF_JTAC","RGT_SOF_Leader","RGT_SOF_LightAT",
            "RGT_SOF_Marksman","RGT_SOF_Pointman","RGT_SOF_Signaler",
            // Sniper (BLUFOR)
            "RGT_Sniper_Sniper","RGT_Sniper_Spotter",
            "RGT_Sniper_SniperSpecOps","RGT_Sniper_SpotterSpecOps",
            "RGT_Sniper_HeavySniperSpecOps",
            "RGT_Sniper_SniperAFO","RGT_Sniper_SpotterAFO",
            // Recce (BLUFOR)
            "RGT_Recce_AR","RGT_Recce_CLS","RGT_Recce_Leader","RGT_Recce_Scout",
            // Diving (BLUFOR)
            "RGT_Diving_CLS","RGT_Diving_Engineer","RGT_Diving_Leader","RGT_Diving_Rifleman",
            // Russian (OPFOR)
            "RGT_Rus_AR","RGT_Rus_CLS","RGT_Rus_Engineer","RGT_Rus_Grenadier",
            "RGT_Rus_Leader","RGT_Rus_LightAT","RGT_Rus_Radioman","RGT_Rus_Marksman",
            "RGT_Rus_MG","RGT_Rus_Rifleman","RGT_Rus_Sniper","RGT_Rus_Spotter",
            "RGT_Rus_RWcrew","RGT_Rus_FWcrew","RGT_Rus_AFVcrew",
            "RGT_Rus_MedAT","RGT_Rus_MedATAmmoBearer",
            "RGT_Rus_AntiAir","RGT_Rus_AntiAirAmmoBearer",
            "RGT_Rus_MGAmmoBearer_RUS","RGT_Rus_GrenadierAmmoBearer",
            // Spetsnaz (OPFOR)
            "RGT_Spetsnaz_AR","RGT_Spetsnaz_Assault","RGT_Spetsnaz_Breacher",
            "RGT_Spetsnaz_CLS","RGT_Spetsnaz_Leader","RGT_Spetsnaz_LightAT",
            "RGT_Spetsnaz_Marksman","RGT_Spetsnaz_Pointman","RGT_Spetsnaz_Signaler",
            // Taliban (OPFOR)
            "RGT_Taliban_AR","RGT_Taliban_CLS","RGT_Taliban_Grenadier",
            "RGT_Taliban_Leader","RGT_Taliban_Marksman","RGT_Taliban_MedAT",
            "RGT_Taliban_MG","RGT_Taliban_Rifleman",
            // Guerrilla (INDEPENDENT)
            "RGT_Guer_Rebel","RGT_Guer_AR","RGT_Guer_CLS",
            "RGT_Guer_Grenadier","RGT_Guer_Leader","RGT_Guer_Sniper",
            // PMC (INDEPENDENT)
            "RGT_PMC_AR","RGT_PMC_CLS","RGT_PMC_Leader",
            "RGT_PMC_Merc","RGT_PMC_Sniper","RGT_PMC_Body",
            // Foreign Advisor (INDEPENDENT)
            "RGT_FA_AR","RGT_FA_Breacher","RGT_FA_CLS",
            "RGT_FA_DMR","RGT_FA_Leader","RGT_FA_Rifleman",
            // UC / Non Attributable (INDEPENDENT)
            "RGT_UC_AR","RGT_UC_CLS","RGT_UC_Engineer",
            "RGT_UC_Leader","RGT_UC_Marksman","RGT_UC_Rifleman",
            // Civilian
            "RGT_Civ_Civilian","RGT_Civ_Businessman","RGT_Civ_Mechanic",
            "RGT_Civ_Peasant","RGT_Civ_Scientist","RGT_Civ_Reporter",
            "RGT_Civ_Police","RGT_Civ_Wiseman","RGT_Civ_NGO",
            "RGT_Civ_Paramedic","RGT_Civ_Construction","RGT_Civ_Bandit",
            "RGT_Civ_Random",
            // Infantry Vehicles (BLUFOR) - NATO Woodland
            "RGT_Inf_Veh_A29B","RGT_Inf_Veh_CV22",
            "RGT_Inf_Veh_AH1Z","RGT_Inf_Veh_AH6M","RGT_Inf_Veh_AH64D",
            "RGT_Inf_Veh_CH47F","RGT_Inf_Veh_CH53E","RGT_Inf_Veh_CH146",
            "RGT_Inf_Veh_MH6M","RGT_Inf_Veh_MH60L","RGT_Inf_Veh_UH1H",
            "RGT_Inf_Veh_UH1Y","RGT_Inf_Veh_UH60M",
            "RGT_Inf_Veh_HEMTT_Ammo","RGT_Inf_Veh_HEMTT_Fuel","RGT_Inf_Veh_HEMTT_Repair",
            "RGT_Inf_Veh_Humvee_M2","RGT_Inf_Veh_Humvee_M240","RGT_Inf_Veh_Humvee_Mk19",
            "RGT_Inf_Veh_LMTV_C2","RGT_Inf_Veh_LMTV_M2","RGT_Inf_Veh_Caiman_M2",
            "RGT_Inf_Veh_M1A2SEPv2","RGT_Inf_Veh_M2A3_BUSKIII",
            "RGT_Inf_Veh_M1126_M2","RGT_Inf_Veh_MATV_M2","RGT_Inf_Veh_MATV_M240","RGT_Inf_Veh_RG33_M2",
            "RGT_Inf_Veh_M2_High","RGT_Inf_Veh_M2_Low","RGT_Inf_Veh_TOW",
            // SOF Vehicles (BLUFOR)
            "RGT_SOF_Veh_GMV_M2","RGT_SOF_Veh_GMV_M134D","RGT_SOF_Veh_GMV_Mk19",
            "RGT_SOF_Veh_LMTV_SOF","RGT_SOF_Veh_MATV_SOF","RGT_SOF_Veh_Supply_MRAP_SOF","RGT_SOF_Veh_MRZR",
            "RGT_SOF_Veh_MkVSOC","RGT_SOF_Veh_RHIB","RGT_SOF_Veh_SOCR",
            "RGT_SOF_Veh_Zodiac_Recce","RGT_SOF_Veh_Zodiac_SEAL",
            // Taliban Vehicles (OPFOR)
            "RGT_Taliban_Veh_Landrover","RGT_Taliban_Veh_UAZ","RGT_Taliban_Veh_Ural",
            "RGT_Taliban_Veh_Offroad","RGT_Taliban_Veh_Landrover_M2","RGT_Taliban_Veh_Offroad_M2",
            // Guerrilla Vehicles (INDEPENDENT)
            "RGT_Guer_Veh_Landrover","RGT_Guer_Veh_UAZ","RGT_Guer_Veh_Ural",
            "RGT_Guer_Veh_Offroad","RGT_Guer_Veh_Landrover_M2","RGT_Guer_Veh_Offroad_M2",
            // PMC Vehicles (INDEPENDENT)
            "RGT_PMC_Veh_SUV","RGT_PMC_Veh_TT650","RGT_PMC_Veh_SUV_Armed",
            "RGT_PMC_Veh_Hilux_Open","RGT_PMC_Veh_Hatchback",
            // Foreign Advisor Vehicles (INDEPENDENT)
            "RGT_FA_Veh_SUV","RGT_FA_Veh_TT650","RGT_FA_Veh_SUV_Armed",
            "RGT_FA_Veh_Hilux_Open","RGT_FA_Veh_Hatchback",
            // UC Vehicles (INDEPENDENT)
            "RGT_UC_Veh_SUV","RGT_UC_Veh_TT650","RGT_UC_Veh_SUV_Armed",
            "RGT_UC_Veh_Hilux_Open","RGT_UC_Veh_Hatchback",
            // Sniper Vehicles (BLUFOR)
            "RGT_Sniper_Veh_ATV","RGT_Sniper_Veh_M1030","RGT_Sniper_Veh_Landrover",
            // Recce Vehicles (BLUFOR)
            "RGT_Recce_Veh_ATV","RGT_Recce_Veh_M1030","RGT_Recce_Veh_Landrover",
            // Russian Vehicles (OPFOR)
            "RGT_Rus_Veh_Tigr","RGT_Rus_Veh_Tigr_M","RGT_Rus_Veh_Tigr_STS",
            "RGT_Rus_Veh_BMP2D","RGT_Rus_Veh_BRDM2","RGT_Rus_Veh_GAZ66",
            "RGT_Rus_Veh_KamAZ5350","RGT_Rus_Veh_Ka52","RGT_Rus_Veh_Mi24Vt",
            "RGT_Rus_Veh_Mi8MT","RGT_Rus_Veh_BTR80A",
            // Spetsnaz Vehicles (OPFOR)
            "RGT_Spetsnaz_Veh_Tigr","RGT_Spetsnaz_Veh_Tigr_M","RGT_Spetsnaz_Veh_Tigr_STS",
            "RGT_Spetsnaz_Veh_BMP2D","RGT_Spetsnaz_Veh_BRDM2","RGT_Spetsnaz_Veh_GAZ66",
            "RGT_Spetsnaz_Veh_KamAZ5350","RGT_Spetsnaz_Veh_Ka52","RGT_Spetsnaz_Veh_Mi24Vt",
            "RGT_Spetsnaz_Veh_Mi8MT","RGT_Spetsnaz_Veh_BTR80A",
            // CBRN Vehicles (BLUFOR)
            "RGT_CBRN_Veh_Offroad","RGT_CBRN_Veh_Response",
            "RGT_CBRN_Veh_Containment","RGT_CBRN_Veh_Offroad_Comms",
            // Cold War Vehicles (BLUFOR)
            "RGT_CW_Veh_M151_HMG","RGT_CW_Veh_UH1H_M240","RGT_CW_Veh_UH1H_MED",
            "RGT_CW_Veh_M939_Open","RGT_CW_Veh_M151_TOW","RGT_CW_Veh_M151_Closed",
            "RGT_CW_Veh_M60A3","RGT_CW_Veh_M113_M2","RGT_CW_Veh_AAV","RGT_CW_Veh_M113_MK19",
            // Cold War M16 Vehicles (BLUFOR)
            "RGT_CWM16_Veh_M151_HMG","RGT_CWM16_Veh_UH1H_M240","RGT_CWM16_Veh_UH1H_MED",
            "RGT_CWM16_Veh_M939_Open","RGT_CWM16_Veh_M151_TOW","RGT_CWM16_Veh_M151_Closed",
            "RGT_CWM16_Veh_M60A3","RGT_CWM16_Veh_M113_M2","RGT_CWM16_Veh_AAV","RGT_CWM16_Veh_M113_MK19",
            // Diving Vehicles (BLUFOR)
            "RGT_Diving_Veh_SDV"
        };
        weapons[] = {};
    };
};
