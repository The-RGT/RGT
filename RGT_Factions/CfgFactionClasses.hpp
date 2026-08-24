// Side values (Arma 3 convention):
//   0 = OPFOR (East)
//   1 = BLUFOR (West)
//   2 = INDEPENDENT (Guer)
//   3 = CIVILIAN

class CfgFactionClasses {
    class NO_CATEGORY;

    // ==================== BLUFOR ====================
    class RGT_Faction_Infantry: NO_CATEGORY {
        displayName = "RGT - Infantry";
        priority = 1;
        side = 1;
    };
    class RGT_Faction_Woodland: NO_CATEGORY {
        displayName = "RGT - Woodland";
        priority = 1;
        side = 1;
    };
    class RGT_Faction_Arctic: NO_CATEGORY {
        displayName = "RGT - Arctic";
        priority = 1;
        side = 1;
    };
    class RGT_Faction_CBRN: NO_CATEGORY {
        displayName = "RGT - CBRN";
        priority = 1;
        side = 1;
    };
    class RGT_Faction_ColdWar: NO_CATEGORY {
        displayName = "RGT - Cold War (FAL)";
        priority = 1;
        side = 1;
    };
    class RGT_Faction_ColdWarM16: NO_CATEGORY {
        displayName = "RGT - Cold War (M16)";
        priority = 1;
        side = 1;
    };
    class RGT_Faction_SOF: NO_CATEGORY {
        displayName = "RGT - SOF";
        priority = 1;
        side = 1;
    };
    class RGT_Faction_Sniper: NO_CATEGORY {
        displayName = "RGT - Sniper";
        priority = 1;
        side = 1;
    };
    class RGT_Faction_Recce: NO_CATEGORY {
        displayName = "RGT - Recce";
        priority = 1;
        side = 1;
    };
    class RGT_Faction_Diving: NO_CATEGORY {
        displayName = "RGT - Diving";
        priority = 1;
        side = 1;
    };

    // ==================== OPFOR ====================
    class RGT_Faction_Russian: NO_CATEGORY {
        displayName = "RGT - Russian (CTSO)";
        priority = 1;
        side = 0;
    };
    class RGT_Faction_Spetsnaz: NO_CATEGORY {
        displayName = "RGT - Spetsnaz";
        priority = 1;
        side = 0;
    };
    class RGT_Faction_Taliban: NO_CATEGORY {
        displayName = "RGT - Taliban";
        priority = 1;
        side = 0;
    };

    // ==================== INDEPENDENT ====================
    class RGT_Faction_Guerrilla: NO_CATEGORY {
        displayName = "RGT - Guerrilla";
        priority = 1;
        side = 2;
    };
    class RGT_Faction_PMC: NO_CATEGORY {
        displayName = "RGT - PMC";
        priority = 1;
        side = 2;
    };
    class RGT_Faction_ForeignAdvisor: NO_CATEGORY {
        displayName = "RGT - Foreign Advisor";
        priority = 1;
        side = 2;
    };
    class RGT_Faction_UC: NO_CATEGORY {
        displayName = "RGT - Non Attributable";
        priority = 1;
        side = 2;
    };

    // ==================== CIVILIAN ====================
    class RGT_Faction_Civilian: NO_CATEGORY {
        displayName = "RGT - Civilian";
        priority = 0;
        side = 3;
    };
};
