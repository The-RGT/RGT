comment "Remove gear before applying loadouts";
removeBackpack player;

player addBackpack "rhs_rpg_2";
for "_i" from 1 to 3 do {player addItemToBackpack "rhs_rpg7_PG7VL_mag";};