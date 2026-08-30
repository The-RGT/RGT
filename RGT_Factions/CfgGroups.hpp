// RGT Factions — Zeus / editor group compositions.
// Non-civilian factions are included three times (West, East, Indep) so all
// factions are placeable under any side filter in Zeus. The shared definitions
// live in groups\all_factions.hpp and use FACTION_SIDE for the side number.
// Civilian remains its own block, only under the Civilian side container.

class CfgGroups {
    // ==================== WEST (BLUFOR) ====================
    class West {
        #define FACTION_SIDE 1
        #include "groups\all_factions.hpp"
        #undef FACTION_SIDE
    };

    // ==================== EAST (OPFOR) ====================
    class East {
        #define FACTION_SIDE 0
        #include "groups\all_factions.hpp"
        #undef FACTION_SIDE
    };

    // ==================== INDEPENDENT ====================
    class Indep {
        #define FACTION_SIDE 2
        #include "groups\all_factions.hpp"
        #undef FACTION_SIDE
    };

    // ==================== CIVILIAN ====================
    // The base game (data_f) only defines West/East/Indep side-roots in
    // CfgGroups, and each declares its own name + side (West side=1, East
    // side=0, Indep side=2). Our West/East/Indep wrappers inherit those by
    // merging with the base classes. There is NO base civilian root, so this
    // "Civ" class has nothing to inherit from: without an explicit side it is
    // unbound and Zeus leaks the groups into every side tab as a blank,
    // nameless node. Declaring name + side=3 here binds them to the Civilian
    // side only.
    class Civ {
        name = "Civilians";
        side = 3;
        class RGT_Faction_Civilian {
            name = "RGT - Civilian";

            class Infantry {
                name = "Infantry";

                class RGT_Civ_SmallGroup {
                    name = "Small Group";
                    faction = "RGT_Faction_Civilian";
                    side = 3;
                    class Unit0 { side = 3; vehicle = "RGT_Civ_Civilian";    rank = "PRIVATE"; position[] = {0,0,0}; };
                    class Unit1 { side = 3; vehicle = "RGT_Civ_Businessman"; rank = "PRIVATE"; position[] = {2,-2,0}; };
                    class Unit2 { side = 3; vehicle = "RGT_Civ_Mechanic";    rank = "PRIVATE"; position[] = {-2,-2,0}; };
                    class Unit3 { side = 3; vehicle = "RGT_Civ_Peasant";     rank = "PRIVATE"; position[] = {0,-4,0}; };
                };
                class RGT_Civ_Crowd {
                    name = "Crowd";
                    faction = "RGT_Faction_Civilian";
                    side = 3;
                    class Unit0 { side = 3; vehicle = "RGT_Civ_Civilian";    rank = "PRIVATE"; position[] = {0,0,0}; };
                    class Unit1 { side = 3; vehicle = "RGT_Civ_Businessman"; rank = "PRIVATE"; position[] = {2,-2,0}; };
                    class Unit2 { side = 3; vehicle = "RGT_Civ_Mechanic";    rank = "PRIVATE"; position[] = {-2,-2,0}; };
                    class Unit3 { side = 3; vehicle = "RGT_Civ_Peasant";     rank = "PRIVATE"; position[] = {0,-4,0}; };
                    class Unit4 { side = 3; vehicle = "RGT_Civ_Scientist";   rank = "PRIVATE"; position[] = {4,-4,0}; };
                    class Unit5 { side = 3; vehicle = "RGT_Civ_Reporter";    rank = "PRIVATE"; position[] = {-4,-4,0}; };
                    class Unit6 { side = 3; vehicle = "RGT_Civ_Wiseman";     rank = "PRIVATE"; position[] = {2,-6,0}; };
                    class Unit7 { side = 3; vehicle = "RGT_Civ_NGO";         rank = "PRIVATE"; position[] = {-2,-6,0}; };
                };
            };
        };
    };
};
