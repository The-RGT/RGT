_magazines = primaryWeaponMagazine player;
_ammo = _magazines select 0;
for "_i" from 1 to 10 do {player addItemToBackpack _ammo;};