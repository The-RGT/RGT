// RGT Faction unit classes.
// Each unit is a thin subclass of a base soldier with an init eventhandler
// that calls the corresponding RGT loadout function from RGT_Loadouts.
//
// Pattern:
//   class RGT_<FactionAbbrev>_<Role>: <BaseClass> {
//       scope = 2; scopeCurator = 2;
//       faction = "RGT_Faction_<FactionName>";
//       side = <side>;
//       displayName = "<Role Name>";
//       class EventHandlers {
//           init = "(_this select 0) call RGT_fnc_<FunctionName>;";
//       };
//   };

class CfgVehicles {
    // Base-game references we inherit from
    class B_Soldier_F;
    class B_medic_F;
    class B_Soldier_AR_F;
    class B_Soldier_M_F;
    class B_Soldier_GL_F;
    class B_Soldier_TL_F;
    class B_Soldier_SL_F;
    class B_soldier_AT_F;
    class B_soldier_AAR_F;
    class B_engineer_F;
    class B_diver_F;
    class O_Soldier_F;
    class I_Soldier_F;
    class C_man_1;

    // ==================================================
    // RGT - Infantry (BLUFOR)
    // ==================================================

    class RGT_Inf_Base: B_Soldier_F {
        scope = 1;
        scopeCurator = 1;
        faction = "RGT_Faction_Infantry";
        side = 1;
        editorSubcategory = "EdSubcat_Personnel";
        displayName = "RGT Infantry Base (hidden)";
    };

    class RGT_Inf_Rifleman: RGT_Inf_Base {
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        class EventHandlers {
            init = "[_this select 0, 'RGT_fnc_Rifleman'] call RGT_Factions_fnc_initUnit;";
        };
    };

    class RGT_Inf_Leader: RGT_Inf_Base {
        scope = 2;
        scopeCurator = 2;
        displayName = "Leader";
        class EventHandlers {
            init = "[_this select 0, 'RGT_fnc_Leader'] call RGT_Factions_fnc_initUnit;";
        };
    };

    class RGT_Inf_CLS: RGT_Inf_Base {
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        icon = "iconManMedic";
        class EventHandlers {
            init = "[_this select 0, 'RGT_fnc_CLS'] call RGT_Factions_fnc_initUnit;";
        };
    };

    class RGT_Inf_AR: RGT_Inf_Base {
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        class EventHandlers {
            init = "[_this select 0, 'RGT_fnc_AR'] call RGT_Factions_fnc_initUnit;";
        };
    };

    class RGT_Inf_ARAmmoBearer: RGT_Inf_Base {
        scope = 2;
        scopeCurator = 2;
        displayName = "AR Ammo Bearer";
        class EventHandlers {
            init = "[_this select 0, 'RGT_fnc_Rifleman'] call RGT_Factions_fnc_initUnit; [_this select 0, 'RGT_fnc_ARAmmoBearer'] call RGT_Factions_fnc_initUnit;";
        };
    };

    class RGT_Inf_MG: RGT_Inf_Base {
        scope = 2;
        scopeCurator = 2;
        displayName = "Machinegunner";
        class EventHandlers {
            init = "[_this select 0, 'RGT_fnc_MG'] call RGT_Factions_fnc_initUnit;";
        };
    };

    class RGT_Inf_MGAmmoBearer: RGT_Inf_Base {
        scope = 2;
        scopeCurator = 2;
        displayName = "MG Ammo Bearer";
        class EventHandlers {
            init = "[_this select 0, 'RGT_fnc_Rifleman'] call RGT_Factions_fnc_initUnit; [_this select 0, 'RGT_fnc_MGAmmoBearer'] call RGT_Factions_fnc_initUnit;";
        };
    };

    class RGT_Inf_Grenadier: RGT_Inf_Base {
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        class EventHandlers {
            init = "[_this select 0, 'RGT_fnc_Grenadier'] call RGT_Factions_fnc_initUnit;";
        };
    };

    class RGT_Inf_GrenadierAmmoBearer: RGT_Inf_Base {
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier Ammo Bearer";
        class EventHandlers {
            init = "[_this select 0, 'RGT_fnc_Rifleman'] call RGT_Factions_fnc_initUnit; [_this select 0, 'RGT_fnc_GrenadierAmmoBearer'] call RGT_Factions_fnc_initUnit;";
        };
    };

    class RGT_Inf_Marksman: RGT_Inf_Base {
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        class EventHandlers {
            init = "[_this select 0, 'RGT_fnc_Marksman'] call RGT_Factions_fnc_initUnit;";
        };
    };

    class RGT_Inf_JTAC: RGT_Inf_Base {
        scope = 2;
        scopeCurator = 2;
        displayName = "JTAC";
        class EventHandlers {
            init = "[_this select 0, 'RGT_fnc_JTAC'] call RGT_Factions_fnc_initUnit;";
        };
    };

    class RGT_Inf_Radioman: RGT_Inf_Base {
        scope = 2;
        scopeCurator = 2;
        displayName = "Radioman";
        class EventHandlers {
            init = "[_this select 0, 'RGT_fnc_LRRM'] call RGT_Factions_fnc_initUnit;";
        };
    };

    class RGT_Inf_EOD: RGT_Inf_Base {
        scope = 2;
        scopeCurator = 2;
        displayName = "EOD Specialist";
        class EventHandlers {
            init = "[_this select 0, 'RGT_fnc_EOD'] call RGT_Factions_fnc_initUnit;";
        };
    };

    // --- Infantry support roles (added to support Faction.sqf groups) ---

    class RGT_Inf_MedAT: RGT_Inf_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Medium AT";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_Rifleman'] call RGT_Factions_fnc_initUnit; [_this select 0, 'RGT_fnc_MedAT'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Inf_MedATAmmoBearer: RGT_Inf_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Medium AT Ammo Bearer";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_Rifleman'] call RGT_Factions_fnc_initUnit; [_this select 0, 'RGT_fnc_MedAT_AmmoBearer'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Inf_HeavyAT: RGT_Inf_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Heavy AT (Javelin)";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_Rifleman'] call RGT_Factions_fnc_initUnit; [_this select 0, 'RGT_fnc_HeavyAT'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Inf_HeavyATAmmoBearer: RGT_Inf_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Heavy AT Ammo Bearer";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_Rifleman'] call RGT_Factions_fnc_initUnit; [_this select 0, 'RGT_fnc_HeavyAT_AmmoBearer'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Inf_AntiAir: RGT_Inf_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Anti-Air Gunner";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_Rifleman'] call RGT_Factions_fnc_initUnit; [_this select 0, 'RGT_fnc_AntiAir'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Inf_AntiAirAmmoBearer: RGT_Inf_Base {
        scope = 2; scopeCurator = 2;
        displayName = "AA Ammo Bearer";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_Rifleman'] call RGT_Factions_fnc_initUnit; [_this select 0, 'RGT_fnc_AntiAir_AmmoBearer'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Inf_Mortarman: RGT_Inf_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Mortarman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_Rifleman'] call RGT_Factions_fnc_initUnit; [_this select 0, 'RGT_fnc_Mortar_Tube'] call RGT_Factions_fnc_initUnit; (_this select 0) call RGT_Factions_fnc_deployMortar;"; };
    };
    class RGT_Inf_MortarAmmoBearer: RGT_Inf_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Mortar Ammo Bearer";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_Rifleman'] call RGT_Factions_fnc_initUnit; [_this select 0, 'RGT_fnc_Mortar_Ammo'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Inf_LightAT: RGT_Inf_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Light AT";
        // Note: no Infantry-specific LightAT loadout exists in RGT_Loadouts; using woodland LightAT chained on Rifleman base.
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_Rifleman'] call RGT_Factions_fnc_initUnit; [_this select 0, 'RGT_fnc_LightATwd'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Inf_Crewman: RGT_Inf_Base {
        scope = 2; scopeCurator = 2;
        displayName = "AFV Crewman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_Crewman'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Inf_HeliCrewman: RGT_Inf_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Helicopter Crewman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_HeliCrewman'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Inf_PlaneCrewman: RGT_Inf_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Plane Crewman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_PlaneCrewman'] call RGT_Factions_fnc_initUnit;"; };
    };

    // ==================================================
    // RGT - Woodland (BLUFOR)
    // ==================================================

    class RGT_WD_Base: B_Soldier_F {
        scope = 1;
        scopeCurator = 1;
        faction = "RGT_Faction_Woodland";
        side = 1;
        editorSubcategory = "EdSubcat_Personnel";
        displayName = "RGT Woodland Base (hidden)";
    };

    class RGT_WD_Rifleman: RGT_WD_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Rifleman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_Riflemanwd'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_WD_Leader: RGT_WD_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Leader";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_Leaderwd'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_WD_CLS: RGT_WD_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Combat Life Saver";
        icon = "iconManMedic";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_CLSwd'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_WD_AR: RGT_WD_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Autorifleman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_ARwd'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_WD_ARAmmoBearer: RGT_WD_Base {
        scope = 2; scopeCurator = 2;
        displayName = "AR Ammo Bearer";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_Riflemanwd'] call RGT_Factions_fnc_initUnit; [_this select 0, 'RGT_fnc_ARAmmoBearerwd'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_WD_MG: RGT_WD_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Machinegunner";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_MGwd'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_WD_MGAmmoBearer: RGT_WD_Base {
        scope = 2; scopeCurator = 2;
        displayName = "MG Ammo Bearer";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_Riflemanwd'] call RGT_Factions_fnc_initUnit; [_this select 0, 'RGT_fnc_MGAmmoBearerwd'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_WD_Grenadier: RGT_WD_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Grenadier";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_Grenadierwd'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_WD_GrenadierAmmoBearer: RGT_WD_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Grenadier Ammo Bearer";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_Riflemanwd'] call RGT_Factions_fnc_initUnit; [_this select 0, 'RGT_fnc_GrenadierAmmoBearerwd'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_WD_Marksman: RGT_WD_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Marksman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_Marksmanwd'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_WD_JTAC: RGT_WD_Base {
        scope = 2; scopeCurator = 2;
        displayName = "JTAC";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_JTACwd'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_WD_Radioman: RGT_WD_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Radioman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_LRRMwd'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_WD_EOD: RGT_WD_Base {
        scope = 2; scopeCurator = 2;
        displayName = "EOD Specialist";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_EODwd'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_WD_Engineer: RGT_WD_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Engineer";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_Engineerwd'] call RGT_Factions_fnc_initUnit;"; };
    };

    // --- Woodland support roles (added to support Faction.sqf groups) ---

    class RGT_WD_MedAT: RGT_WD_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Medium AT";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_Riflemanwd'] call RGT_Factions_fnc_initUnit; [_this select 0, 'RGT_fnc_MedAT'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_WD_MedATAmmoBearer: RGT_WD_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Medium AT Ammo Bearer";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_Riflemanwd'] call RGT_Factions_fnc_initUnit; [_this select 0, 'RGT_fnc_MedAT_AmmoBearer'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_WD_HeavyAT: RGT_WD_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Heavy AT (Javelin)";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_Riflemanwd'] call RGT_Factions_fnc_initUnit; [_this select 0, 'RGT_fnc_HeavyAT'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_WD_HeavyATAmmoBearer: RGT_WD_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Heavy AT Ammo Bearer";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_Riflemanwd'] call RGT_Factions_fnc_initUnit; [_this select 0, 'RGT_fnc_HeavyAT_AmmoBearer'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_WD_AntiAir: RGT_WD_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Anti-Air Gunner";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_Riflemanwd'] call RGT_Factions_fnc_initUnit; [_this select 0, 'RGT_fnc_AntiAir'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_WD_AntiAirAmmoBearer: RGT_WD_Base {
        scope = 2; scopeCurator = 2;
        displayName = "AA Ammo Bearer";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_Riflemanwd'] call RGT_Factions_fnc_initUnit; [_this select 0, 'RGT_fnc_AntiAir_AmmoBearer'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_WD_Mortarman: RGT_WD_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Mortarman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_Riflemanwd'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_WD_MortarAmmoBearer: RGT_WD_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Mortar Ammo Bearer";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_Riflemanwd'] call RGT_Factions_fnc_initUnit; [_this select 0, 'RGT_fnc_Mortar_Ammo'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_WD_LightAT: RGT_WD_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Light AT";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_Riflemanwd'] call RGT_Factions_fnc_initUnit; [_this select 0, 'RGT_fnc_LightATwd'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_WD_Crewman: RGT_WD_Base {
        scope = 2; scopeCurator = 2;
        displayName = "AFV Crewman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_Crewman'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_WD_HeliCrewman: RGT_WD_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Helicopter Crewman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_HeliCrewman'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_WD_PlaneCrewman: RGT_WD_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Plane Crewman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_PlaneCrewman'] call RGT_Factions_fnc_initUnit;"; };
    };

    // ==================================================
    // RGT - Arctic (BLUFOR)
    // ==================================================

    class RGT_Arctic_Base: B_Soldier_F {
        scope = 1;
        scopeCurator = 1;
        faction = "RGT_Faction_Arctic";
        side = 1;
        editorSubcategory = "EdSubcat_Personnel";
        displayName = "RGT Arctic Base (hidden)";
    };

    class RGT_Arctic_AR: RGT_Arctic_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Autorifleman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_ARArctic'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Arctic_Assault: RGT_Arctic_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Assault";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_AssaultArctic'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Arctic_Breacher: RGT_Arctic_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Breacher";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_BreacherArctic'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Arctic_CLS: RGT_Arctic_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Combat Life Saver";
        icon = "iconManMedic";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_CLSArctic'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Arctic_Grenadier: RGT_Arctic_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Grenadier";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_GrenadierArctic'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Arctic_Leader: RGT_Arctic_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Leader";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_LeaderArctic'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Arctic_LightAT: RGT_Arctic_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Light AT";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_LightATArctic'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Arctic_Marksman: RGT_Arctic_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Marksman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_MarksmanArctic'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Arctic_RTO: RGT_Arctic_Base {
        scope = 2; scopeCurator = 2;
        displayName = "RTO";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_RTOArctic'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Arctic_JTAC: RGT_Arctic_Base {
        scope = 2; scopeCurator = 2;
        displayName = "JTAC";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_JTACArctic'] call RGT_Factions_fnc_initUnit;"; };
    };

    // ==================================================
    // RGT - CBRN (BLUFOR)
    // ==================================================

    class RGT_CBRN_Base: B_Soldier_F {
        scope = 1;
        scopeCurator = 1;
        faction = "RGT_Faction_CBRN";
        side = 1;
        editorSubcategory = "EdSubcat_Personnel";
        displayName = "RGT CBRN Base (hidden)";
    };

    class RGT_CBRN_AR: RGT_CBRN_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Autorifleman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_ARCBRN'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_CBRN_CLS: RGT_CBRN_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Combat Life Saver";
        icon = "iconManMedic";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_CLSCBRN'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_CBRN_EOD: RGT_CBRN_Base {
        scope = 2; scopeCurator = 2;
        displayName = "EOD Specialist";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_EODCBRN'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_CBRN_Grenadier: RGT_CBRN_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Grenadier";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_GrenadierCBRN'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_CBRN_JTAC: RGT_CBRN_Base {
        scope = 2; scopeCurator = 2;
        displayName = "JTAC";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_JTACCBRN'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_CBRN_Leader: RGT_CBRN_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Leader";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_LeaderCBRN'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_CBRN_Radioman: RGT_CBRN_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Radioman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_LRRMCBRN'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_CBRN_Marksman: RGT_CBRN_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Marksman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_MarksmanCBRN'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_CBRN_Rifleman: RGT_CBRN_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Rifleman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_RiflemanCBRN'] call RGT_Factions_fnc_initUnit;"; };
    };

    // ==================================================
    // RGT - Cold War / FAL (BLUFOR)
    // ==================================================

    class RGT_CW_Base: B_Soldier_F {
        scope = 1;
        scopeCurator = 1;
        faction = "RGT_Faction_ColdWar";
        side = 1;
        editorSubcategory = "EdSubcat_Personnel";
        displayName = "RGT Cold War Base (hidden)";
    };

    class RGT_CW_AntiAir: RGT_CW_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Anti-Air";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_cw_AntiAir'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_CW_CLS: RGT_CW_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Combat Life Saver";
        icon = "iconManMedic";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_cw_CLS'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_CW_EOD: RGT_CW_Base {
        scope = 2; scopeCurator = 2;
        displayName = "EOD Specialist";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_cw_EOD'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_CW_Grenadier: RGT_CW_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Grenadier";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_cw_grenadier'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_CW_Leader: RGT_CW_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Leader";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_cw_leader'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_CW_Radioman: RGT_CW_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Radioman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_cw_radioman'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_CW_Marksman: RGT_CW_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Marksman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_cw_marksman'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_CW_MG: RGT_CW_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Machinegunner";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_cw_MG'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_CW_Rifleman: RGT_CW_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Rifleman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_cw_Rifleman'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_CW_LightAT: RGT_CW_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Light AT";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_cw_LightAT'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_CW_Crewman: RGT_CW_Base {
        scope = 2; scopeCurator = 2;
        displayName = "AFV Crewman";
        // No Cold War-specific crewman function; using period-appropriate Rifleman loadout
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_cw_Rifleman'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_CW_HeliCrewman: RGT_CW_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Helicopter Crewman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_cw_Rifleman'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_CW_PlaneCrewman: RGT_CW_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Plane Crewman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_cw_Rifleman'] call RGT_Factions_fnc_initUnit;"; };
    };

    // ==================================================
    // RGT - Cold War M16 (BLUFOR)
    // ==================================================

    class RGT_CWM16_Base: B_Soldier_F {
        scope = 1;
        scopeCurator = 1;
        faction = "RGT_Faction_ColdWarM16";
        side = 1;
        editorSubcategory = "EdSubcat_Personnel";
        displayName = "RGT Cold War M16 Base (hidden)";
    };

    class RGT_CWM16_AntiAir: RGT_CWM16_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Anti-Air";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_cw_AntiAir_ar15'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_CWM16_CLS: RGT_CWM16_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Combat Life Saver";
        icon = "iconManMedic";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_cw_CLS_ar15'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_CWM16_EOD: RGT_CWM16_Base {
        scope = 2; scopeCurator = 2;
        displayName = "EOD Specialist";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_cw_EOD_ar15'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_CWM16_Grenadier: RGT_CWM16_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Grenadier";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_cw_grenadier_ar15'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_CWM16_Leader: RGT_CWM16_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Leader";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_cw_leader_ar15'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_CWM16_Radioman: RGT_CWM16_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Radioman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_cw_radioman_ar15'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_CWM16_Marksman: RGT_CWM16_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Marksman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_cw_marksman_m14'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_CWM16_Rifleman: RGT_CWM16_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Rifleman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_cw_Rifleman_ar15'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_CWM16_LightAT: RGT_CWM16_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Light AT";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_cw_LightAT_ar15'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_CWM16_MG: RGT_CWM16_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Machinegunner";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_cw_mgar15'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_CWM16_Crewman: RGT_CWM16_Base {
        scope = 2; scopeCurator = 2;
        displayName = "AFV Crewman";
        // No Cold War-specific crewman function; using period-appropriate M16 Rifleman loadout
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_cw_Rifleman_ar15'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_CWM16_HeliCrewman: RGT_CWM16_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Helicopter Crewman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_cw_Rifleman_ar15'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_CWM16_PlaneCrewman: RGT_CWM16_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Plane Crewman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_cw_Rifleman_ar15'] call RGT_Factions_fnc_initUnit;"; };
    };

    // ==================================================
    // RGT - SOF (BLUFOR)
    // ==================================================

    class RGT_SOF_Base: B_Soldier_F {
        scope = 1;
        scopeCurator = 1;
        faction = "RGT_Faction_SOF";
        side = 1;
        editorSubcategory = "EdSubcat_Personnel";
        displayName = "RGT SOF Base (hidden)";
    };

    class RGT_SOF_AR: RGT_SOF_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Autorifleman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_ARSpecOps'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_SOF_Assault: RGT_SOF_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Assault";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_AssaultSpecOps'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_SOF_Breacher: RGT_SOF_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Breacher";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_BreacherSpecOps'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_SOF_CLS: RGT_SOF_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Combat Life Saver";
        icon = "iconManMedic";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_CLSSpecOps'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_SOF_JTAC: RGT_SOF_Base {
        scope = 2; scopeCurator = 2;
        displayName = "JTAC";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_JTACSpecOps'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_SOF_Leader: RGT_SOF_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Leader";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_LeaderSpecOps'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_SOF_LightAT: RGT_SOF_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Light AT";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_LightATSpecOps'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_SOF_Marksman: RGT_SOF_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Marksman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_MarksmanSpecOps'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_SOF_Pointman: RGT_SOF_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Pointman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_PointmanSpecOps'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_SOF_Signaler: RGT_SOF_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Signaler";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_SignalerSpecOps'] call RGT_Factions_fnc_initUnit;"; };
    };

    // ==================================================
    // RGT - Sniper (BLUFOR)
    // ==================================================

    class RGT_Sniper_Base: B_Soldier_F {
        scope = 1;
        scopeCurator = 1;
        faction = "RGT_Faction_Sniper";
        side = 1;
        editorSubcategory = "EdSubcat_Personnel";
        displayName = "RGT Sniper Base (hidden)";
    };

    class RGT_Sniper_Sniper: RGT_Sniper_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Sniper";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_SniperSpecOps'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Sniper_Spotter: RGT_Sniper_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Spotter";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_Spotter'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Sniper_SniperSpecOps: RGT_Sniper_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Sniper (SOF)";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_SniperSpecOps'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Sniper_SpotterSpecOps: RGT_Sniper_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Spotter (SOF)";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_SpotterSpecOps'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Sniper_HeavySniperSpecOps: RGT_Sniper_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Heavy Sniper (SOF)";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_HeavySniperSpecOps'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Sniper_SniperAFO: RGT_Sniper_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Sniper (AFO)";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_SniperAFO'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Sniper_SpotterAFO: RGT_Sniper_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Spotter (AFO)";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_SpotterAFO'] call RGT_Factions_fnc_initUnit;"; };
    };

    // ==================================================
    // RGT - Recce (BLUFOR)
    // ==================================================

    class RGT_Recce_Base: B_Soldier_F {
        scope = 1;
        scopeCurator = 1;
        faction = "RGT_Faction_Recce";
        side = 1;
        editorSubcategory = "EdSubcat_Personnel";
        displayName = "RGT Recce Base (hidden)";
    };

    class RGT_Recce_AR: RGT_Recce_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Autorifleman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_ARRecon'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Recce_CLS: RGT_Recce_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Combat Life Saver";
        icon = "iconManMedic";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_CLSRecon'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Recce_Leader: RGT_Recce_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Leader";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_LeaderRecon'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Recce_Scout: RGT_Recce_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Scout";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_ScoutRecon'] call RGT_Factions_fnc_initUnit;"; };
    };

    // ==================================================
    // RGT - Diving (BLUFOR)
    // ==================================================

    class RGT_Diving_Base: B_diver_F {
        scope = 1;
        scopeCurator = 1;
        faction = "RGT_Faction_Diving";
        side = 1;
        editorSubcategory = "EdSubcat_Personnel";
        displayName = "RGT Diving Base (hidden)";
    };

    class RGT_Diving_CLS: RGT_Diving_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Combat Life Saver";
        icon = "iconManMedic";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_CLSDiving'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Diving_Engineer: RGT_Diving_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Engineer";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_EngineerDiving'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Diving_Leader: RGT_Diving_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Leader";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_LeaderDiving'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Diving_Rifleman: RGT_Diving_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Rifleman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_RiflemanDiving'] call RGT_Factions_fnc_initUnit;"; };
    };

    // ==================================================
    // RGT - Russian (OPFOR)
    // ==================================================

    class RGT_Rus_Base: O_Soldier_F {
        scope = 1;
        scopeCurator = 1;
        faction = "RGT_Faction_Russian";
        side = 0;
        editorSubcategory = "EdSubcat_Personnel";
        displayName = "RGT Russian Base (hidden)";
    };

    class RGT_Rus_AR: RGT_Rus_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Autorifleman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_ARRUS'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Rus_CLS: RGT_Rus_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Combat Life Saver";
        icon = "iconManMedic";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_CLSRUS'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Rus_Engineer: RGT_Rus_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Engineer";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_EngineerRUS'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Rus_Grenadier: RGT_Rus_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Grenadier";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_GrenadierRUS'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Rus_Leader: RGT_Rus_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Leader";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_LeaderRUS'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Rus_LightAT: RGT_Rus_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Light AT";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_LightATRUS'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Rus_Radioman: RGT_Rus_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Radioman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_LRRMRUS'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Rus_Marksman: RGT_Rus_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Marksman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_MarksmanRUS'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Rus_MG: RGT_Rus_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Machinegunner";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_MGRUS'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Rus_Rifleman: RGT_Rus_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Rifleman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_RiflemanRUS'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Rus_Sniper: RGT_Rus_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Sniper";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_SniperRUS'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Rus_Spotter: RGT_Rus_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Spotter";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_SpotterRUS'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Rus_RWcrew: RGT_Rus_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Helicopter Crewman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_RWcrewRUS'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Rus_FWcrew: RGT_Rus_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Plane Crewman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_FWcrewRUS'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Rus_AFVcrew: RGT_Rus_Base {
        scope = 2; scopeCurator = 2;
        displayName = "AFV Crewman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_AFVcrewRUS'] call RGT_Factions_fnc_initUnit;"; };
    };

    // --- Russian support roles (added to support Faction.sqf groups) ---

    class RGT_Rus_MedAT: RGT_Rus_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Medium AT";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_RiflemanRUS'] call RGT_Factions_fnc_initUnit; [_this select 0, 'RGT_fnc_MedATRUS'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Rus_MedATAmmoBearer: RGT_Rus_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Medium AT Ammo Bearer";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_RiflemanRUS'] call RGT_Factions_fnc_initUnit; [_this select 0, 'RGT_fnc_MedAT_AmmoBearerRUS'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Rus_AntiAir: RGT_Rus_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Anti-Air Gunner";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_RiflemanRUS'] call RGT_Factions_fnc_initUnit; [_this select 0, 'RGT_fnc_AntiAirRUS'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Rus_AntiAirAmmoBearer: RGT_Rus_Base {
        scope = 2; scopeCurator = 2;
        displayName = "AA Ammo Bearer";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_RiflemanRUS'] call RGT_Factions_fnc_initUnit; [_this select 0, 'RGT_fnc_AntiAir_AmmoBearerRUS'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Rus_MGAmmoBearer_RUS: RGT_Rus_Base {
        scope = 2; scopeCurator = 2;
        displayName = "MG Ammo Bearer (Russian)";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_RiflemanRUS'] call RGT_Factions_fnc_initUnit; [_this select 0, 'RGT_fnc_MG_AmmoBearerRUS'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Rus_GrenadierAmmoBearer: RGT_Rus_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Grenadier Ammo Bearer";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_RiflemanRUS'] call RGT_Factions_fnc_initUnit; [_this select 0, 'RGT_fnc_GrenadierAmmoBearerRUS'] call RGT_Factions_fnc_initUnit;"; };
    };

    // ==================================================
    // RGT - Spetsnaz (OPFOR)
    // ==================================================

    class RGT_Spetsnaz_Base: O_Soldier_F {
        scope = 1;
        scopeCurator = 1;
        faction = "RGT_Faction_Spetsnaz";
        side = 0;
        editorSubcategory = "EdSubcat_Personnel";
        displayName = "RGT Spetsnaz Base (hidden)";
    };

    class RGT_Spetsnaz_AR: RGT_Spetsnaz_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Autorifleman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_ARSpetsnaz'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Spetsnaz_Assault: RGT_Spetsnaz_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Assault";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_AssaultSpetsnaz'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Spetsnaz_Breacher: RGT_Spetsnaz_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Breacher";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_BreacherSpetsnaz'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Spetsnaz_CLS: RGT_Spetsnaz_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Combat Life Saver";
        icon = "iconManMedic";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_CLSSpetsnaz'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Spetsnaz_Leader: RGT_Spetsnaz_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Leader";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_LeaderSpetsnaz'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Spetsnaz_LightAT: RGT_Spetsnaz_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Light AT";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_LightATSpetsnaz'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Spetsnaz_Marksman: RGT_Spetsnaz_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Marksman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_MarksmanSpetsnaz'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Spetsnaz_Pointman: RGT_Spetsnaz_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Pointman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_PointmanSpetsnaz'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Spetsnaz_Signaler: RGT_Spetsnaz_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Signaler";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_SignalerSpetsnaz'] call RGT_Factions_fnc_initUnit;"; };
    };

    // ==================================================
    // RGT - Taliban (OPFOR)
    // ==================================================

    class RGT_Taliban_Base: O_Soldier_F {
        scope = 1;
        scopeCurator = 1;
        faction = "RGT_Faction_Taliban";
        side = 0;
        editorSubcategory = "EdSubcat_Personnel";
        displayName = "RGT Taliban Base (hidden)";
    };

    class RGT_Taliban_AR: RGT_Taliban_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Autorifleman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_ARTaliban'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Taliban_CLS: RGT_Taliban_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Combat Life Saver";
        icon = "iconManMedic";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_CLSTaliban'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Taliban_Grenadier: RGT_Taliban_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Grenadier";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_GrenadierTaliban'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Taliban_Leader: RGT_Taliban_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Leader";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_LeaderTaliban'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Taliban_Marksman: RGT_Taliban_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Marksman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_MarksmanTaliban'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Taliban_MedAT: RGT_Taliban_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Medium AT";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_MedATTaliban'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Taliban_MG: RGT_Taliban_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Machinegunner";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_MGTaliban'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Taliban_Rifleman: RGT_Taliban_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Rifleman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_RiflemanTaliban'] call RGT_Factions_fnc_initUnit;"; };
    };

    // ==================================================
    // RGT - Guerrilla (INDEPENDENT)
    // ==================================================

    class RGT_Guer_Base: I_Soldier_F {
        scope = 1;
        scopeCurator = 1;
        faction = "RGT_Faction_Guerrilla";
        side = 2;
        editorSubcategory = "EdSubcat_Personnel";
        displayName = "RGT Guerrilla Base (hidden)";
    };

    class RGT_Guer_Rebel: RGT_Guer_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Rebel";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_RebelGue'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Guer_AR: RGT_Guer_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Autorifleman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_ARGue'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Guer_CLS: RGT_Guer_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Combat Life Saver";
        icon = "iconManMedic";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_CLSGue'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Guer_Grenadier: RGT_Guer_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Grenadier";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_GrenadierGue'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Guer_Leader: RGT_Guer_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Leader";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_LeaderGue'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Guer_Sniper: RGT_Guer_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Sniper";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_SniperGue'] call RGT_Factions_fnc_initUnit;"; };
    };

    // ==================================================
    // RGT - PMC (INDEPENDENT)
    // ==================================================

    class RGT_PMC_Base: I_Soldier_F {
        scope = 1;
        scopeCurator = 1;
        faction = "RGT_Faction_PMC";
        side = 2;
        editorSubcategory = "EdSubcat_Personnel";
        displayName = "RGT PMC Base (hidden)";
    };

    class RGT_PMC_AR: RGT_PMC_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Autorifleman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_ARPmc'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_PMC_CLS: RGT_PMC_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Combat Life Saver";
        icon = "iconManMedic";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_CLSPmc'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_PMC_Leader: RGT_PMC_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Team Leader";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_LeaderPmc'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_PMC_Merc: RGT_PMC_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Mercenary";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_MercPmc'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_PMC_Sniper: RGT_PMC_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Sniper";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_SniperPmc'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_PMC_Body: RGT_PMC_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Bodyguard";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_body'] call RGT_Factions_fnc_initUnit;"; };
    };

    // ==================================================
    // RGT - Foreign Advisor (INDEPENDENT)
    // ==================================================

    class RGT_FA_Base: I_Soldier_F {
        scope = 1;
        scopeCurator = 1;
        faction = "RGT_Faction_ForeignAdvisor";
        side = 2;
        editorSubcategory = "EdSubcat_Personnel";
        displayName = "RGT Foreign Advisor Base (hidden)";
    };

    class RGT_FA_AR: RGT_FA_Base {
        scope = 2; scopeCurator = 2;
        displayName = "AR";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_char'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_FA_Breacher: RGT_FA_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Breacher";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_chbreach'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_FA_CLS: RGT_FA_Base {
        scope = 2; scopeCurator = 2;
        displayName = "CLS";
        icon = "iconManMedic";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_chcls'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_FA_DMR: RGT_FA_Base {
        scope = 2; scopeCurator = 2;
        displayName = "DMR";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_chdmr'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_FA_Leader: RGT_FA_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Leader";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_chlead'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_FA_Rifleman: RGT_FA_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Rifleman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_chrifle'] call RGT_Factions_fnc_initUnit;"; };
    };

    // ==================================================
    // RGT - UC / Non Attributable (INDEPENDENT)
    // ==================================================

    class RGT_UC_Base: I_Soldier_F {
        scope = 1;
        scopeCurator = 1;
        faction = "RGT_Faction_UC";
        side = 2;
        editorSubcategory = "EdSubcat_Personnel";
        displayName = "RGT UC Base (hidden)";
    };

    class RGT_UC_AR: RGT_UC_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Autorifleman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_ARUc'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_UC_CLS: RGT_UC_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Combat Life Saver";
        icon = "iconManMedic";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_CLSUc'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_UC_Engineer: RGT_UC_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Engineer";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_EngineerUc'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_UC_Leader: RGT_UC_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Leader";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_LeaderUc'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_UC_Marksman: RGT_UC_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Marksman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_MarksmanUc'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_UC_Rifleman: RGT_UC_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Rifleman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_RiflemanUc'] call RGT_Factions_fnc_initUnit;"; };
    };

    // ==================================================
    // RGT - Civilian (CIVILIAN)
    // ==================================================

    class RGT_Civ_Base: C_man_1 {
        scope = 1;
        scopeCurator = 1;
        faction = "RGT_Faction_Civilian";
        side = 3;
        editorSubcategory = "EdSubcat_Personnel";
        displayName = "RGT Civilian Base (hidden)";
    };

    class RGT_Civ_Civilian: RGT_Civ_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Civilian";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_civi'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Civ_Businessman: RGT_Civ_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Businessman";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_busi'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Civ_Mechanic: RGT_Civ_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Mechanic";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_mech'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Civ_Peasant: RGT_Civ_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Peasant";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_peas'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Civ_Scientist: RGT_Civ_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Scientist";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_scie'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Civ_Reporter: RGT_Civ_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Reporter";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_repo'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Civ_Police: RGT_Civ_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Police";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_poli'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Civ_Wiseman: RGT_Civ_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Wise Man";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_wise'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Civ_NGO: RGT_Civ_Base {
        scope = 2; scopeCurator = 2;
        displayName = "NGO Worker";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_ngo'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Civ_Paramedic: RGT_Civ_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Paramedic";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_para'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Civ_Construction: RGT_Civ_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Construction Worker";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_cons'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Civ_Bandit: RGT_Civ_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Bandit";
        class EventHandlers { init = "[_this select 0, 'RGT_fnc_band'] call RGT_Factions_fnc_initUnit;"; };
    };
    class RGT_Civ_Random: RGT_Civ_Base {
        scope = 2; scopeCurator = 2;
        displayName = "Random Civilian";
        class EventHandlers { init = "[_this select 0] call RGT_Factions_fnc_initRandomCiv;"; };
    };

    // ==================== VEHICLES ====================
    // Forward declarations for base vehicle classes (one per unique original class)
    // Infantry (NATO Woodland skins) - RHS, UK3CB, LOP
    class RHSGREF_A29B_HIDF;
    class UK3CB_AAF_B_Osprey_IDWS_MG_G;
    class RHS_AH1Z;
    class UK3CB_ION_B_Desert_MELB_AH6M;
    class RHS_AH64D;
    class RHS_CH_47F_10;
    class rhsusf_CH53E_USMC_D;
    class UK3CB_B_Bell412_Armed_dynamicLoadout_CDF;
    class RHS_MELB_MH6M;
    class rhs_mh60s_ESSS2;
    class UK3CB_CW_US_B_EARLY_UH1H_M240;
    class RHS_UH1Y_UNARMED_d;
    class RHS_UH60M;
    class LOP_GRE_HEMTT_Ammo_D;
    class LOP_GRE_HEMTT_Fuel_D;
    class LOP_GRE_HEMTT_Repair_D;
    class rhsusf_m1151_m2_v1_usarmy_wd;
    class rhsusf_m1151_m240_v1_usarmy_wd;
    class rhsusf_m1043_w_mk19;
    class rhsusf_M1230a1_usarmy_wd;
    class rhsusf_M1230_MK19_usarmy_wd;
    class rhsusf_M1083A1P2_B_M2_WD_fmtv_usarmy;
    class rhsusf_m1a2sep2wd_usarmy;
    class RHS_M2A3_BUSKIII_wd;
    class rhsusf_stryker_m1126_m2_wd;
    class rhsusf_m1240a1_m2_usarmy_wd;
    class rhsusf_m1240a1_m240_usarmy_wd;
    class rhsusf_M1232_MC_MK19_usmc_wd;
    class RHS_M2StaticMG_USMC_WD;
    class RHS_M2StaticMG_MiniTripod_USMC_WD;
    class RHS_TOW_TriPod_USMC_WD;
    // SOF
    class rhsusf_m1165a1_gmv_m2_m240_socom_d;
    class rhsusf_m1165a1_gmv_m134d_m240_socom_d;
    class rhsusf_m1165a1_gmv_mk19_m240_socom_d;
    class rhsusf_M1078A1P2_WD_fmtv_usarmy;
    class rhsusf_m1240a1_mk19_usarmy_wd;
    class rhsusf_M1239_MK19_Deploy_socom_d;
    class rhsusf_mrzr4_d;
    class rhsusf_mkvsoc;
    class rhsgref_hidf_rhib;
    class UK3CB_MDF_B_RHIB_Gunboat;
    class B_T_Boat_Transport_01_F;
    // LOP Taliban / Guerrilla
    class LOP_TAK_Civ_Landrover;
    class LOP_TAK_Civ_UAZ;
    class LOP_TAK_Civ_Ural;
    class LOP_TAK_Civ_Offroad;
    class LOP_AM_OPF_Landrover_M2;
    class LOP_AM_OPF_Offroad_M2;
    // UK3CB (PMC / FA / UC / Sniper / Recce)
    class UK3CB_C_SUV;
    class UK3CB_C_TT650;
    class UK3CB_ION_B_Winter_SUV_Armed;
    class UK3CB_C_Hilux_Open;
    class UK3CB_C_Hatchback;
    class UK3CB_ADA_B_M1030;
    class UK3CB_C_LandRover_Softtop_Transport_Open;
    // NDS
    class NDS_6x6_ATV_MIL;
    // RHS Russian
    class rhs_tigr_vdv;
    class rhs_tigr_m_vdv;
    class rhs_tigr_sts_3camo_vdv;
    class rhs_bmp2d_vdv;
    class rhsgref_BRDM2_vdv;
    class rhs_gaz66_vmf;
    class rhs_kamaz5350_open_vmf;
    class RHS_Ka52_vvsc;
    class RHS_Mi24Vt_vvsc;
    class RHS_Mi8mt_Cargo_vvs;
    class rhs_btr80a_vmf;
    // CBRN
    class CBRN_Offroad;
    class CBRN_Responce_Vehicle;
    class CBRN_Containment_Vehicle;
    class CBRN_Offroad_Comms;
    // Cold War (UK3CB CW) — UH1H_M240 already forward-declared above for Infantry
    class UK3CB_CW_US_B_EARLY_M151_Jeep_HMG;
    class UK3CB_CW_US_B_EARLY_UH1H_MED;
    class UK3CB_CW_US_B_EARLY_M939_Open;
    class UK3CB_CW_US_B_EARLY_M151_Jeep_TOW;
    class UK3CB_CW_US_B_EARLY_M151_Jeep_Closed;
    class UK3CB_CW_US_B_EARLY_M60a3;
    class UK3CB_CW_US_B_LATE_M113_M2;
    class UK3CB_CW_US_B_LATE_AAV;
    class UK3CB_CW_US_B_LATE_M113_MK19;
    // Diving (vanilla)
    class B_SDV_01_F;

    // -------------------- Infantry Vehicles (BLUFOR) --------------------
    // Planes
    class RGT_Inf_Veh_A29B: RHSGREF_A29B_HIDF {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Infantry"; side = 1;
        crew = "RGT_Inf_PlaneCrewman";
    };
    class RGT_Inf_Veh_CV22: UK3CB_AAF_B_Osprey_IDWS_MG_G {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Infantry"; side = 1;
        crew = "RGT_Inf_HeliCrewman";
    };
    // Helicopters
    class RGT_Inf_Veh_AH1Z: RHS_AH1Z {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Infantry"; side = 1;
        crew = "RGT_Inf_HeliCrewman";
    };
    class RGT_Inf_Veh_AH6M: UK3CB_ION_B_Desert_MELB_AH6M {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Infantry"; side = 1;
        crew = "RGT_Inf_HeliCrewman";
    };
    class RGT_Inf_Veh_AH64D: RHS_AH64D {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Infantry"; side = 1;
        crew = "RGT_Inf_HeliCrewman";
    };
    class RGT_Inf_Veh_CH47F: RHS_CH_47F_10 {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Infantry"; side = 1;
        crew = "RGT_Inf_HeliCrewman";
    };
    class RGT_Inf_Veh_CH53E: rhsusf_CH53E_USMC_D {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Infantry"; side = 1;
        crew = "RGT_Inf_HeliCrewman";
    };
    class RGT_Inf_Veh_CH146: UK3CB_B_Bell412_Armed_dynamicLoadout_CDF {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Infantry"; side = 1;
        crew = "RGT_Inf_HeliCrewman";
    };
    class RGT_Inf_Veh_MH6M: RHS_MELB_MH6M {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Infantry"; side = 1;
        crew = "RGT_Inf_HeliCrewman";
    };
    class RGT_Inf_Veh_MH60L: rhs_mh60s_ESSS2 {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Infantry"; side = 1;
        crew = "RGT_Inf_HeliCrewman";
    };
    class RGT_Inf_Veh_UH1H: UK3CB_CW_US_B_EARLY_UH1H_M240 {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Infantry"; side = 1;
        crew = "RGT_Inf_HeliCrewman";
    };
    class RGT_Inf_Veh_UH1Y: RHS_UH1Y_UNARMED_d {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Infantry"; side = 1;
        crew = "RGT_Inf_HeliCrewman";
    };
    class RGT_Inf_Veh_UH60M: RHS_UH60M {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Infantry"; side = 1;
        crew = "RGT_Inf_HeliCrewman";
    };
    // Trucks
    class RGT_Inf_Veh_HEMTT_Ammo: LOP_GRE_HEMTT_Ammo_D {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Infantry"; side = 1;
        crew = "RGT_Inf_Rifleman";
    };
    class RGT_Inf_Veh_HEMTT_Fuel: LOP_GRE_HEMTT_Fuel_D {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Infantry"; side = 1;
        crew = "RGT_Inf_Rifleman";
    };
    class RGT_Inf_Veh_HEMTT_Repair: LOP_GRE_HEMTT_Repair_D {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Infantry"; side = 1;
        crew = "RGT_Inf_Rifleman";
    };
    // Cars
    class RGT_Inf_Veh_Humvee_M2: rhsusf_m1151_m2_v1_usarmy_wd {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Infantry"; side = 1;
        crew = "RGT_Inf_Rifleman";
    };
    class RGT_Inf_Veh_Humvee_M240: rhsusf_m1151_m240_v1_usarmy_wd {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Infantry"; side = 1;
        crew = "RGT_Inf_Rifleman";
    };
    class RGT_Inf_Veh_Humvee_Mk19: rhsusf_m1043_w_mk19 {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Infantry"; side = 1;
        crew = "RGT_Inf_Rifleman";
    };
    class RGT_Inf_Veh_LMTV_C2: rhsusf_M1230a1_usarmy_wd {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Infantry"; side = 1;
        crew = "RGT_Inf_Rifleman";
    };
    class RGT_Inf_Veh_LMTV_M2: rhsusf_M1230_MK19_usarmy_wd {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Infantry"; side = 1;
        crew = "RGT_Inf_Rifleman";
    };
    class RGT_Inf_Veh_Caiman_M2: rhsusf_M1083A1P2_B_M2_WD_fmtv_usarmy {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Infantry"; side = 1;
        crew = "RGT_Inf_Rifleman";
    };
    // Tanks
    class RGT_Inf_Veh_M1A2SEPv2: rhsusf_m1a2sep2wd_usarmy {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Infantry"; side = 1;
        crew = "RGT_Inf_Crewman";
    };
    // IFVs
    class RGT_Inf_Veh_M2A3_BUSKIII: RHS_M2A3_BUSKIII_wd {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Infantry"; side = 1;
        crew = "RGT_Inf_Crewman";
    };
    // APCs
    class RGT_Inf_Veh_M1126_M2: rhsusf_stryker_m1126_m2_wd {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Infantry"; side = 1;
        crew = "RGT_Inf_Crewman";
    };
    class RGT_Inf_Veh_MATV_M2: rhsusf_m1240a1_m2_usarmy_wd {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Infantry"; side = 1;
        crew = "RGT_Inf_Rifleman";
    };
    class RGT_Inf_Veh_MATV_M240: rhsusf_m1240a1_m240_usarmy_wd {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Infantry"; side = 1;
        crew = "RGT_Inf_Rifleman";
    };
    class RGT_Inf_Veh_RG33_M2: rhsusf_M1232_MC_MK19_usmc_wd {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Infantry"; side = 1;
        crew = "RGT_Inf_Rifleman";
    };
    // Static weapons
    class RGT_Inf_Veh_M2_High: RHS_M2StaticMG_USMC_WD {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Infantry"; side = 1;
        crew = "RGT_Inf_Rifleman";
    };
    class RGT_Inf_Veh_M2_Low: RHS_M2StaticMG_MiniTripod_USMC_WD {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Infantry"; side = 1;
        crew = "RGT_Inf_Rifleman";
    };
    class RGT_Inf_Veh_TOW: RHS_TOW_TriPod_USMC_WD {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Infantry"; side = 1;
        crew = "RGT_Inf_Rifleman";
    };

    // -------------------- SOF Vehicles (BLUFOR) --------------------
    // Cars
    class RGT_SOF_Veh_GMV_M2: rhsusf_m1165a1_gmv_m2_m240_socom_d {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_SOF"; side = 1;
        crew = "RGT_SOF_Pointman";
    };
    class RGT_SOF_Veh_GMV_M134D: rhsusf_m1165a1_gmv_m134d_m240_socom_d {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_SOF"; side = 1;
        crew = "RGT_SOF_Pointman";
    };
    class RGT_SOF_Veh_GMV_Mk19: rhsusf_m1165a1_gmv_mk19_m240_socom_d {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_SOF"; side = 1;
        crew = "RGT_SOF_Pointman";
    };
    class RGT_SOF_Veh_LMTV_SOF: rhsusf_M1078A1P2_WD_fmtv_usarmy {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_SOF"; side = 1;
        crew = "RGT_SOF_Pointman";
    };
    class RGT_SOF_Veh_MATV_SOF: rhsusf_m1240a1_mk19_usarmy_wd {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_SOF"; side = 1;
        crew = "RGT_SOF_Pointman";
    };
    class RGT_SOF_Veh_Supply_MRAP_SOF: rhsusf_M1239_MK19_Deploy_socom_d {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_SOF"; side = 1;
        crew = "RGT_SOF_Pointman";
    };
    class RGT_SOF_Veh_MRZR: rhsusf_mrzr4_d {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_SOF"; side = 1;
        crew = "RGT_Recce_Scout";
    };
    // Boats
    class RGT_SOF_Veh_MkVSOC: rhsusf_mkvsoc {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_SOF"; side = 1;
        crew = "RGT_SOF_Assault";
    };
    class RGT_SOF_Veh_RHIB: rhsgref_hidf_rhib {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_SOF"; side = 1;
        crew = "RGT_SOF_Assault";
    };
    class RGT_SOF_Veh_SOCR: UK3CB_MDF_B_RHIB_Gunboat {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_SOF"; side = 1;
        crew = "RGT_SOF_Assault";
    };
    class RGT_SOF_Veh_Zodiac_Recce: B_T_Boat_Transport_01_F {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_SOF"; side = 1;
        crew = "RGT_SOF_Assault";
    };
    class RGT_SOF_Veh_Zodiac_SEAL: B_T_Boat_Transport_01_F {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_SOF"; side = 1;
        crew = "RGT_SOF_Assault";
    };

    // -------------------- Taliban Vehicles (OPFOR) --------------------
    class RGT_Taliban_Veh_Landrover: LOP_TAK_Civ_Landrover {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Taliban"; side = 0;
        crew = "RGT_Taliban_Rifleman";
    };
    class RGT_Taliban_Veh_UAZ: LOP_TAK_Civ_UAZ {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Taliban"; side = 0;
        crew = "RGT_Taliban_Rifleman";
    };
    class RGT_Taliban_Veh_Ural: LOP_TAK_Civ_Ural {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Taliban"; side = 0;
        crew = "RGT_Taliban_Rifleman";
    };
    class RGT_Taliban_Veh_Offroad: LOP_TAK_Civ_Offroad {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Taliban"; side = 0;
        crew = "RGT_Taliban_Rifleman";
    };
    class RGT_Taliban_Veh_Landrover_M2: LOP_AM_OPF_Landrover_M2 {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Taliban"; side = 0;
        crew = "RGT_Taliban_Rifleman";
    };
    class RGT_Taliban_Veh_Offroad_M2: LOP_AM_OPF_Offroad_M2 {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Taliban"; side = 0;
        crew = "RGT_Taliban_Rifleman";
    };

    // -------------------- Guerrilla Vehicles (INDEPENDENT) --------------------
    class RGT_Guer_Veh_Landrover: LOP_TAK_Civ_Landrover {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Guerrilla"; side = 2;
        crew = "RGT_Guer_Rebel";
    };
    class RGT_Guer_Veh_UAZ: LOP_TAK_Civ_UAZ {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Guerrilla"; side = 2;
        crew = "RGT_Guer_Rebel";
    };
    class RGT_Guer_Veh_Ural: LOP_TAK_Civ_Ural {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Guerrilla"; side = 2;
        crew = "RGT_Guer_Rebel";
    };
    class RGT_Guer_Veh_Offroad: LOP_TAK_Civ_Offroad {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Guerrilla"; side = 2;
        crew = "RGT_Guer_Rebel";
    };
    class RGT_Guer_Veh_Landrover_M2: LOP_AM_OPF_Landrover_M2 {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Guerrilla"; side = 2;
        crew = "RGT_Guer_Rebel";
    };
    class RGT_Guer_Veh_Offroad_M2: LOP_AM_OPF_Offroad_M2 {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Guerrilla"; side = 2;
        crew = "RGT_Guer_Rebel";
    };

    // -------------------- PMC Vehicles (INDEPENDENT) --------------------
    class RGT_PMC_Veh_SUV: UK3CB_C_SUV {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_PMC"; side = 2;
        crew = "RGT_PMC_Merc";
    };
    class RGT_PMC_Veh_TT650: UK3CB_C_TT650 {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_PMC"; side = 2;
        crew = "RGT_PMC_Merc";
    };
    class RGT_PMC_Veh_SUV_Armed: UK3CB_ION_B_Winter_SUV_Armed {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_PMC"; side = 2;
        crew = "RGT_PMC_Merc";
    };
    class RGT_PMC_Veh_Hilux_Open: UK3CB_C_Hilux_Open {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_PMC"; side = 2;
        crew = "RGT_PMC_Merc";
    };
    class RGT_PMC_Veh_Hatchback: UK3CB_C_Hatchback {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_PMC"; side = 2;
        crew = "RGT_PMC_Merc";
    };

    // -------------------- Foreign Advisor Vehicles (INDEPENDENT) --------------------
    class RGT_FA_Veh_SUV: UK3CB_C_SUV {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_ForeignAdvisor"; side = 2;
        crew = "RGT_FA_Rifleman";
    };
    class RGT_FA_Veh_TT650: UK3CB_C_TT650 {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_ForeignAdvisor"; side = 2;
        crew = "RGT_FA_Rifleman";
    };
    class RGT_FA_Veh_SUV_Armed: UK3CB_ION_B_Winter_SUV_Armed {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_ForeignAdvisor"; side = 2;
        crew = "RGT_FA_Rifleman";
    };
    class RGT_FA_Veh_Hilux_Open: UK3CB_C_Hilux_Open {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_ForeignAdvisor"; side = 2;
        crew = "RGT_FA_Rifleman";
    };
    class RGT_FA_Veh_Hatchback: UK3CB_C_Hatchback {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_ForeignAdvisor"; side = 2;
        crew = "RGT_FA_Rifleman";
    };

    // -------------------- UC Vehicles (INDEPENDENT) --------------------
    class RGT_UC_Veh_SUV: UK3CB_C_SUV {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_UC"; side = 2;
        crew = "RGT_UC_Rifleman";
    };
    class RGT_UC_Veh_TT650: UK3CB_C_TT650 {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_UC"; side = 2;
        crew = "RGT_UC_Rifleman";
    };
    class RGT_UC_Veh_SUV_Armed: UK3CB_ION_B_Winter_SUV_Armed {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_UC"; side = 2;
        crew = "RGT_UC_Rifleman";
    };
    class RGT_UC_Veh_Hilux_Open: UK3CB_C_Hilux_Open {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_UC"; side = 2;
        crew = "RGT_UC_Rifleman";
    };
    class RGT_UC_Veh_Hatchback: UK3CB_C_Hatchback {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_UC"; side = 2;
        crew = "RGT_UC_Rifleman";
    };

    // -------------------- Sniper Vehicles (BLUFOR) --------------------
    class RGT_Sniper_Veh_ATV: NDS_6x6_ATV_MIL {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Sniper"; side = 1;
        crew = "RGT_Sniper_Spotter";
    };
    class RGT_Sniper_Veh_M1030: UK3CB_ADA_B_M1030 {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Sniper"; side = 1;
        crew = "RGT_Sniper_Spotter";
    };
    class RGT_Sniper_Veh_Landrover: UK3CB_C_LandRover_Softtop_Transport_Open {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Sniper"; side = 1;
        crew = "RGT_Sniper_Spotter";
    };

    // -------------------- Recce Vehicles (BLUFOR) --------------------
    class RGT_Recce_Veh_ATV: NDS_6x6_ATV_MIL {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Recce"; side = 1;
        crew = "RGT_Recce_Scout";
    };
    class RGT_Recce_Veh_M1030: UK3CB_ADA_B_M1030 {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Recce"; side = 1;
        crew = "RGT_Recce_Scout";
    };
    class RGT_Recce_Veh_Landrover: UK3CB_C_LandRover_Softtop_Transport_Open {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Recce"; side = 1;
        crew = "RGT_Recce_Scout";
    };
    class RGT_Recce_Veh_MRZR: rhsusf_mrzr4_d {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Recce"; side = 1;
        crew = "RGT_Recce_Scout";
    };
    class RGT_Recce_Veh_Zodiac: B_T_Boat_Transport_01_F {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Recce"; side = 1;
        crew = "RGT_Recce_Scout";
    };

    // -------------------- Russian Vehicles (OPFOR) --------------------
    class RGT_Rus_Veh_Tigr: rhs_tigr_vdv {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Russian"; side = 0;
        crew = "RGT_Rus_Rifleman";
    };
    class RGT_Rus_Veh_Tigr_M: rhs_tigr_m_vdv {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Russian"; side = 0;
        crew = "RGT_Rus_Rifleman";
    };
    class RGT_Rus_Veh_Tigr_STS: rhs_tigr_sts_3camo_vdv {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Russian"; side = 0;
        crew = "RGT_Rus_Rifleman";
    };
    class RGT_Rus_Veh_BMP2D: rhs_bmp2d_vdv {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Russian"; side = 0;
        crew = "RGT_Rus_AFVcrew";
    };
    class RGT_Rus_Veh_BRDM2: rhsgref_BRDM2_vdv {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Russian"; side = 0;
        crew = "RGT_Rus_AFVcrew";
    };
    class RGT_Rus_Veh_GAZ66: rhs_gaz66_vmf {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Russian"; side = 0;
        crew = "RGT_Rus_Rifleman";
    };
    class RGT_Rus_Veh_KamAZ5350: rhs_kamaz5350_open_vmf {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Russian"; side = 0;
        crew = "RGT_Rus_Rifleman";
    };
    class RGT_Rus_Veh_Ka52: RHS_Ka52_vvsc {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Russian"; side = 0;
        crew = "RGT_Rus_RWcrew";
    };
    class RGT_Rus_Veh_Mi24Vt: RHS_Mi24Vt_vvsc {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Russian"; side = 0;
        crew = "RGT_Rus_RWcrew";
    };
    class RGT_Rus_Veh_Mi8MT: RHS_Mi8mt_Cargo_vvs {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Russian"; side = 0;
        crew = "RGT_Rus_RWcrew";
    };
    class RGT_Rus_Veh_BTR80A: rhs_btr80a_vmf {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Russian"; side = 0;
        crew = "RGT_Rus_AFVcrew";
    };

    // -------------------- Spetsnaz Vehicles (OPFOR) --------------------
    class RGT_Spetsnaz_Veh_Tigr: rhs_tigr_vdv {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Spetsnaz"; side = 0;
        crew = "RGT_Spetsnaz_Pointman";
    };
    class RGT_Spetsnaz_Veh_Tigr_M: rhs_tigr_m_vdv {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Spetsnaz"; side = 0;
        crew = "RGT_Spetsnaz_Pointman";
    };
    class RGT_Spetsnaz_Veh_Tigr_STS: rhs_tigr_sts_3camo_vdv {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Spetsnaz"; side = 0;
        crew = "RGT_Spetsnaz_Pointman";
    };
    class RGT_Spetsnaz_Veh_BMP2D: rhs_bmp2d_vdv {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Spetsnaz"; side = 0;
        crew = "RGT_Spetsnaz_Pointman";
    };
    class RGT_Spetsnaz_Veh_BRDM2: rhsgref_BRDM2_vdv {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Spetsnaz"; side = 0;
        crew = "RGT_Spetsnaz_Pointman";
    };
    class RGT_Spetsnaz_Veh_GAZ66: rhs_gaz66_vmf {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Spetsnaz"; side = 0;
        crew = "RGT_Spetsnaz_Pointman";
    };
    class RGT_Spetsnaz_Veh_KamAZ5350: rhs_kamaz5350_open_vmf {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Spetsnaz"; side = 0;
        crew = "RGT_Spetsnaz_Pointman";
    };
    class RGT_Spetsnaz_Veh_Ka52: RHS_Ka52_vvsc {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Spetsnaz"; side = 0;
        crew = "RGT_Spetsnaz_Pointman";
    };
    class RGT_Spetsnaz_Veh_Mi24Vt: RHS_Mi24Vt_vvsc {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Spetsnaz"; side = 0;
        crew = "RGT_Spetsnaz_Pointman";
    };
    class RGT_Spetsnaz_Veh_Mi8MT: RHS_Mi8mt_Cargo_vvs {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Spetsnaz"; side = 0;
        crew = "RGT_Spetsnaz_Pointman";
    };
    class RGT_Spetsnaz_Veh_BTR80A: rhs_btr80a_vmf {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Spetsnaz"; side = 0;
        crew = "RGT_Spetsnaz_Pointman";
    };

    // -------------------- CBRN Vehicles (BLUFOR) --------------------
    class RGT_CBRN_Veh_Offroad: CBRN_Offroad {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_CBRN"; side = 1;
        crew = "RGT_CBRN_Rifleman";
    };
    class RGT_CBRN_Veh_Response: CBRN_Responce_Vehicle {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_CBRN"; side = 1;
        crew = "RGT_CBRN_Rifleman";
    };
    class RGT_CBRN_Veh_Containment: CBRN_Containment_Vehicle {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_CBRN"; side = 1;
        crew = "RGT_CBRN_Rifleman";
    };
    class RGT_CBRN_Veh_Offroad_Comms: CBRN_Offroad_Comms {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_CBRN"; side = 1;
        crew = "RGT_CBRN_Rifleman";
    };

    // -------------------- Cold War Vehicles (BLUFOR) --------------------
    class RGT_CW_Veh_M151_HMG: UK3CB_CW_US_B_EARLY_M151_Jeep_HMG {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_ColdWar"; side = 1;
        crew = "RGT_CW_Rifleman";
    };
    class RGT_CW_Veh_UH1H_M240: UK3CB_CW_US_B_EARLY_UH1H_M240 {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_ColdWar"; side = 1;
        crew = "RGT_CW_HeliCrewman";
    };
    class RGT_CW_Veh_UH1H_MED: UK3CB_CW_US_B_EARLY_UH1H_MED {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_ColdWar"; side = 1;
        crew = "RGT_CW_HeliCrewman";
    };
    class RGT_CW_Veh_M939_Open: UK3CB_CW_US_B_EARLY_M939_Open {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_ColdWar"; side = 1;
        crew = "RGT_CW_Rifleman";
    };
    class RGT_CW_Veh_M151_TOW: UK3CB_CW_US_B_EARLY_M151_Jeep_TOW {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_ColdWar"; side = 1;
        crew = "RGT_CW_Rifleman";
    };
    class RGT_CW_Veh_M151_Closed: UK3CB_CW_US_B_EARLY_M151_Jeep_Closed {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_ColdWar"; side = 1;
        crew = "RGT_CW_Rifleman";
    };
    class RGT_CW_Veh_M60A3: UK3CB_CW_US_B_EARLY_M60a3 {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_ColdWar"; side = 1;
        crew = "RGT_CW_Crewman";
    };
    class RGT_CW_Veh_M113_M2: UK3CB_CW_US_B_LATE_M113_M2 {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_ColdWar"; side = 1;
        crew = "RGT_CW_Crewman";
    };
    class RGT_CW_Veh_AAV: UK3CB_CW_US_B_LATE_AAV {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_ColdWar"; side = 1;
        crew = "RGT_CW_Crewman";
    };
    class RGT_CW_Veh_M113_MK19: UK3CB_CW_US_B_LATE_M113_MK19 {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_ColdWar"; side = 1;
        crew = "RGT_CW_Crewman";
    };

    // -------------------- Cold War M16 Vehicles (BLUFOR) --------------------
    class RGT_CWM16_Veh_M151_HMG: UK3CB_CW_US_B_EARLY_M151_Jeep_HMG {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_ColdWarM16"; side = 1;
        crew = "RGT_CWM16_Rifleman";
    };
    class RGT_CWM16_Veh_UH1H_M240: UK3CB_CW_US_B_EARLY_UH1H_M240 {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_ColdWarM16"; side = 1;
        crew = "RGT_CWM16_HeliCrewman";
    };
    class RGT_CWM16_Veh_UH1H_MED: UK3CB_CW_US_B_EARLY_UH1H_MED {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_ColdWarM16"; side = 1;
        crew = "RGT_CWM16_HeliCrewman";
    };
    class RGT_CWM16_Veh_M939_Open: UK3CB_CW_US_B_EARLY_M939_Open {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_ColdWarM16"; side = 1;
        crew = "RGT_CWM16_Rifleman";
    };
    class RGT_CWM16_Veh_M151_TOW: UK3CB_CW_US_B_EARLY_M151_Jeep_TOW {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_ColdWarM16"; side = 1;
        crew = "RGT_CWM16_Rifleman";
    };
    class RGT_CWM16_Veh_M151_Closed: UK3CB_CW_US_B_EARLY_M151_Jeep_Closed {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_ColdWarM16"; side = 1;
        crew = "RGT_CWM16_Rifleman";
    };
    class RGT_CWM16_Veh_M60A3: UK3CB_CW_US_B_EARLY_M60a3 {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_ColdWarM16"; side = 1;
        crew = "RGT_CWM16_Crewman";
    };
    class RGT_CWM16_Veh_M113_M2: UK3CB_CW_US_B_LATE_M113_M2 {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_ColdWarM16"; side = 1;
        crew = "RGT_CWM16_Crewman";
    };
    class RGT_CWM16_Veh_AAV: UK3CB_CW_US_B_LATE_AAV {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_ColdWarM16"; side = 1;
        crew = "RGT_CWM16_Crewman";
    };
    class RGT_CWM16_Veh_M113_MK19: UK3CB_CW_US_B_LATE_M113_MK19 {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_ColdWarM16"; side = 1;
        crew = "RGT_CWM16_Crewman";
    };

    // -------------------- Diving Vehicles (BLUFOR) --------------------
    class RGT_Diving_Veh_SDV: B_SDV_01_F {
        scope = 2; scopeCurator = 2; faction = "RGT_Faction_Diving"; side = 1;
        crew = "RGT_Diving_Rifleman";
    };
};
