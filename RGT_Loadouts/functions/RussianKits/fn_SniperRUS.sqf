comment "Remove gear before applying loadouts";
removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;


comment "Create the arrays for different equipment";
private ["_vest", "_bag", "_headgears"];
_uniform = [
	"rhs_uniform_gorka_1_moss", 0.50,
	"rhs_uniform_gorka_1_green", 0.10,
	"rhs_uniform_gorka_1_emr", 0.50] call BIS_fnc_selectRandomWeighted;
switch(_uniform) do {
    case "rhs_uniform_gorka_1_emr": {
        _vest = [
			"rhs_6sh92_headset", 
			"rhs_6sh92_digi_headset", 
			"rhs_6sh92_vsr_headset"] call BIS_fnc_selectRandom;
			switch(_vest) do {
				case "rhs_6sh92_vsr_headset": {
					_bag = "rhs_tortila_khaki";
				};
				default {
					_bag = [
						"rhs_tortila_olive", 0.50,
						"rhs_tortila_grey", 0.20, 
						"rhs_tortila_emr", 0.10] call BIS_fnc_selectRandomWeighted;
				};
			};
		_headgears = [
            ["rhs_Booniehat_flora", "TRYK_Shemagh_MESH_NV"], 
            ["rhs_Booniehat_digi", "TRYK_Shemagh_MESH_NV"],
            ["rhs_headband", "UK3CB_PVS5A"],
			["rhs_beanie_green", "UK3CB_PVS5A"],
            ["rhs_beanie", "UK3CB_PVS5A"]] call BIS_fnc_selectRandom;
    };  
    default {
        _vest = [
			"rhs_6sh92_headset", 
			"rhs_6sh92_digi_headset"] call BIS_fnc_selectRandom;
        _bag = [
			"rhs_tortila_olive", 0.50, 
			"rhs_tortila_grey", 0.20, 
			"rhs_tortila_emr", 0.10] call BIS_fnc_selectRandomWeighted;      
        _headgears = [
			["rhs_Booniehat_digi", "TRYK_Shemagh_MESH_NV"],
			["rhs_beanie_green", "UK3CB_PVS5A"],
            ["rhs_headband", "UK3CB_PVS5A"]] call BIS_fnc_selectRandom;
    };
};
_headgear = _headgears select 0;
_nods = _headgears select 1;

comment "Add Uniforms and Gear";
player forceAddUniform _uniform;
player addVest _vest;
player addBackpack _bag;
player addHeadgear _headgear;

comment "Add Weapons and attachments";
player addWeapon "rhs_weap_t5000";
player addPrimaryWeaponItem "rhs_acc_dh520x56";
player addPrimaryWeaponItem "rhs_acc_harris_swivel";
player addWeapon "rhs_pdu4";
player addWeapon "rhs_weap_pb_6p9";

comment "Fill Uniform and Gear";

player addItem "ACE_morphine";
for "_i" from 1 to 5 do {player addItem "ACE_fieldDressing";};
for "_i" from 1 to 3 do {player addItem "ACE_tourniquet";};
player addItem "ACE_EarPlugs";
player addItem "ACE_Flashlight_MX991";
player addItem "ACE_MapTools";
player addItem "ACE_ATragMX";
player addItem "ACE_Kestrel4500";
player addItem "ACE_RangeCard";
for "_i" from 1 to 5 do {player addItem "rhs_5Rnd_338lapua_t5000";};
player addItem "rhsusf_mag_17Rnd_9x19_JHP";
for "_i" from 1 to 3 do {player addItem "rhs_mag_9x18_8_57N181S";};
player addItem "O_IR_Grenade";
player addItem "ACE_Chemlight_IR";
player addItem "ACE_microDAGR";
for "_i" from 1 to 2 do {player addItem "rhs_mag_rdg2_white";};
player addItem "rhs_mag_f1";
player addItem "optic_tws";
for "_i" from 1 to 4 do {player addItem "APERSTripMine_Wire_Mag";};

comment "Add standard medical gear";
player call RGT_fnc_medbag;


comment "Add final Gear";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "TFAR_microdagr";
player linkItem "TFAR_anprc152";
player linkItem "ItemGPS";
player linkItem _nods;
player setSpeaker "ACE_NoVoice";

comment "Set G Force resistance and Medical + Engineer training";
player setVariable ["ACE_GForceCoef", 1];

[[player],"ace_medical_medicClass", 2, true] call ace_common_fnc_assignObjectsInList;
[[player],"ACE_IsEngineer", 0, true] call ace_common_fnc_assignObjectsInList;

hint "You're the sniper and medic of a 2-man sniper team. \nYou're equipped with everything needed for long range engagements and providing medical aid.";