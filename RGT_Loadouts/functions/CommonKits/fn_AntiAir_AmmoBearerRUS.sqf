comment "Remove gear before applying loadouts";

removeBackpack player;

player addBackpack "rhs_assault_umbts";
for "_i" from 1 to 2 do {player addItemToBackpack "rhs_mag_9k38_rocket";};

hint "You're now carrying extra missles for the anti air missile launcher.";