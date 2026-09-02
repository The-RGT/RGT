// Auto-included three times in CfgGroups.hpp under West, East, Indep wrappers.
// FACTION_SIDE macro is defined by includer to set side: 1=West, 0=East, 2=Indep.

        // -------------------- Infantry --------------------
        class RGT_Faction_Infantry {
            name = "RGT - Infantry";

            class Infantry {
                name = "Infantry";

                class RGT_Inf_Fireteam {
                    name = "Fireteam";
                    faction = "RGT_Faction_Infantry";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Inf_Leader";    rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Inf_AR";        rank = "CORPORAL"; position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_Inf_Grenadier"; rank = "PRIVATE";  position[] = {-3,-3,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_Inf_LightAT";   rank = "PRIVATE";  position[] = {0,-6,0}; };
                };

                class RGT_Inf_RifleSquad {
                    name = "Rifle Squad";
                    faction = "RGT_Faction_Infantry";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Inf_Leader";    rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Inf_Leader";    rank = "SERGEANT"; position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_Inf_CLS";       rank = "PRIVATE";  position[] = {6,-3,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_Inf_AR";        rank = "CORPORAL"; position[] = {9,-3,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_Inf_Grenadier"; rank = "PRIVATE";  position[] = {12,-3,0}; };
                    class Unit5 { side = FACTION_SIDE; vehicle = "RGT_Inf_LightAT";   rank = "PRIVATE";  position[] = {15,-3,0}; };
                    class Unit6 { side = FACTION_SIDE; vehicle = "RGT_Inf_Leader";    rank = "SERGEANT"; position[] = {-3,-3,0}; };
                    class Unit7 { side = FACTION_SIDE; vehicle = "RGT_Inf_AR";        rank = "CORPORAL"; position[] = {-6,-3,0}; };
                    class Unit8 { side = FACTION_SIDE; vehicle = "RGT_Inf_Grenadier"; rank = "PRIVATE";  position[] = {-9,-3,0}; };
                    class Unit9 { side = FACTION_SIDE; vehicle = "RGT_Inf_Marksman";  rank = "PRIVATE";  position[] = {-12,-3,0}; };
                };

                class RGT_Inf_MGTeam {
                    name = "MG Team";
                    faction = "RGT_Faction_Infantry";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Inf_MG";          rank = "CORPORAL"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Inf_MGAmmoBearer"; rank = "PRIVATE";  position[] = {3,-3,0}; };
                };

                class RGT_Inf_MGSection {
                    name = "MG Section";
                    faction = "RGT_Faction_Infantry";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Inf_Leader";       rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Inf_CLS";          rank = "PRIVATE";  position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_Inf_MG";           rank = "CORPORAL"; position[] = {-3,-3,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_Inf_MGAmmoBearer"; rank = "PRIVATE";  position[] = {-6,-3,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_Inf_MG";           rank = "CORPORAL"; position[] = {-9,-3,0}; };
                    class Unit5 { side = FACTION_SIDE; vehicle = "RGT_Inf_MGAmmoBearer"; rank = "PRIVATE";  position[] = {-12,-3,0}; };
                    class Unit6 { side = FACTION_SIDE; vehicle = "RGT_Inf_MG";           rank = "CORPORAL"; position[] = {6,-3,0}; };
                    class Unit7 { side = FACTION_SIDE; vehicle = "RGT_Inf_MGAmmoBearer"; rank = "PRIVATE";  position[] = {9,-3,0}; };
                };

                class RGT_Inf_ATTeam {
                    name = "AT Team";
                    faction = "RGT_Faction_Infantry";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Inf_MedAT";          rank = "CORPORAL"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Inf_MedATAmmoBearer"; rank = "PRIVATE";  position[] = {3,-3,0}; };
                };

                class RGT_Inf_ATTeamJavelin {
                    name = "AT Team (Javelin)";
                    faction = "RGT_Faction_Infantry";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Inf_HeavyAT";          rank = "CORPORAL"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Inf_HeavyATAmmoBearer"; rank = "PRIVATE";  position[] = {3,-3,0}; };
                };

                class RGT_Inf_ATSection {
                    name = "AT Section";
                    faction = "RGT_Faction_Infantry";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Inf_Leader";          rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Inf_CLS";             rank = "PRIVATE";  position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_Inf_MedAT";           rank = "CORPORAL"; position[] = {-3,-3,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_Inf_MedATAmmoBearer"; rank = "PRIVATE";  position[] = {-6,-3,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_Inf_MedAT";           rank = "CORPORAL"; position[] = {-9,-3,0}; };
                    class Unit5 { side = FACTION_SIDE; vehicle = "RGT_Inf_MedATAmmoBearer"; rank = "PRIVATE";  position[] = {-12,-3,0}; };
                    class Unit6 { side = FACTION_SIDE; vehicle = "RGT_Inf_HeavyAT";         rank = "CORPORAL"; position[] = {6,-3,0}; };
                    class Unit7 { side = FACTION_SIDE; vehicle = "RGT_Inf_HeavyATAmmoBearer"; rank = "PRIVATE"; position[] = {9,-3,0}; };
                };

                class RGT_Inf_WeaponsSquad {
                    name = "Weapons Squad";
                    faction = "RGT_Faction_Infantry";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Inf_Leader";          rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Inf_CLS";             rank = "PRIVATE";  position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_Inf_MG";              rank = "CORPORAL"; position[] = {-3,-3,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_Inf_MGAmmoBearer";    rank = "PRIVATE";  position[] = {-6,-3,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_Inf_MG";              rank = "CORPORAL"; position[] = {-9,-3,0}; };
                    class Unit5 { side = FACTION_SIDE; vehicle = "RGT_Inf_MGAmmoBearer";    rank = "PRIVATE";  position[] = {-12,-3,0}; };
                    class Unit6 { side = FACTION_SIDE; vehicle = "RGT_Inf_MedAT";           rank = "CORPORAL"; position[] = {6,-3,0}; };
                    class Unit7 { side = FACTION_SIDE; vehicle = "RGT_Inf_MedATAmmoBearer"; rank = "PRIVATE";  position[] = {9,-3,0}; };
                    class Unit8 { side = FACTION_SIDE; vehicle = "RGT_Inf_MedAT";           rank = "CORPORAL"; position[] = {12,-3,0}; };
                    class Unit9 { side = FACTION_SIDE; vehicle = "RGT_Inf_MedATAmmoBearer"; rank = "PRIVATE";  position[] = {15,-3,0}; };
                };

                class RGT_Inf_C2Element {
                    name = "C2 Element";
                    faction = "RGT_Faction_Infantry";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Inf_Leader";    rank = "LIEUTENANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Inf_Grenadier"; rank = "SERGEANT";   position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_Inf_CLS";       rank = "PRIVATE";    position[] = {-3,-3,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_Inf_JTAC";      rank = "PRIVATE";    position[] = {0,-6,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_Inf_Radioman";  rank = "PRIVATE";    position[] = {3,-6,0}; };
                };

                class RGT_Inf_MortarTeam_60mm {
                    name = "Mortar Team (60mm)";
                    faction = "RGT_Faction_Infantry";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Inf_Mortarman";        rank = "CORPORAL"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Inf_MortarAmmoBearer"; rank = "PRIVATE";  position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_Inf_MortarAmmoBearer"; rank = "PRIVATE";  position[] = {-3,-3,0}; };
                };

                class RGT_Inf_MortarTeam_81mm {
                    name = "Mortar Team (81mm)";
                    faction = "RGT_Faction_Infantry";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Inf_Mortarman";        rank = "CORPORAL"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Inf_MortarAmmoBearer"; rank = "PRIVATE";  position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_Inf_MortarAmmoBearer"; rank = "PRIVATE";  position[] = {-3,-3,0}; };
                };

                class RGT_Inf_MortarSection_60mm {
                    name = "Mortar Section (60mm)";
                    faction = "RGT_Faction_Infantry";
                    side = FACTION_SIDE;
                    class Unit0  { side = FACTION_SIDE; vehicle = "RGT_Inf_Leader";           rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1  { side = FACTION_SIDE; vehicle = "RGT_Inf_CLS";              rank = "PRIVATE";  position[] = {3,-3,0}; };
                    class Unit2  { side = FACTION_SIDE; vehicle = "RGT_Inf_Mortarman";        rank = "CORPORAL"; position[] = {-3,-3,0}; };
                    class Unit3  { side = FACTION_SIDE; vehicle = "RGT_Inf_MortarAmmoBearer"; rank = "PRIVATE";  position[] = {-6,-3,0}; };
                    class Unit4  { side = FACTION_SIDE; vehicle = "RGT_Inf_MortarAmmoBearer"; rank = "PRIVATE";  position[] = {-9,-3,0}; };
                    class Unit5  { side = FACTION_SIDE; vehicle = "RGT_Inf_Mortarman";        rank = "CORPORAL"; position[] = {-12,-3,0}; };
                    class Unit6  { side = FACTION_SIDE; vehicle = "RGT_Inf_MortarAmmoBearer"; rank = "PRIVATE";  position[] = {-15,-3,0}; };
                    class Unit7  { side = FACTION_SIDE; vehicle = "RGT_Inf_MortarAmmoBearer"; rank = "PRIVATE";  position[] = {-18,-3,0}; };
                    class Unit8  { side = FACTION_SIDE; vehicle = "RGT_Inf_Mortarman";        rank = "PRIVATE";  position[] = {6,-3,0}; };
                    class Unit9  { side = FACTION_SIDE; vehicle = "RGT_Inf_MortarAmmoBearer"; rank = "PRIVATE";  position[] = {9,-3,0}; };
                    class Unit10 { side = FACTION_SIDE; vehicle = "RGT_Inf_MortarAmmoBearer"; rank = "PRIVATE";  position[] = {12,-3,0}; };
                };

                class RGT_Inf_EODTeam {
                    name = "EOD Team";
                    faction = "RGT_Faction_Infantry";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Inf_EOD"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Inf_EOD"; rank = "CORPORAL"; position[] = {3,-3,0}; };
                };

                class RGT_Inf_AATeam {
                    name = "AA Team";
                    faction = "RGT_Faction_Infantry";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Inf_AntiAir";          rank = "CORPORAL"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Inf_AntiAirAmmoBearer"; rank = "PRIVATE";  position[] = {3,-3,0}; };
                };

                class RGT_Inf_AASection {
                    name = "AA Section";
                    faction = "RGT_Faction_Infantry";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Inf_Leader";            rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Inf_CLS";               rank = "PRIVATE";  position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_Inf_AntiAir";           rank = "CORPORAL"; position[] = {-3,-3,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_Inf_AntiAirAmmoBearer"; rank = "PRIVATE";  position[] = {-6,-3,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_Inf_AntiAir";           rank = "CORPORAL"; position[] = {-9,-3,0}; };
                    class Unit5 { side = FACTION_SIDE; vehicle = "RGT_Inf_AntiAirAmmoBearer"; rank = "PRIVATE";  position[] = {-12,-3,0}; };
                    class Unit6 { side = FACTION_SIDE; vehicle = "RGT_Inf_AntiAir";           rank = "CORPORAL"; position[] = {6,-3,0}; };
                    class Unit7 { side = FACTION_SIDE; vehicle = "RGT_Inf_AntiAirAmmoBearer"; rank = "PRIVATE";  position[] = {9,-3,0}; };
                };
            };

            class Vehicles {
                name = "Vehicles";

                class RGT_Inf_MountedFireteam_M1025 {
                    name = "Mounted Fire Team (M1025)";
                    faction = "RGT_Faction_Infantry";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Inf_Veh_Humvee_M2";    rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Inf_Leader";       rank = "SERGEANT"; position[] = {2,-2,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_Inf_Rifleman";     rank = "PRIVATE";  position[] = {4,-4,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_Inf_AR";           rank = "PRIVATE";  position[] = {6,-6,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_Inf_Grenadier";    rank = "PRIVATE";  position[] = {8,-8,0}; };
                };
                class RGT_Inf_MountedFireteam_M1151 {
                    name = "Mounted Fire Team (M1151 CROWS)";
                    faction = "RGT_Faction_Infantry";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Inf_Veh_Humvee_M2"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Inf_Leader";          rank = "SERGEANT"; position[] = {2,-2,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_Inf_Rifleman";        rank = "PRIVATE";  position[] = {4,-4,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_Inf_AR";              rank = "PRIVATE";  position[] = {6,-6,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_Inf_Grenadier";       rank = "PRIVATE";  position[] = {8,-8,0}; };
                };
                class RGT_Inf_MechanizedSquad_Stryker {
                    name = "Mechanized Squad (Stryker)";
                    faction = "RGT_Faction_Infantry";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Inf_Veh_M1126_M2"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Inf_Leader";    rank = "SERGEANT"; position[] = {2,-2,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_Inf_CLS";       rank = "CORPORAL"; position[] = {4,-4,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_Inf_Rifleman";  rank = "PRIVATE";  position[] = {6,-6,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_Inf_AR";        rank = "PRIVATE";  position[] = {8,-8,0}; };
                    class Unit5 { side = FACTION_SIDE; vehicle = "RGT_Inf_Grenadier"; rank = "PRIVATE";  position[] = {10,-10,0}; };
                    class Unit6 { side = FACTION_SIDE; vehicle = "RGT_Inf_Rifleman";  rank = "PRIVATE";  position[] = {12,-12,0}; };
                    class Unit7 { side = FACTION_SIDE; vehicle = "RGT_Inf_MG";        rank = "PRIVATE";  position[] = {14,-14,0}; };
                    class Unit8 { side = FACTION_SIDE; vehicle = "RGT_Inf_MGAmmoBearer"; rank = "PRIVATE"; position[] = {16,-16,0}; };
                };
                class RGT_Inf_MechanizedSquad_Bradley {
                    name = "Mechanized Squad (M2A2)";
                    faction = "RGT_Faction_Infantry";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Inf_Veh_M2A3_BUSKIII";  rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Inf_Leader";    rank = "SERGEANT"; position[] = {2,-2,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_Inf_CLS";       rank = "CORPORAL"; position[] = {4,-4,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_Inf_Rifleman";  rank = "PRIVATE";  position[] = {6,-6,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_Inf_AR";        rank = "PRIVATE";  position[] = {8,-8,0}; };
                    class Unit5 { side = FACTION_SIDE; vehicle = "RGT_Inf_Grenadier"; rank = "PRIVATE";  position[] = {10,-10,0}; };
                    class Unit6 { side = FACTION_SIDE; vehicle = "RGT_Inf_Rifleman";  rank = "PRIVATE";  position[] = {12,-12,0}; };
                    class Unit7 { side = FACTION_SIDE; vehicle = "RGT_Inf_MG";        rank = "PRIVATE";  position[] = {14,-14,0}; };
                };
                class RGT_Inf_ArmorSection_M1A2 {
                    name = "Armor Section (M1A2)";
                    faction = "RGT_Faction_Infantry";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Inf_Veh_M1A2SEPv2";   rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Inf_Veh_M1A2SEPv2";   rank = "CORPORAL"; position[] = {15,-15,0}; };
                };
                class RGT_Inf_ArmorSection_M1A1 {
                    name = "Armor Section (M1A1 TUSKI)";
                    faction = "RGT_Faction_Infantry";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Inf_Veh_M1A2SEPv2"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Inf_Veh_M1A2SEPv2"; rank = "CORPORAL"; position[] = {15,-15,0}; };
                };
                class RGT_Inf_TransportFlight_UH60 {
                    name = "Transport Flight (UH-60M)";
                    faction = "RGT_Faction_Infantry";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Inf_Veh_UH60M"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Inf_Veh_UH60M"; rank = "CORPORAL"; position[] = {50,-50,0}; };
                };
                class RGT_Inf_TransportFlight_CH47 {
                    name = "Transport Flight (CH-47F)";
                    faction = "RGT_Faction_Infantry";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Inf_Veh_CH47F"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Inf_Veh_CH47F"; rank = "CORPORAL"; position[] = {60,-60,0}; };
                };
                class RGT_Inf_ApacheSection {
                    name = "Apache Section";
                    faction = "RGT_Faction_Infantry";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Inf_Veh_AH64D"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Inf_Veh_AH64D"; rank = "CORPORAL"; position[] = {40,-40,0}; };
                };
            };
        };

        // -------------------- Woodland --------------------
        class RGT_Faction_Woodland {
            name = "RGT - Woodland";

            class Infantry {
                name = "Infantry";

                class RGT_WD_Fireteam {
                    name = "Fireteam";
                    faction = "RGT_Faction_Woodland";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_WD_Leader";    rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_WD_AR";        rank = "CORPORAL"; position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_WD_Grenadier"; rank = "PRIVATE";  position[] = {-3,-3,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_WD_LightAT";   rank = "PRIVATE";  position[] = {0,-6,0}; };
                };

                class RGT_WD_RifleSquad {
                    name = "Rifle Squad";
                    faction = "RGT_Faction_Woodland";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_WD_Leader";    rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_WD_Leader";    rank = "SERGEANT"; position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_WD_CLS";       rank = "PRIVATE";  position[] = {6,-3,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_WD_AR";        rank = "CORPORAL"; position[] = {9,-3,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_WD_Grenadier"; rank = "PRIVATE";  position[] = {12,-3,0}; };
                    class Unit5 { side = FACTION_SIDE; vehicle = "RGT_WD_LightAT";   rank = "PRIVATE";  position[] = {15,-3,0}; };
                    class Unit6 { side = FACTION_SIDE; vehicle = "RGT_WD_Leader";    rank = "SERGEANT"; position[] = {-3,-3,0}; };
                    class Unit7 { side = FACTION_SIDE; vehicle = "RGT_WD_AR";        rank = "CORPORAL"; position[] = {-6,-3,0}; };
                    class Unit8 { side = FACTION_SIDE; vehicle = "RGT_WD_Grenadier"; rank = "PRIVATE";  position[] = {-9,-3,0}; };
                    class Unit9 { side = FACTION_SIDE; vehicle = "RGT_WD_Marksman";  rank = "PRIVATE";  position[] = {-12,-3,0}; };
                };

                class RGT_WD_MGTeam {
                    name = "MG Team";
                    faction = "RGT_Faction_Woodland";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_WD_MG";          rank = "CORPORAL"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_WD_MGAmmoBearer"; rank = "PRIVATE";  position[] = {3,-3,0}; };
                };

                class RGT_WD_MGSection {
                    name = "MG Section";
                    faction = "RGT_Faction_Woodland";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_WD_Leader";       rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_WD_CLS";          rank = "PRIVATE";  position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_WD_MG";           rank = "CORPORAL"; position[] = {-3,-3,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_WD_MGAmmoBearer"; rank = "PRIVATE";  position[] = {-6,-3,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_WD_MG";           rank = "CORPORAL"; position[] = {-9,-3,0}; };
                    class Unit5 { side = FACTION_SIDE; vehicle = "RGT_WD_MGAmmoBearer"; rank = "PRIVATE";  position[] = {-12,-3,0}; };
                    class Unit6 { side = FACTION_SIDE; vehicle = "RGT_WD_MG";           rank = "CORPORAL"; position[] = {6,-3,0}; };
                    class Unit7 { side = FACTION_SIDE; vehicle = "RGT_WD_MGAmmoBearer"; rank = "PRIVATE";  position[] = {9,-3,0}; };
                };

                class RGT_WD_ATTeam {
                    name = "AT Team";
                    faction = "RGT_Faction_Woodland";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_WD_MedAT";          rank = "CORPORAL"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_WD_MedATAmmoBearer"; rank = "PRIVATE";  position[] = {3,-3,0}; };
                };

                class RGT_WD_ATTeamJavelin {
                    name = "AT Team (Javelin)";
                    faction = "RGT_Faction_Woodland";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_WD_HeavyAT";          rank = "CORPORAL"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_WD_HeavyATAmmoBearer"; rank = "PRIVATE";  position[] = {3,-3,0}; };
                };

                class RGT_WD_ATSection {
                    name = "AT Section";
                    faction = "RGT_Faction_Woodland";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_WD_Leader";          rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_WD_CLS";             rank = "PRIVATE";  position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_WD_MedAT";           rank = "CORPORAL"; position[] = {-3,-3,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_WD_MedATAmmoBearer"; rank = "PRIVATE";  position[] = {-6,-3,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_WD_MedAT";           rank = "CORPORAL"; position[] = {-9,-3,0}; };
                    class Unit5 { side = FACTION_SIDE; vehicle = "RGT_WD_MedATAmmoBearer"; rank = "PRIVATE";  position[] = {-12,-3,0}; };
                    class Unit6 { side = FACTION_SIDE; vehicle = "RGT_WD_HeavyAT";         rank = "CORPORAL"; position[] = {6,-3,0}; };
                    class Unit7 { side = FACTION_SIDE; vehicle = "RGT_WD_HeavyATAmmoBearer"; rank = "PRIVATE"; position[] = {9,-3,0}; };
                };

                class RGT_WD_WeaponsSquad {
                    name = "Weapons Squad";
                    faction = "RGT_Faction_Woodland";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_WD_Leader";          rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_WD_CLS";             rank = "PRIVATE";  position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_WD_MG";              rank = "CORPORAL"; position[] = {-3,-3,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_WD_MGAmmoBearer";    rank = "PRIVATE";  position[] = {-6,-3,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_WD_MG";              rank = "CORPORAL"; position[] = {-9,-3,0}; };
                    class Unit5 { side = FACTION_SIDE; vehicle = "RGT_WD_MGAmmoBearer";    rank = "PRIVATE";  position[] = {-12,-3,0}; };
                    class Unit6 { side = FACTION_SIDE; vehicle = "RGT_WD_MedAT";           rank = "CORPORAL"; position[] = {6,-3,0}; };
                    class Unit7 { side = FACTION_SIDE; vehicle = "RGT_WD_MedATAmmoBearer"; rank = "PRIVATE";  position[] = {9,-3,0}; };
                    class Unit8 { side = FACTION_SIDE; vehicle = "RGT_WD_MedAT";           rank = "CORPORAL"; position[] = {12,-3,0}; };
                    class Unit9 { side = FACTION_SIDE; vehicle = "RGT_WD_MedATAmmoBearer"; rank = "PRIVATE";  position[] = {15,-3,0}; };
                };

                class RGT_WD_C2Element {
                    name = "C2 Element";
                    faction = "RGT_Faction_Woodland";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_WD_Leader";    rank = "LIEUTENANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_WD_Grenadier"; rank = "SERGEANT";   position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_WD_CLS";       rank = "PRIVATE";    position[] = {-3,-3,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_WD_JTAC";      rank = "PRIVATE";    position[] = {0,-6,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_WD_Radioman";  rank = "PRIVATE";    position[] = {3,-6,0}; };
                };

                class RGT_WD_MortarTeam_60mm {
                    name = "Mortar Team (60mm)";
                    faction = "RGT_Faction_Woodland";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_WD_Mortarman";        rank = "CORPORAL"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_WD_MortarAmmoBearer"; rank = "PRIVATE";  position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_WD_MortarAmmoBearer"; rank = "PRIVATE";  position[] = {-3,-3,0}; };
                };

                class RGT_WD_MortarTeam_81mm {
                    name = "Mortar Team (81mm)";
                    faction = "RGT_Faction_Woodland";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_WD_Rifleman"; rank = "CORPORAL"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_WD_Rifleman"; rank = "PRIVATE";  position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_WD_Rifleman"; rank = "PRIVATE";  position[] = {-3,-3,0}; };
                };

                class RGT_WD_MortarSection_60mm {
                    name = "Mortar Section (60mm)";
                    faction = "RGT_Faction_Woodland";
                    side = FACTION_SIDE;
                    class Unit0  { side = FACTION_SIDE; vehicle = "RGT_WD_Leader";           rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1  { side = FACTION_SIDE; vehicle = "RGT_WD_CLS";              rank = "PRIVATE";  position[] = {3,-3,0}; };
                    class Unit2  { side = FACTION_SIDE; vehicle = "RGT_WD_Mortarman";        rank = "CORPORAL"; position[] = {-3,-3,0}; };
                    class Unit3  { side = FACTION_SIDE; vehicle = "RGT_WD_MortarAmmoBearer"; rank = "PRIVATE";  position[] = {-6,-3,0}; };
                    class Unit4  { side = FACTION_SIDE; vehicle = "RGT_WD_MortarAmmoBearer"; rank = "PRIVATE";  position[] = {-9,-3,0}; };
                    class Unit5  { side = FACTION_SIDE; vehicle = "RGT_WD_Mortarman";        rank = "CORPORAL"; position[] = {-12,-3,0}; };
                    class Unit6  { side = FACTION_SIDE; vehicle = "RGT_WD_MortarAmmoBearer"; rank = "PRIVATE";  position[] = {-15,-3,0}; };
                    class Unit7  { side = FACTION_SIDE; vehicle = "RGT_WD_MortarAmmoBearer"; rank = "PRIVATE";  position[] = {-18,-3,0}; };
                    class Unit8  { side = FACTION_SIDE; vehicle = "RGT_WD_Mortarman";        rank = "PRIVATE";  position[] = {6,-3,0}; };
                    class Unit9  { side = FACTION_SIDE; vehicle = "RGT_WD_MortarAmmoBearer"; rank = "PRIVATE";  position[] = {9,-3,0}; };
                    class Unit10 { side = FACTION_SIDE; vehicle = "RGT_WD_MortarAmmoBearer"; rank = "PRIVATE";  position[] = {12,-3,0}; };
                };

                class RGT_WD_EODTeam {
                    name = "EOD Team";
                    faction = "RGT_Faction_Woodland";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_WD_EOD"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_WD_EOD"; rank = "CORPORAL"; position[] = {3,-3,0}; };
                };

                class RGT_WD_AATeam {
                    name = "AA Team";
                    faction = "RGT_Faction_Woodland";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_WD_AntiAir";          rank = "CORPORAL"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_WD_AntiAirAmmoBearer"; rank = "PRIVATE";  position[] = {3,-3,0}; };
                };

                class RGT_WD_AASection {
                    name = "AA Section";
                    faction = "RGT_Faction_Woodland";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_WD_Leader";            rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_WD_CLS";               rank = "PRIVATE";  position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_WD_AntiAir";           rank = "CORPORAL"; position[] = {-3,-3,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_WD_AntiAirAmmoBearer"; rank = "PRIVATE";  position[] = {-6,-3,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_WD_AntiAir";           rank = "CORPORAL"; position[] = {-9,-3,0}; };
                    class Unit5 { side = FACTION_SIDE; vehicle = "RGT_WD_AntiAirAmmoBearer"; rank = "PRIVATE";  position[] = {-12,-3,0}; };
                    class Unit6 { side = FACTION_SIDE; vehicle = "RGT_WD_AntiAir";           rank = "CORPORAL"; position[] = {6,-3,0}; };
                    class Unit7 { side = FACTION_SIDE; vehicle = "RGT_WD_AntiAirAmmoBearer"; rank = "PRIVATE";  position[] = {9,-3,0}; };
                };
            };

            class Vehicles {
                name = "Vehicles";

                class RGT_WD_MountedFireteam_M1025 {
                    name = "Mounted Fire Team (M1025 M2)";
                    faction = "RGT_Faction_Woodland";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Inf_Veh_Humvee_M2"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_WD_Leader";       rank = "SERGEANT"; position[] = {2,-2,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_WD_Rifleman";     rank = "PRIVATE";  position[] = {4,-4,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_WD_AR";           rank = "PRIVATE";  position[] = {6,-6,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_WD_Grenadier";    rank = "PRIVATE";  position[] = {8,-8,0}; };
                };
                class RGT_WD_MountedFireteam_M1240 {
                    name = "Mounted Fire Team (M1240 M2)";
                    faction = "RGT_Faction_Woodland";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Inf_Veh_MATV_M2"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_WD_Leader";       rank = "SERGEANT"; position[] = {2,-2,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_WD_Rifleman";     rank = "PRIVATE";  position[] = {4,-4,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_WD_AR";           rank = "PRIVATE";  position[] = {6,-6,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_WD_Grenadier";    rank = "PRIVATE";  position[] = {8,-8,0}; };
                };
                class RGT_WD_MechanizedSquad_Stryker {
                    name = "Mechanized Squad (Stryker)";
                    faction = "RGT_Faction_Woodland";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Inf_Veh_M1126_M2"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_WD_Leader";    rank = "SERGEANT"; position[] = {2,-2,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_WD_CLS";       rank = "CORPORAL"; position[] = {4,-4,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_WD_Rifleman";  rank = "PRIVATE";  position[] = {6,-6,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_WD_AR";        rank = "PRIVATE";  position[] = {8,-8,0}; };
                    class Unit5 { side = FACTION_SIDE; vehicle = "RGT_WD_Grenadier"; rank = "PRIVATE";  position[] = {10,-10,0}; };
                    class Unit6 { side = FACTION_SIDE; vehicle = "RGT_WD_Rifleman";  rank = "PRIVATE";  position[] = {12,-12,0}; };
                    class Unit7 { side = FACTION_SIDE; vehicle = "RGT_WD_MG";        rank = "PRIVATE";  position[] = {14,-14,0}; };
                    class Unit8 { side = FACTION_SIDE; vehicle = "RGT_WD_MGAmmoBearer"; rank = "PRIVATE"; position[] = {16,-16,0}; };
                };
                class RGT_WD_MechanizedSquad_Bradley {
                    name = "Mechanized Squad (M2A3)";
                    faction = "RGT_Faction_Woodland";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Inf_Veh_M2A3_BUSKIII"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_WD_Leader";    rank = "SERGEANT"; position[] = {2,-2,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_WD_CLS";       rank = "CORPORAL"; position[] = {4,-4,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_WD_Rifleman";  rank = "PRIVATE";  position[] = {6,-6,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_WD_AR";        rank = "PRIVATE";  position[] = {8,-8,0}; };
                    class Unit5 { side = FACTION_SIDE; vehicle = "RGT_WD_Grenadier"; rank = "PRIVATE";  position[] = {10,-10,0}; };
                    class Unit6 { side = FACTION_SIDE; vehicle = "RGT_WD_Rifleman";  rank = "PRIVATE";  position[] = {12,-12,0}; };
                    class Unit7 { side = FACTION_SIDE; vehicle = "RGT_WD_MG";        rank = "PRIVATE";  position[] = {14,-14,0}; };
                };
                class RGT_WD_ArmorSection_M1A2 {
                    name = "Armor Section (M1A2 TUSKII)";
                    faction = "RGT_Faction_Woodland";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Inf_Veh_M1A2SEPv2"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Inf_Veh_M1A2SEPv2"; rank = "CORPORAL"; position[] = {15,-15,0}; };
                };
                class RGT_WD_ArmorSection_M1A1 {
                    name = "Armor Section (M1A1 TUSKI)";
                    faction = "RGT_Faction_Woodland";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Inf_Veh_M1A2SEPv2"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Inf_Veh_M1A2SEPv2"; rank = "CORPORAL"; position[] = {15,-15,0}; };
                };
            };
        };

        // -------------------- Arctic --------------------
        class RGT_Faction_Arctic {
            name = "RGT - Arctic";

            class Infantry {
                name = "Infantry";

                class RGT_Arctic_AssaultTeam {
                    name = "Assault Team (Arctic)";
                    faction = "RGT_Faction_Arctic";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Arctic_Leader";    rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Arctic_Grenadier"; rank = "CORPORAL"; position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_Arctic_AR";        rank = "PRIVATE";  position[] = {-3,-3,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_Arctic_CLS";       rank = "PRIVATE";  position[] = {0,-6,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_Arctic_Breacher";  rank = "PRIVATE";  position[] = {3,-6,0}; };
                    class Unit5 { side = FACTION_SIDE; vehicle = "RGT_Arctic_LightAT";   rank = "PRIVATE";  position[] = {-3,-6,0}; };
                };

                class RGT_Arctic_TroopC2 {
                    name = "Troop C2 (Arctic)";
                    faction = "RGT_Faction_Arctic";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Arctic_Leader";    rank = "CAPTAIN";  position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Arctic_Assault";   rank = "SERGEANT"; position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_Arctic_LightAT";   rank = "PRIVATE";  position[] = {-3,-3,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_Arctic_Breacher";  rank = "PRIVATE";  position[] = {0,-6,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_Arctic_RTO";       rank = "PRIVATE";  position[] = {3,-6,0}; };
                    class Unit5 { side = FACTION_SIDE; vehicle = "RGT_Arctic_JTAC";      rank = "PRIVATE";  position[] = {-3,-6,0}; };
                };

            };
        };

        // -------------------- CBRN --------------------
        class RGT_Faction_CBRN {
            name = "RGT - CBRN";

            class Infantry {
                name = "Infantry";

                class RGT_CBRN_AssessmentTeam {
                    name = "Assessment Team";
                    faction = "RGT_Faction_CBRN";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_CBRN_Leader";    rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_CBRN_AR";        rank = "CORPORAL"; position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_CBRN_Grenadier"; rank = "PRIVATE";  position[] = {-3,-3,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_CBRN_Marksman";  rank = "PRIVATE";  position[] = {0,-6,0}; };
                };

                class RGT_CBRN_ResearchGroup {
                    name = "Research Group";
                    faction = "RGT_Faction_CBRN";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_CBRN_Leader";    rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_CBRN_CLS";       rank = "PRIVATE";  position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_CBRN_Radioman";  rank = "PRIVATE";  position[] = {-3,-3,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_CBRN_Leader";    rank = "SERGEANT"; position[] = {0,-6,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_CBRN_AR";        rank = "CORPORAL"; position[] = {3,-6,0}; };
                    class Unit5 { side = FACTION_SIDE; vehicle = "RGT_CBRN_Grenadier"; rank = "PRIVATE";  position[] = {-3,-6,0}; };
                    class Unit6 { side = FACTION_SIDE; vehicle = "RGT_CBRN_Rifleman";  rank = "PRIVATE";  position[] = {0,-9,0}; };
                };

                class RGT_CBRN_FieldLiaisonElement {
                    name = "Field Liaison Element";
                    faction = "RGT_Faction_CBRN";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_CBRN_Leader";    rank = "LIEUTENANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_CBRN_CLS";       rank = "PRIVATE";    position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_CBRN_EOD";       rank = "PRIVATE";    position[] = {-3,-3,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_CBRN_JTAC";      rank = "PRIVATE";    position[] = {0,-6,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_CBRN_Radioman";  rank = "PRIVATE";    position[] = {3,-6,0}; };
                    class Unit5 { side = FACTION_SIDE; vehicle = "RGT_CBRN_Marksman";  rank = "PRIVATE";    position[] = {-3,-6,0}; };
                };

            };

            class Vehicles {
                name = "Vehicles";

                class RGT_CBRN_ResponseTeam {
                    name = "CBRN Response Team";
                    faction = "RGT_Faction_CBRN";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_CBRN_Veh_Containment"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_CBRN_Leader";          rank = "SERGEANT"; position[] = {2,-2,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_CBRN_CLS";             rank = "CORPORAL"; position[] = {4,-4,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_CBRN_EOD";             rank = "CORPORAL"; position[] = {6,-6,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_CBRN_Rifleman";        rank = "PRIVATE";  position[] = {8,-8,0}; };
                };
                class RGT_CBRN_MountedTeam {
                    name = "Mounted Response Team (Offroad)";
                    faction = "RGT_Faction_CBRN";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_CBRN_Veh_Offroad";      rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_CBRN_Veh_Offroad_Comms"; rank = "CORPORAL"; position[] = {10,-10,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_CBRN_Leader";           rank = "SERGEANT"; position[] = {2,-2,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_CBRN_Radioman";         rank = "CORPORAL"; position[] = {4,-4,0}; };
                };

            };
        };

        // -------------------- Cold War --------------------
        class RGT_Faction_ColdWar {
            name = "RGT - Cold War (FAL)";

            class Infantry {
                name = "Infantry";

                class RGT_CW_Fireteam {
                    name = "Fireteam";
                    faction = "RGT_Faction_ColdWar";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_CW_Leader";    rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_CW_MG";        rank = "CORPORAL"; position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_CW_Grenadier"; rank = "PRIVATE";  position[] = {-3,-3,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_CW_LightAT";   rank = "PRIVATE";  position[] = {0,-6,0}; };
                };

                class RGT_CW_RifleSquad {
                    name = "Rifle Squad";
                    faction = "RGT_Faction_ColdWar";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_CW_Leader";    rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_CW_Leader";    rank = "SERGEANT"; position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_CW_CLS";       rank = "PRIVATE";  position[] = {6,-3,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_CW_MG";        rank = "CORPORAL"; position[] = {9,-3,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_CW_Grenadier"; rank = "PRIVATE";  position[] = {12,-3,0}; };
                    class Unit5 { side = FACTION_SIDE; vehicle = "RGT_CW_LightAT";   rank = "PRIVATE";  position[] = {15,-3,0}; };
                    class Unit6 { side = FACTION_SIDE; vehicle = "RGT_CW_Leader";    rank = "SERGEANT"; position[] = {-3,-3,0}; };
                    class Unit7 { side = FACTION_SIDE; vehicle = "RGT_CW_MG";        rank = "CORPORAL"; position[] = {-6,-3,0}; };
                    class Unit8 { side = FACTION_SIDE; vehicle = "RGT_CW_Grenadier"; rank = "PRIVATE";  position[] = {-9,-3,0}; };
                    class Unit9 { side = FACTION_SIDE; vehicle = "RGT_CW_Marksman";  rank = "PRIVATE";  position[] = {-12,-3,0}; };
                };

                class RGT_CW_C2Element {
                    name = "C2 Element";
                    faction = "RGT_Faction_ColdWar";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_CW_Leader";   rank = "LIEUTENANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_CW_Leader";   rank = "SERGEANT";   position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_CW_CLS";      rank = "PRIVATE";    position[] = {-3,-3,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_CW_Radioman"; rank = "PRIVATE";    position[] = {0,-6,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_CW_Radioman"; rank = "PRIVATE";    position[] = {3,-6,0}; };
                };

            };

            class Vehicles {
                name = "Vehicles";

                class RGT_CW_MountedFireteam_M151 {
                    name = "Mounted Fire Team (M151 HMG)";
                    faction = "RGT_Faction_ColdWar";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_CW_Veh_M151_HMG"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_CW_Leader";       rank = "SERGEANT"; position[] = {2,-2,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_CW_Rifleman";     rank = "PRIVATE";  position[] = {4,-4,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_CW_MG";           rank = "PRIVATE";  position[] = {6,-6,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_CW_Grenadier";    rank = "PRIVATE";  position[] = {8,-8,0}; };
                };
                class RGT_CW_MechanizedSquad_M113 {
                    name = "Mechanized Squad (M113 M2)";
                    faction = "RGT_Faction_ColdWar";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_CW_Veh_M113_M2"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_CW_Leader";      rank = "SERGEANT"; position[] = {2,-2,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_CW_CLS";         rank = "CORPORAL"; position[] = {4,-4,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_CW_Rifleman";    rank = "PRIVATE";  position[] = {6,-6,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_CW_MG";          rank = "PRIVATE";  position[] = {8,-8,0}; };
                    class Unit5 { side = FACTION_SIDE; vehicle = "RGT_CW_Grenadier";   rank = "PRIVATE";  position[] = {10,-10,0}; };
                    class Unit6 { side = FACTION_SIDE; vehicle = "RGT_CW_Rifleman";    rank = "PRIVATE";  position[] = {12,-12,0}; };
                    class Unit7 { side = FACTION_SIDE; vehicle = "RGT_CW_LightAT";     rank = "PRIVATE";  position[] = {14,-14,0}; };
                };
                class RGT_CW_ArmorSection_M60 {
                    name = "Armor Section (M60A3)";
                    faction = "RGT_Faction_ColdWar";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_CW_Veh_M60A3"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_CW_Veh_M60A3"; rank = "CORPORAL"; position[] = {15,-15,0}; };
                };
                class RGT_CW_TransportFlight_UH1H {
                    name = "Transport Flight (UH-1H)";
                    faction = "RGT_Faction_ColdWar";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_CW_Veh_UH1H_M240"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_CW_Veh_UH1H_M240"; rank = "CORPORAL"; position[] = {50,-50,0}; };
                };

            };
        };

        // -------------------- Cold War M16 --------------------
        class RGT_Faction_ColdWarM16 {
            name = "RGT - Cold War (M16)";

            class Infantry {
                name = "Infantry";

                class RGT_CWM16_Fireteam {
                    name = "Fireteam";
                    faction = "RGT_Faction_ColdWarM16";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_CWM16_Leader";    rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_CWM16_MG";        rank = "CORPORAL"; position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_CWM16_Grenadier"; rank = "PRIVATE";  position[] = {-3,-3,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_CWM16_LightAT";   rank = "PRIVATE";  position[] = {0,-6,0}; };
                };

                class RGT_CWM16_RifleSquad {
                    name = "Rifle Squad";
                    faction = "RGT_Faction_ColdWarM16";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_CWM16_Leader";    rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_CWM16_Leader";    rank = "SERGEANT"; position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_CWM16_CLS";       rank = "PRIVATE";  position[] = {6,-3,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_CWM16_MG";        rank = "CORPORAL"; position[] = {9,-3,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_CWM16_Grenadier"; rank = "PRIVATE";  position[] = {12,-3,0}; };
                    class Unit5 { side = FACTION_SIDE; vehicle = "RGT_CWM16_LightAT";   rank = "PRIVATE";  position[] = {15,-3,0}; };
                    class Unit6 { side = FACTION_SIDE; vehicle = "RGT_CWM16_Leader";    rank = "SERGEANT"; position[] = {-3,-3,0}; };
                    class Unit7 { side = FACTION_SIDE; vehicle = "RGT_CWM16_MG";        rank = "CORPORAL"; position[] = {-6,-3,0}; };
                    class Unit8 { side = FACTION_SIDE; vehicle = "RGT_CWM16_Grenadier"; rank = "PRIVATE";  position[] = {-9,-3,0}; };
                    class Unit9 { side = FACTION_SIDE; vehicle = "RGT_CWM16_Marksman";  rank = "PRIVATE";  position[] = {-12,-3,0}; };
                };

                class RGT_CWM16_C2Element {
                    name = "C2 Element";
                    faction = "RGT_Faction_ColdWarM16";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_CWM16_Leader";   rank = "LIEUTENANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_CWM16_Leader";   rank = "SERGEANT";   position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_CWM16_CLS";      rank = "PRIVATE";    position[] = {-3,-3,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_CWM16_Radioman"; rank = "PRIVATE";    position[] = {0,-6,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_CWM16_Radioman"; rank = "PRIVATE";    position[] = {3,-6,0}; };
                };

            };

            class Vehicles {
                name = "Vehicles";

                class RGT_CWM16_MountedFireteam_M151 {
                    name = "Mounted Fire Team (M151 HMG)";
                    faction = "RGT_Faction_ColdWarM16";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_CWM16_Veh_M151_HMG"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_CWM16_Leader";       rank = "SERGEANT"; position[] = {2,-2,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_CWM16_Rifleman";     rank = "PRIVATE";  position[] = {4,-4,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_CWM16_MG";           rank = "PRIVATE";  position[] = {6,-6,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_CWM16_Grenadier";    rank = "PRIVATE";  position[] = {8,-8,0}; };
                };
                class RGT_CWM16_MechanizedSquad_M113 {
                    name = "Mechanized Squad (M113 M2)";
                    faction = "RGT_Faction_ColdWarM16";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_CWM16_Veh_M113_M2"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_CWM16_Leader";      rank = "SERGEANT"; position[] = {2,-2,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_CWM16_CLS";         rank = "CORPORAL"; position[] = {4,-4,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_CWM16_Rifleman";    rank = "PRIVATE";  position[] = {6,-6,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_CWM16_MG";          rank = "PRIVATE";  position[] = {8,-8,0}; };
                    class Unit5 { side = FACTION_SIDE; vehicle = "RGT_CWM16_Grenadier";   rank = "PRIVATE";  position[] = {10,-10,0}; };
                    class Unit6 { side = FACTION_SIDE; vehicle = "RGT_CWM16_Rifleman";    rank = "PRIVATE";  position[] = {12,-12,0}; };
                    class Unit7 { side = FACTION_SIDE; vehicle = "RGT_CWM16_LightAT";     rank = "PRIVATE";  position[] = {14,-14,0}; };
                };
                class RGT_CWM16_ArmorSection_M60 {
                    name = "Armor Section (M60A3)";
                    faction = "RGT_Faction_ColdWarM16";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_CWM16_Veh_M60A3"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_CWM16_Veh_M60A3"; rank = "CORPORAL"; position[] = {15,-15,0}; };
                };
                class RGT_CWM16_TransportFlight_UH1H {
                    name = "Transport Flight (UH-1H)";
                    faction = "RGT_Faction_ColdWarM16";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_CWM16_Veh_UH1H_M240"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_CWM16_Veh_UH1H_M240"; rank = "CORPORAL"; position[] = {50,-50,0}; };
                };

            };
        };

        // -------------------- SOF --------------------
        class RGT_Faction_SOF {
            name = "RGT - SOF";

            class Infantry {
                name = "Infantry";

                class RGT_SOF_AssaultTeam {
                    name = "Assault Team";
                    faction = "RGT_Faction_SOF";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_SOF_Leader";   rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_SOF_Pointman"; rank = "CORPORAL"; position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_SOF_AR";       rank = "PRIVATE";  position[] = {-3,-3,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_SOF_CLS";      rank = "PRIVATE";  position[] = {0,-6,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_SOF_Breacher"; rank = "PRIVATE";  position[] = {3,-6,0}; };
                    class Unit5 { side = FACTION_SIDE; vehicle = "RGT_SOF_Marksman"; rank = "PRIVATE";  position[] = {-3,-6,0}; };
                };

                class RGT_SOF_TroopC2 {
                    name = "Troop C2";
                    faction = "RGT_Faction_SOF";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_SOF_Leader";   rank = "CAPTAIN";  position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_SOF_Leader";   rank = "SERGEANT"; position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_SOF_Marksman"; rank = "PRIVATE";  position[] = {-3,-3,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_SOF_Breacher"; rank = "PRIVATE";  position[] = {0,-6,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_SOF_Signaler"; rank = "PRIVATE";  position[] = {3,-6,0}; };
                    class Unit5 { side = FACTION_SIDE; vehicle = "RGT_SOF_JTAC";     rank = "PRIVATE";  position[] = {-3,-6,0}; };
                };

                class RGT_SOF_SADSOGTeam {
                    name = "SAD SOG Team";
                    faction = "RGT_Faction_SOF";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Guer_Leader"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Guer_Rebel";  rank = "CORPORAL"; position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_Guer_Sniper"; rank = "PRIVATE";  position[] = {-3,-3,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_Guer_CLS";    rank = "PRIVATE";  position[] = {0,-6,0}; };
                };

            };

            class Vehicles {
                name = "Vehicles";

                class RGT_SOF_TransportFlight_UH60 {
                    name = "Transport Flight (UH-60M)";
                    faction = "RGT_Faction_SOF";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Inf_Veh_UH60M"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Inf_Veh_UH60M"; rank = "CORPORAL"; position[] = {50,-50,0}; };
                };
                class RGT_SOF_TransportFlight_CH47 {
                    name = "Transport Flight (CH-47F)";
                    faction = "RGT_Faction_SOF";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Inf_Veh_CH47F"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Inf_Veh_CH47F"; rank = "CORPORAL"; position[] = {60,-60,0}; };
                };
            };
        };

        // -------------------- Sniper --------------------
        class RGT_Faction_Sniper {
            name = "RGT - Sniper";

            class Infantry {
                name = "Infantry";

                class RGT_Sniper_Team {
                    name = "Sniper Team";
                    faction = "RGT_Faction_Sniper";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Sniper_SpotterSpecOps"; rank = "CORPORAL"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Sniper_SniperSpecOps";  rank = "PRIVATE";  position[] = {3,-3,0}; };
                };

                class RGT_Sniper_Section {
                    name = "Sniper Section";
                    faction = "RGT_Faction_Sniper";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Inf_Leader";            rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Inf_CLS";               rank = "PRIVATE";  position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_Sniper_SpotterSpecOps"; rank = "CORPORAL"; position[] = {-3,-3,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_Sniper_SniperSpecOps";  rank = "PRIVATE";  position[] = {-6,-3,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_Sniper_SpotterSpecOps"; rank = "CORPORAL"; position[] = {-9,-3,0}; };
                    class Unit5 { side = FACTION_SIDE; vehicle = "RGT_Sniper_SniperSpecOps";  rank = "PRIVATE";  position[] = {-12,-3,0}; };
                    class Unit6 { side = FACTION_SIDE; vehicle = "RGT_Sniper_SpotterSpecOps"; rank = "PRIVATE";  position[] = {6,-3,0}; };
                    class Unit7 { side = FACTION_SIDE; vehicle = "RGT_Sniper_SniperSpecOps";  rank = "PRIVATE";  position[] = {9,-3,0}; };
                };

                class RGT_Sniper_TeamArid {
                    name = "Sniper Team (Arid)";
                    faction = "RGT_Faction_Sniper";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Sniper_SpotterSpecOps"; rank = "CORPORAL"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Sniper_SniperSpecOps";  rank = "PRIVATE";  position[] = {3,-3,0}; };
                };

                class RGT_Sniper_TeamWoodland {
                    name = "Sniper Team (Woodland)";
                    faction = "RGT_Faction_Sniper";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Sniper_SpotterSpecOps"; rank = "CORPORAL"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Sniper_SniperSpecOps";  rank = "PRIVATE";  position[] = {3,-3,0}; };
                };

                class RGT_Sniper_TeamM107 {
                    name = "Sniper Team (M107)";
                    faction = "RGT_Faction_Sniper";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Sniper_SpotterSpecOps";    rank = "CORPORAL"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Sniper_HeavySniperSpecOps"; rank = "PRIVATE"; position[] = {3,-3,0}; };
                };

                class RGT_Sniper_TeamAFO {
                    name = "Sniper Team (AFO)";
                    faction = "RGT_Faction_Sniper";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Sniper_SpotterAFO"; rank = "CORPORAL"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Sniper_SniperAFO";  rank = "PRIVATE";  position[] = {3,-3,0}; };
                };

            };

            class Vehicles {
                name = "Vehicles";

                class RGT_Sniper_MountedPair_Landrover {
                    name = "Mounted Sniper Pair (Land Rover)";
                    faction = "RGT_Faction_Sniper";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Sniper_Veh_Landrover"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Sniper_Sniper";        rank = "SERGEANT"; position[] = {2,-2,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_Sniper_Spotter";       rank = "CORPORAL"; position[] = {4,-4,0}; };
                };
            };
        };

        // -------------------- Recce --------------------
        class RGT_Faction_Recce {
            name = "RGT - Recce";

            class Infantry {
                name = "Infantry";

                class RGT_Recce_Team {
                    name = "Recce Team";
                    faction = "RGT_Faction_Recce";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Recce_Leader"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Recce_AR";     rank = "CORPORAL"; position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_Recce_Scout";  rank = "PRIVATE";  position[] = {-3,-3,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_Recce_CLS";    rank = "PRIVATE";  position[] = {0,-6,0}; };
                };

            };

            class Vehicles {
                name = "Vehicles";

                class RGT_Recce_MountedPair_ATV {
                    name = "Mounted Recon Pair (ATV)";
                    faction = "RGT_Faction_Recce";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Recce_Veh_ATV"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Recce_Veh_ATV"; rank = "CORPORAL"; position[] = {3,-3,0}; };
                };
                class RGT_Recce_MountedTeam_Landrover {
                    name = "Mounted Recon Team (Land Rover)";
                    faction = "RGT_Faction_Recce";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Recce_Veh_Landrover"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Recce_Leader";        rank = "SERGEANT"; position[] = {2,-2,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_Recce_CLS";           rank = "CORPORAL"; position[] = {4,-4,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_Recce_AR";            rank = "CORPORAL"; position[] = {6,-6,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_Recce_Scout";         rank = "CORPORAL"; position[] = {8,-8,0}; };
                };
                class RGT_Recce_MountedTeam_MRZR {
                    name = "Mounted Recon Team (MRZR)";
                    faction = "RGT_Faction_Recce";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Recce_Veh_MRZR"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Recce_Leader";   rank = "SERGEANT"; position[] = {2,-2,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_Recce_Scout";    rank = "CORPORAL"; position[] = {4,-4,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_Recce_AR";       rank = "CORPORAL"; position[] = {6,-6,0}; };
                };
                class RGT_Recce_BoatTeam_Zodiac {
                    name = "Boat Recon Team (Zodiac)";
                    faction = "RGT_Faction_Recce";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Recce_Veh_Zodiac"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Recce_Leader";     rank = "SERGEANT"; position[] = {2,-2,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_Recce_Scout";      rank = "CORPORAL"; position[] = {4,-4,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_Recce_CLS";        rank = "CORPORAL"; position[] = {6,-6,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_Recce_AR";         rank = "CORPORAL"; position[] = {8,-8,0}; };
                };
            };
        };

        // -------------------- Diving --------------------
        class RGT_Faction_Diving {
            name = "RGT - Diving";

            class Infantry {
                name = "Infantry";

                class RGT_Diving_SEALTeam {
                    name = "SEAL Team";
                    faction = "RGT_Faction_Diving";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Diving_Leader";   rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Diving_Engineer"; rank = "CORPORAL"; position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_Diving_Rifleman"; rank = "PRIVATE";  position[] = {-3,-3,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_Diving_CLS";      rank = "PRIVATE";  position[] = {0,-6,0}; };
                };

            };

            class Vehicles {
                name = "Vehicles";

                class RGT_Diving_SDVTeam {
                    name = "SDV Team";
                    faction = "RGT_Faction_Diving";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Diving_Veh_SDV";  rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Diving_Leader";   rank = "SERGEANT"; position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_Diving_Rifleman"; rank = "CORPORAL"; position[] = {5,-5,0}; };
                };
            };
        };

        // -------------------- Russian --------------------
        class RGT_Faction_Russian {
            name = "RGT - Russian (CTSO)";

            class Infantry {
                name = "Infantry";

                class RGT_Rus_FireGroupRPK {
                    name = "Fire Group (RPK)";
                    faction = "RGT_Faction_Russian";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Rus_Leader";          rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Rus_AR";              rank = "PRIVATE";  position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_Rus_MedAT";           rank = "PRIVATE";  position[] = {-3,-3,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_Rus_MedATAmmoBearer"; rank = "PRIVATE";  position[] = {0,-6,0}; };
                };

                class RGT_Rus_ManeuverGroup {
                    name = "Maneuver Group";
                    faction = "RGT_Faction_Russian";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Rus_Grenadier"; rank = "CORPORAL"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Rus_Grenadier"; rank = "PRIVATE";  position[] = {3,-3,0}; };
                };

                class RGT_Rus_FireGroupPKM {
                    name = "Fire Group (PKM)";
                    faction = "RGT_Faction_Russian";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Rus_Leader";          rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Rus_MG";              rank = "PRIVATE";  position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_Rus_MedAT";           rank = "PRIVATE";  position[] = {-3,-3,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_Rus_MedATAmmoBearer"; rank = "PRIVATE";  position[] = {0,-6,0}; };
                };

                class RGT_Rus_MRInfantrySquad {
                    name = "MR Infantry Squad";
                    faction = "RGT_Faction_Russian";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Rus_Leader";          rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Rus_Grenadier";       rank = "CORPORAL"; position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_Rus_Grenadier";       rank = "PRIVATE";  position[] = {-3,-3,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_Rus_AR";              rank = "PRIVATE";  position[] = {6,-3,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_Rus_MedAT";           rank = "PRIVATE";  position[] = {-6,-3,0}; };
                    class Unit5 { side = FACTION_SIDE; vehicle = "RGT_Rus_MedATAmmoBearer"; rank = "PRIVATE";  position[] = {0,-6,0}; };
                };

                class RGT_Rus_C2Element {
                    name = "C2 Element";
                    faction = "RGT_Faction_Russian";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Rus_Leader";            rank = "LIEUTENANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Rus_Marksman";          rank = "CORPORAL";   position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_Rus_MG";                rank = "PRIVATE";    position[] = {-3,-3,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_Rus_CLS";               rank = "PRIVATE";    position[] = {0,-6,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_Rus_MGAmmoBearer_RUS";  rank = "PRIVATE";    position[] = {3,-6,0}; };
                };
            };

            class Vehicles {
                name = "Vehicles";

                class RGT_Rus_VehicleCrew {
                    name = "Vehicle Crew";
                    faction = "RGT_Faction_Russian";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Rus_AFVcrew"; rank = "CORPORAL"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Rus_AFVcrew"; rank = "PRIVATE";  position[] = {2,-2,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_Rus_AFVcrew"; rank = "PRIVATE";  position[] = {-2,-2,0}; };
                };
                class RGT_Rus_HeliCrew {
                    name = "Heli Crew";
                    faction = "RGT_Faction_Russian";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Rus_RWcrew"; rank = "CORPORAL"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Rus_RWcrew"; rank = "PRIVATE";  position[] = {2,-2,0}; };
                };
                class RGT_Rus_MountedFireteam_Tigr {
                    name = "Mounted Fire Team (Tigr)";
                    faction = "RGT_Faction_Russian";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Rus_Veh_Tigr_M";   rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Rus_Leader";       rank = "SERGEANT"; position[] = {2,-2,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_Rus_Rifleman";     rank = "PRIVATE";  position[] = {4,-4,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_Rus_AR";           rank = "PRIVATE";  position[] = {6,-6,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_Rus_Grenadier";    rank = "PRIVATE";  position[] = {8,-8,0}; };
                };
                class RGT_Rus_MountedFireteam_BRDM {
                    name = "Mounted Fire Team (BRDM-2)";
                    faction = "RGT_Faction_Russian";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Rus_Veh_BRDM2";    rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Rus_Leader";       rank = "SERGEANT"; position[] = {2,-2,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_Rus_Rifleman";     rank = "PRIVATE";  position[] = {4,-4,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_Rus_AR";           rank = "PRIVATE";  position[] = {6,-6,0}; };
                };
                class RGT_Rus_MechanizedSquad_BMP {
                    name = "Mechanized Squad (BMP-2D)";
                    faction = "RGT_Faction_Russian";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Rus_Veh_BMP2D";  rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Rus_Leader";     rank = "SERGEANT"; position[] = {2,-2,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_Rus_CLS";        rank = "CORPORAL"; position[] = {4,-4,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_Rus_Rifleman";   rank = "PRIVATE";  position[] = {6,-6,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_Rus_AR";         rank = "PRIVATE";  position[] = {8,-8,0}; };
                    class Unit5 { side = FACTION_SIDE; vehicle = "RGT_Rus_Grenadier";  rank = "PRIVATE";  position[] = {10,-10,0}; };
                    class Unit6 { side = FACTION_SIDE; vehicle = "RGT_Rus_MG";         rank = "PRIVATE";  position[] = {12,-12,0}; };
                    class Unit7 { side = FACTION_SIDE; vehicle = "RGT_Rus_LightAT";    rank = "PRIVATE";  position[] = {14,-14,0}; };
                };
                class RGT_Rus_MechanizedSquad_BTR {
                    name = "Mechanized Squad (BTR-80A)";
                    faction = "RGT_Faction_Russian";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Rus_Veh_BTR80A"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Rus_Leader";     rank = "SERGEANT"; position[] = {2,-2,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_Rus_CLS";        rank = "CORPORAL"; position[] = {4,-4,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_Rus_Rifleman";   rank = "PRIVATE";  position[] = {6,-6,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_Rus_AR";         rank = "PRIVATE";  position[] = {8,-8,0}; };
                    class Unit5 { side = FACTION_SIDE; vehicle = "RGT_Rus_Grenadier";  rank = "PRIVATE";  position[] = {10,-10,0}; };
                    class Unit6 { side = FACTION_SIDE; vehicle = "RGT_Rus_MG";         rank = "PRIVATE";  position[] = {12,-12,0}; };
                    class Unit7 { side = FACTION_SIDE; vehicle = "RGT_Rus_LightAT";    rank = "PRIVATE";  position[] = {14,-14,0}; };
                };
                class RGT_Rus_TransportFlight_Mi8 {
                    name = "Transport Flight (Mi-8MT)";
                    faction = "RGT_Faction_Russian";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Rus_Veh_Mi8MT"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Rus_Veh_Mi8MT"; rank = "CORPORAL"; position[] = {50,-50,0}; };
                };
                class RGT_Rus_AttackFlight_Ka52 {
                    name = "Attack Flight (Ka-52)";
                    faction = "RGT_Faction_Russian";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Rus_Veh_Ka52"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Rus_Veh_Ka52"; rank = "CORPORAL"; position[] = {50,-50,0}; };
                };
                class RGT_Rus_AttackFlight_Mi24 {
                    name = "Attack Flight (Mi-24VT)";
                    faction = "RGT_Faction_Russian";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Rus_Veh_Mi24Vt"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Rus_Veh_Mi24Vt"; rank = "CORPORAL"; position[] = {50,-50,0}; };
                };
            };
        };

        // -------------------- Spetsnaz --------------------
        class RGT_Faction_Spetsnaz {
            name = "RGT - Spetsnaz";

            class Infantry {
                name = "Infantry";

                class RGT_Spetsnaz_SSOTeam {
                    name = "SSO Team";
                    faction = "RGT_Faction_Spetsnaz";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Spetsnaz_Leader";   rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Spetsnaz_Marksman"; rank = "CORPORAL"; position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_Spetsnaz_CLS";      rank = "CORPORAL"; position[] = {-3,-3,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_Spetsnaz_LightAT";  rank = "CORPORAL"; position[] = {0,-6,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_Spetsnaz_AR";       rank = "PRIVATE";  position[] = {3,-6,0}; };
                    class Unit5 { side = FACTION_SIDE; vehicle = "RGT_Spetsnaz_Pointman"; rank = "PRIVATE";  position[] = {-3,-6,0}; };
                    class Unit6 { side = FACTION_SIDE; vehicle = "RGT_Spetsnaz_LightAT";  rank = "PRIVATE";  position[] = {6,-3,0}; };
                    class Unit7 { side = FACTION_SIDE; vehicle = "RGT_Spetsnaz_Signaler"; rank = "PRIVATE";  position[] = {-6,-3,0}; };
                    class Unit8 { side = FACTION_SIDE; vehicle = "RGT_Spetsnaz_Breacher"; rank = "PRIVATE";  position[] = {0,-9,0}; };
                };

                class RGT_Spetsnaz_SniperTeam {
                    name = "Sniper Team";
                    faction = "RGT_Faction_Spetsnaz";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Rus_Sniper";  rank = "CORPORAL"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Rus_Spotter"; rank = "PRIVATE";  position[] = {3,-3,0}; };
                };
            };

            class Vehicles {
                name = "Vehicles";

                class RGT_Spetsnaz_MountedFireteam_Tigr {
                    name = "Mounted Fire Team (Tigr)";
                    faction = "RGT_Faction_Spetsnaz";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Spetsnaz_Veh_Tigr_STS"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Spetsnaz_Leader";      rank = "SERGEANT"; position[] = {2,-2,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_Spetsnaz_Assault";     rank = "CORPORAL"; position[] = {4,-4,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_Spetsnaz_AR";          rank = "CORPORAL"; position[] = {6,-6,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_Spetsnaz_Breacher";    rank = "CORPORAL"; position[] = {8,-8,0}; };
                };
                class RGT_Spetsnaz_TransportFlight_Mi8 {
                    name = "Transport Flight (Mi-8MT)";
                    faction = "RGT_Faction_Spetsnaz";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Spetsnaz_Veh_Mi8MT"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Spetsnaz_Veh_Mi8MT"; rank = "CORPORAL"; position[] = {50,-50,0}; };
                };
            };
        };

        // -------------------- Taliban --------------------
        class RGT_Faction_Taliban {
            name = "RGT - Taliban";

            class Infantry {
                name = "Infantry";

                class RGT_Taliban_Dasta {
                    name = "Dasta";
                    faction = "RGT_Faction_Taliban";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Taliban_Leader";    rank = "LIEUTENANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Taliban_Rifleman";  rank = "PRIVATE";    position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_Taliban_CLS";       rank = "PRIVATE";    position[] = {-3,-3,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_Taliban_MedAT";     rank = "PRIVATE";    position[] = {0,-6,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_Taliban_Grenadier"; rank = "PRIVATE";    position[] = {3,-6,0}; };
                    class Unit5 { side = FACTION_SIDE; vehicle = "RGT_Taliban_MG";        rank = "PRIVATE";    position[] = {-3,-6,0}; };
                    class Unit6 { side = FACTION_SIDE; vehicle = "RGT_Taliban_AR";        rank = "PRIVATE";    position[] = {6,-6,0}; };
                    class Unit7 { side = FACTION_SIDE; vehicle = "RGT_Taliban_Marksman";  rank = "PRIVATE";    position[] = {-6,-6,0}; };
                };

                class RGT_Taliban_Delgay {
                    name = "Delgay";
                    faction = "RGT_Faction_Taliban";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Taliban_Leader";   rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Taliban_Rifleman"; rank = "PRIVATE";  position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_Taliban_CLS";      rank = "PRIVATE";  position[] = {-3,-3,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_Taliban_Marksman"; rank = "PRIVATE";  position[] = {0,-6,0}; };
                };

            };

            class Vehicles {
                name = "Vehicles";

                class RGT_Taliban_MountedFireteam_Offroad {
                    name = "Mounted Fire Team (Offroad M2)";
                    faction = "RGT_Faction_Taliban";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Taliban_Veh_Offroad_M2"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Taliban_Leader";         rank = "SERGEANT"; position[] = {2,-2,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_Taliban_Rifleman";       rank = "PRIVATE";  position[] = {4,-4,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_Taliban_AR";             rank = "PRIVATE";  position[] = {6,-6,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_Taliban_Grenadier";      rank = "PRIVATE";  position[] = {8,-8,0}; };
                };
                class RGT_Taliban_MountedFireteam_Landrover {
                    name = "Mounted Fire Team (Land Rover M2)";
                    faction = "RGT_Faction_Taliban";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Taliban_Veh_Landrover_M2"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Taliban_Leader";           rank = "SERGEANT"; position[] = {2,-2,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_Taliban_Rifleman";         rank = "PRIVATE";  position[] = {4,-4,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_Taliban_AR";               rank = "PRIVATE";  position[] = {6,-6,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_Taliban_MG";               rank = "PRIVATE";  position[] = {8,-8,0}; };
                };
                class RGT_Taliban_MountedTransport_Ural {
                    name = "Mounted Transport (Ural)";
                    faction = "RGT_Faction_Taliban";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Taliban_Veh_Ural";     rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Taliban_Leader";       rank = "SERGEANT"; position[] = {2,-2,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_Taliban_Rifleman";     rank = "PRIVATE";  position[] = {4,-4,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_Taliban_Rifleman";     rank = "PRIVATE";  position[] = {6,-6,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_Taliban_AR";           rank = "PRIVATE";  position[] = {8,-8,0}; };
                    class Unit5 { side = FACTION_SIDE; vehicle = "RGT_Taliban_MG";           rank = "PRIVATE";  position[] = {10,-10,0}; };
                };
            };
        };

        // -------------------- Guerrilla --------------------
        class RGT_Faction_Guerrilla {
            name = "RGT - Guerrilla";

            class Infantry {
                name = "Infantry";

                class RGT_Guer_PartisanColumn {
                    name = "Partisan Column";
                    faction = "RGT_Faction_Guerrilla";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Guer_Leader";    rank = "LIEUTENANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Guer_Rebel";     rank = "SERGEANT";   position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_Guer_CLS";       rank = "PRIVATE";    position[] = {-3,-3,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_Guer_Rebel";     rank = "CORPORAL";   position[] = {0,-6,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_Guer_Sniper";    rank = "PRIVATE";    position[] = {3,-6,0}; };
                    class Unit5 { side = FACTION_SIDE; vehicle = "RGT_Guer_Grenadier"; rank = "PRIVATE";    position[] = {-3,-6,0}; };
                    class Unit6 { side = FACTION_SIDE; vehicle = "RGT_Guer_AR";        rank = "PRIVATE";    position[] = {0,-9,0}; };
                };

                class RGT_Guer_Cell {
                    name = "Cell";
                    faction = "RGT_Faction_Guerrilla";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Guer_Rebel";     rank = "CORPORAL"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Guer_Sniper";    rank = "PRIVATE";  position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_Guer_Grenadier"; rank = "PRIVATE";  position[] = {-3,-3,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_Guer_AR";        rank = "PRIVATE";  position[] = {0,-6,0}; };
                };

            };

            class Vehicles {
                name = "Vehicles";

                class RGT_Guer_MountedFireteam_Offroad {
                    name = "Mounted Fire Team (Offroad M2)";
                    faction = "RGT_Faction_Guerrilla";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Guer_Veh_Offroad_M2"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Guer_Leader";         rank = "SERGEANT"; position[] = {2,-2,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_Guer_Rebel";          rank = "PRIVATE";  position[] = {4,-4,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_Guer_AR";             rank = "PRIVATE";  position[] = {6,-6,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_Guer_Grenadier";      rank = "PRIVATE";  position[] = {8,-8,0}; };
                };
                class RGT_Guer_MountedFireteam_Landrover {
                    name = "Mounted Fire Team (Land Rover M2)";
                    faction = "RGT_Faction_Guerrilla";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Guer_Veh_Landrover_M2"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Guer_Leader";           rank = "SERGEANT"; position[] = {2,-2,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_Guer_Rebel";            rank = "PRIVATE";  position[] = {4,-4,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_Guer_AR";               rank = "PRIVATE";  position[] = {6,-6,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_Guer_Grenadier";        rank = "PRIVATE";  position[] = {8,-8,0}; };
                };
                class RGT_Guer_MountedTransport_Ural {
                    name = "Mounted Transport (Ural)";
                    faction = "RGT_Faction_Guerrilla";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_Guer_Veh_Ural";   rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_Guer_Leader";     rank = "SERGEANT"; position[] = {2,-2,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_Guer_Rebel";      rank = "PRIVATE";  position[] = {4,-4,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_Guer_AR";         rank = "PRIVATE";  position[] = {6,-6,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_Guer_Grenadier";  rank = "PRIVATE";  position[] = {8,-8,0}; };
                    class Unit5 { side = FACTION_SIDE; vehicle = "RGT_Guer_Sniper";     rank = "PRIVATE";  position[] = {10,-10,0}; };
                };
            };
        };

        // -------------------- PMC --------------------
        class RGT_Faction_PMC {
            name = "RGT - PMC";

            class Infantry {
                name = "Infantry";

                class RGT_PMC_PSDTeam {
                    name = "PSD Team";
                    faction = "RGT_Faction_PMC";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_PMC_Body"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_PMC_Body"; rank = "CORPORAL"; position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_PMC_Body"; rank = "PRIVATE";  position[] = {-3,-3,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_PMC_Body"; rank = "PRIVATE";  position[] = {0,-6,0}; };
                };

                class RGT_PMC_EscortTeam {
                    name = "Escort Team";
                    faction = "RGT_Faction_PMC";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_PMC_Leader"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_PMC_AR";     rank = "PRIVATE";  position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_PMC_CLS";    rank = "PRIVATE";  position[] = {-3,-3,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_PMC_Merc";   rank = "PRIVATE";  position[] = {0,-6,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_PMC_Merc";   rank = "PRIVATE";  position[] = {3,-6,0}; };
                    class Unit5 { side = FACTION_SIDE; vehicle = "RGT_PMC_Merc";   rank = "PRIVATE";  position[] = {-3,-6,0}; };
                    class Unit6 { side = FACTION_SIDE; vehicle = "RGT_PMC_Sniper"; rank = "PRIVATE";  position[] = {0,-9,0}; };
                };

                class RGT_PMC_SniperTeam {
                    name = "Sniper Team";
                    faction = "RGT_Faction_PMC";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_PMC_Sniper"; rank = "CORPORAL"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_PMC_Sniper"; rank = "PRIVATE";  position[] = {3,-3,0}; };
                };

                class RGT_PMC_KillTeam {
                    name = "Kill Team";
                    faction = "RGT_Faction_PMC";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_FA_Leader";   rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_FA_Rifleman"; rank = "CORPORAL"; position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_FA_Rifleman"; rank = "PRIVATE";  position[] = {-3,-3,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_FA_Breacher"; rank = "PRIVATE";  position[] = {0,-6,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_FA_CLS";      rank = "PRIVATE";  position[] = {3,-6,0}; };
                };

                class RGT_PMC_AutomaticWeaponTeam {
                    name = "Automatic Weapon Team";
                    faction = "RGT_Faction_PMC";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_FA_Leader"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_FA_AR";     rank = "PRIVATE";  position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_FA_AR";     rank = "PRIVATE";  position[] = {-3,-3,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_FA_AR";     rank = "PRIVATE";  position[] = {0,-6,0}; };
                };

                class RGT_PMC_ReconTeam {
                    name = "Recon Team";
                    faction = "RGT_Faction_PMC";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_FA_Leader"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_FA_DMR";    rank = "PRIVATE";  position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_FA_DMR";    rank = "PRIVATE";  position[] = {-3,-3,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_FA_DMR";    rank = "PRIVATE";  position[] = {0,-6,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_FA_AR";     rank = "PRIVATE";  position[] = {3,-6,0}; };
                };

            };

            class Vehicles {
                name = "Vehicles";

                class RGT_PMC_MountedFireteam_SUV {
                    name = "Mounted Fire Team (SUV Armed)";
                    faction = "RGT_Faction_PMC";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_PMC_Veh_SUV_Armed"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_PMC_Leader";        rank = "SERGEANT"; position[] = {2,-2,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_PMC_Merc";          rank = "CORPORAL"; position[] = {4,-4,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_PMC_AR";            rank = "CORPORAL"; position[] = {6,-6,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_PMC_CLS";           rank = "CORPORAL"; position[] = {8,-8,0}; };
                };
                class RGT_PMC_Convoy_SUV {
                    name = "PSD Convoy (SUV)";
                    faction = "RGT_Faction_PMC";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_PMC_Veh_SUV";       rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_PMC_Veh_SUV_Armed"; rank = "CORPORAL"; position[] = {10,-10,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_PMC_Leader";        rank = "SERGEANT"; position[] = {2,-2,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_PMC_Body";          rank = "CORPORAL"; position[] = {4,-4,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_PMC_Merc";          rank = "CORPORAL"; position[] = {6,-6,0}; };
                };
            };
        };

        // -------------------- Foreign Advisor --------------------
        class RGT_Faction_ForeignAdvisor {
            name = "RGT - Foreign Advisor";

            class Infantry {
                name = "Infantry";

                class RGT_FA_AdvisorTeam {
                    name = "Advisor Team";
                    faction = "RGT_Faction_ForeignAdvisor";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_FA_Leader";   rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_FA_Rifleman"; rank = "CORPORAL"; position[] = {5,-5,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_FA_CLS";      rank = "CORPORAL"; position[] = {-5,-5,0}; };
                };
                class RGT_FA_FullTeam {
                    name = "Full Team";
                    faction = "RGT_Faction_ForeignAdvisor";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_FA_Leader";   rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_FA_CLS";      rank = "CORPORAL"; position[] = {2,-2,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_FA_AR";       rank = "CORPORAL"; position[] = {5,-5,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_FA_Breacher"; rank = "CORPORAL"; position[] = {-5,-5,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_FA_DMR";      rank = "CORPORAL"; position[] = {0,-10,0}; };
                    class Unit5 { side = FACTION_SIDE; vehicle = "RGT_FA_Rifleman"; rank = "CORPORAL"; position[] = {-8,-8,0}; };
                };

            };

            class Vehicles {
                name = "Vehicles";

                class RGT_FA_MountedFireteam_SUV {
                    name = "Mounted Fire Team (SUV Armed)";
                    faction = "RGT_Faction_ForeignAdvisor";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_FA_Veh_SUV_Armed"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_FA_Leader";        rank = "SERGEANT"; position[] = {2,-2,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_FA_Rifleman";      rank = "CORPORAL"; position[] = {4,-4,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_FA_AR";            rank = "CORPORAL"; position[] = {6,-6,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_FA_CLS";           rank = "CORPORAL"; position[] = {8,-8,0}; };
                };
                class RGT_FA_MountedFireteam_Hilux {
                    name = "Mounted Fire Team (Hilux)";
                    faction = "RGT_Faction_ForeignAdvisor";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_FA_Veh_Hilux_Open"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_FA_Leader";         rank = "SERGEANT"; position[] = {2,-2,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_FA_Rifleman";       rank = "CORPORAL"; position[] = {4,-4,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_FA_AR";             rank = "CORPORAL"; position[] = {6,-6,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_FA_Breacher";       rank = "CORPORAL"; position[] = {8,-8,0}; };
                };
            };
        };

        // -------------------- UC --------------------
        class RGT_Faction_UC {
            name = "RGT - Non Attributable";

            class Infantry {
                name = "Infantry";

                class RGT_UC_AssaultTeam {
                    name = "Assault Team (Non-attributable)";
                    faction = "RGT_Faction_UC";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_UC_Leader";   rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_UC_Rifleman"; rank = "CORPORAL"; position[] = {3,-3,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_UC_AR";       rank = "PRIVATE";  position[] = {-3,-3,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_UC_CLS";      rank = "PRIVATE";  position[] = {0,-6,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_UC_Engineer"; rank = "PRIVATE";  position[] = {3,-6,0}; };
                    class Unit5 { side = FACTION_SIDE; vehicle = "RGT_UC_Marksman"; rank = "PRIVATE";  position[] = {-3,-6,0}; };
                };
            };

            class Vehicles {
                name = "Vehicles";

                class RGT_UC_MountedFireteam_SUV {
                    name = "Mounted Fire Team (SUV Armed)";
                    faction = "RGT_Faction_UC";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_UC_Veh_SUV_Armed"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_UC_Leader";        rank = "SERGEANT"; position[] = {2,-2,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_UC_Rifleman";      rank = "CORPORAL"; position[] = {4,-4,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_UC_AR";            rank = "CORPORAL"; position[] = {6,-6,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_UC_CLS";           rank = "CORPORAL"; position[] = {8,-8,0}; };
                };
                class RGT_UC_MountedFireteam_Hilux {
                    name = "Mounted Fire Team (Hilux)";
                    faction = "RGT_Faction_UC";
                    side = FACTION_SIDE;
                    class Unit0 { side = FACTION_SIDE; vehicle = "RGT_UC_Veh_Hilux_Open"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = FACTION_SIDE; vehicle = "RGT_UC_Leader";         rank = "SERGEANT"; position[] = {2,-2,0}; };
                    class Unit2 { side = FACTION_SIDE; vehicle = "RGT_UC_Rifleman";       rank = "CORPORAL"; position[] = {4,-4,0}; };
                    class Unit3 { side = FACTION_SIDE; vehicle = "RGT_UC_AR";             rank = "CORPORAL"; position[] = {6,-6,0}; };
                    class Unit4 { side = FACTION_SIDE; vehicle = "RGT_UC_Engineer";       rank = "CORPORAL"; position[] = {8,-8,0}; };
                };
            };
        };
