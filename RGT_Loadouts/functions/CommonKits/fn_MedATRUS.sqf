comment "Remove gear before applying loadouts";
removeBackpack player;


player addWeapon "rhs_weap_rpg7";
player addSecondaryWeaponItem "rhs_acc_rpg7v_zeroing_100";
player addSecondaryWeaponItem "rhs_acc_pgo7v3";

player addBackpack "rhs_rpg_2";
for "_i" from 1 to 2 do {player addItem "rhs_rpg7_PG7V_mag";};

hint "You're now equipped as an anti-armor specialist, \narmed with an RPG-7, the notorious rocket-propelled grenade launcher.";