class CfgVehicles {
    class Logic;
    class Module_F: Logic {};

    class RGT_Zeus_QM_Base: Module_F {
        scope = 1;
        scopeCurator = 1;
        displayName = "RGT QM Base (hidden)";
        category = "RGT_Zeus_Quartermasters";
        vehicleClass = "Modules";
        icon = "\a3\ui_f\data\Map\MapControl\ironsightmarker_ca.paa";
        function = "RGT_Zeus_fnc_placeQM";
        functionPriority = 1;
        isGlobal = 0;
        isTriggerActivated = 0;
        isDisposable = 1;
        curatorCanAttach = 1;
        RGT_fnc = "";
        RGT_defaultUnit = "B_Soldier_F";
        RGT_defaultCrate = "Box_NATO_AmmoVeh_F";
        RGT_loadoutType = "";
    };

    class RGT_Zeus_FillBox_Base: RGT_Zeus_QM_Base {
        displayName = "RGT FillBox Base (hidden)";
        category = "RGT_Zeus_Ammunition";
        vehicleClass = "Modules";
        function = "RGT_Zeus_fnc_placeFillBox";
    };

    class RGT_Zeus_Buttons_Base: RGT_Zeus_FillBox_Base {
        displayName = "RGT Buttons Base (hidden)";
        function = "RGT_Zeus_fnc_applyButtons";
    };

    class RGT_Mod_QM_Inf: RGT_Zeus_QM_Base {
        scopeCurator = 2;
        displayName = "Infantry Quartermaster";
        RGT_fnc = "RGT_fnc_infQM";
        RGT_loadoutType = "inf";
    };

    class RGT_Mod_QM_Arctic: RGT_Zeus_QM_Base {
        scopeCurator = 2;
        displayName = "Arctic Quartermaster";
        RGT_fnc = "RGT_fnc_arcticQM";
        RGT_loadoutType = "arctic";
    };

    class RGT_Mod_QM_CBRN: RGT_Zeus_QM_Base {
        scopeCurator = 2;
        displayName = "CBRN Quartermaster";
        RGT_fnc = "RGT_fnc_cbrnQM";
        RGT_loadoutType = "cbrn";
    };

    class RGT_Mod_QM_CH: RGT_Zeus_QM_Base {
        scopeCurator = 2;
        displayName = "Foreign Advisor Quartermaster";
        RGT_fnc = "RGT_fnc_chQM";
        RGT_loadoutType = "ch";
    };

    class RGT_Mod_QM_Civ: RGT_Zeus_QM_Base {
        scopeCurator = 2;
        displayName = "Civilian Quartermaster";
        RGT_fnc = "RGT_fnc_civQM";
        RGT_loadoutType = "civ";
    };

    class RGT_Mod_QM_CW: RGT_Zeus_QM_Base {
        scopeCurator = 2;
        displayName = "Cold War Quartermaster";
        RGT_fnc = "RGT_fnc_cwQM";
        RGT_loadoutType = "cw";
    };

    class RGT_Mod_QM_CWM16: RGT_Zeus_QM_Base {
        scopeCurator = 2;
        displayName = "Cold War M16 Quartermaster";
        RGT_fnc = "RGT_fnc_cwM16QM";
        RGT_loadoutType = "cwM16";
    };

    class RGT_Mod_QM_Diving: RGT_Zeus_QM_Base {
        scopeCurator = 2;
        displayName = "Diving Quartermaster";
        RGT_fnc = "RGT_fnc_divingQM";
        RGT_loadoutType = "diving";
    };

    class RGT_Mod_QM_Guer: RGT_Zeus_QM_Base {
        scopeCurator = 2;
        displayName = "Guerrilla Quartermaster";
        RGT_fnc = "RGT_fnc_guerQM";
        RGT_loadoutType = "guer";
    };

    class RGT_Mod_QM_Taliban: RGT_Zeus_QM_Base {
        scopeCurator = 2;
        displayName = "Taliban Quartermaster";
        RGT_fnc = "RGT_fnc_TalibanQM";
        RGT_loadoutType = "taliban";
    };

    class RGT_Mod_QM_PMC: RGT_Zeus_QM_Base {
        scopeCurator = 2;
        displayName = "PMC Quartermaster";
        RGT_fnc = "RGT_fnc_pmcQM";
        RGT_loadoutType = "pmc";
    };

    class RGT_Mod_QM_Recon: RGT_Zeus_QM_Base {
        scopeCurator = 2;
        displayName = "Recce Quartermaster";
        RGT_fnc = "RGT_fnc_reconQM";
        RGT_loadoutType = "recon";
    };

    class RGT_Mod_QM_Rus: RGT_Zeus_QM_Base {
        scopeCurator = 2;
        displayName = "CTSO Quartermaster";
        RGT_fnc = "RGT_fnc_rusQM";
        RGT_loadoutType = "rus";
    };

    class RGT_Mod_QM_Sniper: RGT_Zeus_QM_Base {
        scopeCurator = 2;
        displayName = "Sniper Quartermaster";
        RGT_fnc = "RGT_fnc_sniperQM";
        RGT_loadoutType = "sniper";
    };

    class RGT_Mod_QM_SOF: RGT_Zeus_QM_Base {
        scopeCurator = 2;
        displayName = "SOF Quartermaster";
        RGT_fnc = "RGT_fnc_sofQM";
        RGT_loadoutType = "sof";
    };

    class RGT_Mod_QM_Spetsnaz: RGT_Zeus_QM_Base {
        scopeCurator = 2;
        displayName = "Spetsnaz Quartermaster";
        RGT_fnc = "RGT_fnc_spetsnazQM";
        RGT_loadoutType = "spetsnaz";
    };

    class RGT_Mod_QM_UC: RGT_Zeus_QM_Base {
        scopeCurator = 2;
        displayName = "Non Attributable Quartermaster";
        RGT_fnc = "RGT_fnc_ucQM";
        RGT_loadoutType = "uc";
    };

    class RGT_Mod_QM_WD: RGT_Zeus_QM_Base {
        scopeCurator = 2;
        displayName = "Woodland Quartermaster";
        RGT_fnc = "RGT_fnc_wdQM";
        RGT_loadoutType = "wd";
    };

    // --- FillBox modules ---

    class RGT_Mod_Box_AmmoWest: RGT_Zeus_FillBox_Base {
        scopeCurator = 2;
        displayName = "Ammo Box (West)";
        RGT_fnc = "RGT_fnc_AmmoBoxWest";
        RGT_defaultCrate = "Box_NATO_Ammo_F";
    };

    class RGT_Mod_Box_AmmoEast: RGT_Zeus_FillBox_Base {
        scopeCurator = 2;
        displayName = "Ammo Box (East)";
        RGT_fnc = "RGT_fnc_AmmoBoxEast";
        RGT_defaultCrate = "rhs_mags_crate";
    };

    class RGT_Mod_Box_Med: RGT_Zeus_FillBox_Base {
        scopeCurator = 2;
        displayName = "Medical Box";
        RGT_fnc = "RGT_fnc_MedBox";
        RGT_defaultCrate = "ACE_medicalSupplyCrate_advanced";
    };

    class RGT_Mod_Box_Scope: RGT_Zeus_FillBox_Base {
        scopeCurator = 2;
        displayName = "Scope Box";
        RGT_fnc = "RGT_fnc_ScopeBox";
        RGT_defaultCrate = "Box_NATO_Wps_F";
    };

    class RGT_Mod_Box_Support: RGT_Zeus_FillBox_Base {
        scopeCurator = 2;
        displayName = "Support Box";
        RGT_fnc = "RGT_fnc_SupportBox";
        RGT_defaultCrate = "Box_NATO_Support_F";
    };

    class RGT_Mod_Box_Explosive: RGT_Zeus_FillBox_Base {
        scopeCurator = 2;
        displayName = "Explosive Box";
        RGT_fnc = "RGT_fnc_ExplosiveBox";
        RGT_defaultCrate = "Box_NATO_AmmoOrd_F";
    };

    class RGT_Mod_Box_Barbie: RGT_Zeus_FillBox_Base {
        scopeCurator = 2;
        displayName = "Barbie Box";
        RGT_fnc = "RGT_fnc_BarbieBox";
        RGT_defaultCrate = "Box_NATO_Equip_F";
    };

    class RGT_Mod_Box_ResupplyWest: RGT_Zeus_FillBox_Base {
        scopeCurator = 2;
        displayName = "Vehicle Resupply (West)";
        RGT_fnc = "RGT_fnc_ResupplyWest";
    };

    class RGT_Mod_Box_ResupplyEast: RGT_Zeus_FillBox_Base {
        scopeCurator = 2;
        displayName = "Vehicle Resupply (East)";
        RGT_fnc = "RGT_fnc_ResupplyEast";
    };

    // --- Buttons modules ---

    class RGT_Mod_Btn_AmmoWest: RGT_Zeus_Buttons_Base {
        scopeCurator = 2;
        displayName = "Ammo Buttons (West)";
        RGT_fnc = "RGT_fnc_AmmoWestButtons";
    };

    class RGT_Mod_Btn_AmmoEast: RGT_Zeus_Buttons_Base {
        scopeCurator = 2;
        displayName = "Ammo Buttons (East)";
        RGT_fnc = "RGT_fnc_AmmoEastButtons";
    };

    class RGT_Mod_Btn_Med: RGT_Zeus_Buttons_Base {
        scopeCurator = 2;
        displayName = "Medical Buttons";
        RGT_fnc = "RGT_fnc_MedButtons";
    };

    class RGT_Mod_Btn_Barbie: RGT_Zeus_Buttons_Base {
        scopeCurator = 2;
        displayName = "Barbie Buttons";
        RGT_fnc = "RGT_fnc_BarbieButtons";
    };
};
