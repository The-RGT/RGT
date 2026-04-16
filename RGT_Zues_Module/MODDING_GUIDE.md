# RGT Quartermaster Zeus — Modding Guide

This guide explains how to add, remove, and edit Quartermasters, ammunition boxes, and scroll-menu Buttons modules in this mod.

## Project Structure

```
@RGT_Quartermaster_Zeus\
├── mod.cpp                          # Workshop/launcher metadata
└── addons\
    └── rgt_qm_zeus\                 # Source folder (pack this into rgt_qm_zeus.pbo)
        ├── $PBOPREFIX$              # Contains "RGT_Quartermaster_Zeus"
        ├── config.cpp               # Root config — includes all .hpp files
        ├── CfgPatches.hpp           # Addon identity, dependencies, unit list
        ├── CfgFunctions.hpp         # Registers SQF functions
        ├── CfgFactionClasses.hpp    # Zeus category definitions
        ├── CfgVehicles.hpp          # All module classes (this is where you add/remove modules)
        └── functions\
            ├── fn_placeQM.sqf       # Quartermaster placement dispatcher
            ├── fn_placeFillBox.sqf   # Inventory box placement dispatcher
            ├── fn_applyButtons.sqf   # Scroll-menu Buttons dispatcher
            └── fn_getQMLoadout.sqf   # Loadout data for each QM soldier
```

## How It Works

There are three types of Zeus modules, each with its own dispatcher function:

| Type | Dispatcher | Base Class | Zeus Category |
|------|-----------|------------|---------------|
| Quartermaster | `fn_placeQM.sqf` | `RGT_Zeus_QM_Base` | RGT - Quartermasters |
| Inventory Box | `fn_placeFillBox.sqf` | `RGT_Zeus_FillBox_Base` | RGT - Ammunition |
| Scroll Buttons | `fn_applyButtons.sqf` | `RGT_Zeus_Buttons_Base` | RGT - Ammunition |

Each concrete module class in `CfgVehicles.hpp` points to an RGT function (e.g. `RGT_fnc_infQM`) via the `RGT_fnc` property. The dispatcher reads this at runtime and calls it on the target object.

---

## Adding a New Quartermaster

You need to edit **3 files**: `CfgVehicles.hpp`, `CfgPatches.hpp`, and `fn_getQMLoadout.sqf`.

### Step 1: Add the module class to CfgVehicles.hpp

Add a new class inside the `CfgVehicles { ... }` block, alongside the existing QM modules:

```cpp
class RGT_Mod_QM_MyNewQM: RGT_Zeus_QM_Base {
    scopeCurator = 2;
    displayName = "My New Quartermaster";
    RGT_fnc = "RGT_fnc_myNewQM";          // The RGT function that adds scroll-menu actions
    RGT_loadoutType = "myNew";             // Key used in fn_getQMLoadout.sqf (leave "" to skip)
};
```

**Important rules:**
- Do NOT add `scope = 2;` — it must stay at `scope = 1` (inherited from base) or Zeus won't show it
- `scopeCurator = 2;` is required for Zeus visibility
- `RGT_fnc` must match an existing function registered in the RGT mod's `CfgFunctions`
- `RGT_loadoutType` is a string key that maps to a loadout in `fn_getQMLoadout.sqf`

### Step 2: Register in CfgPatches.hpp

Add your new class name to the `units[]` array. **This is critical** — the Zeus curator discovers modules through this list:

```cpp
units[] = {
    "RGT_Mod_QM_Inf",
    "RGT_Mod_QM_Arctic",
    // ... existing entries ...
    "RGT_Mod_QM_MyNewQM"    // <-- add here
};
```

### Step 3: Add the loadout to fn_getQMLoadout.sqf

Add a new `case` to the switch block matching your `RGT_loadoutType` value:

```sqf
case "myNew": {
    [[[],[],[],["uniform_classname",[["item1",1]]],["vest_classname",[]],[],"headgear_classname","facewear_classname",[],["ItemMap","ItemGPS","radio","ItemCompass","watch","nvg"]],[]]
};
```

**Getting the loadout array:** The easiest way is to dress a unit in Eden/Arsenal, then run this in the debug console:

```sqf
copyToClipboard str (getUnitLoadout player);
```

Paste the result directly as the case return value.

**If you don't want a custom loadout:** Set `RGT_loadoutType = "";` in CfgVehicles.hpp and skip this step. The soldier will spawn as a default `B_Soldier_F`.

### Step 4: Pack and test

Pack the PBO with Addon Builder and test in-game.

---

## Adding a New Inventory Box

Edit **2 files**: `CfgVehicles.hpp` and `CfgPatches.hpp`.

### Step 1: Add the module class to CfgVehicles.hpp

```cpp
class RGT_Mod_Box_MyBox: RGT_Zeus_FillBox_Base {
    scopeCurator = 2;
    displayName = "My Custom Box";
    RGT_fnc = "RGT_fnc_MyBoxFunction";     // RGT function that fills the crate
    RGT_defaultCrate = "Box_NATO_Ammo_F";   // Crate class spawned on empty ground
};
```

**Notes:**
- `RGT_fnc` must be a function that takes a crate as parameter: `params ["_crate"];`
- `RGT_defaultCrate` is optional — defaults to `Box_NATO_AmmoVeh_F` if omitted
- The dispatcher automatically clears all cargo before calling your fill function
- Inventory boxes refuse Man targets (shows a hint and aborts)

### Step 2: Register in CfgPatches.hpp

Add the class name to `units[]`:

```cpp
"RGT_Mod_Box_MyBox"    // <-- add to units[]
```

---

## Adding a New Scroll-Menu Buttons Module

Edit **2 files**: `CfgVehicles.hpp` and `CfgPatches.hpp`.

### Step 1: Add the module class to CfgVehicles.hpp

```cpp
class RGT_Mod_Btn_MyButtons: RGT_Zeus_Buttons_Base {
    scopeCurator = 2;
    displayName = "My Buttons";
    RGT_fnc = "RGT_fnc_MyButtonsFunction";  // RGT function that adds scroll-menu actions
};
```

**Notes:**
- `RGT_fnc` must be a function that takes an object via `_this` and calls `addAction` on it
- Buttons modules require an existing target — they won't spawn anything on empty ground
- The dispatcher clears existing actions before applying new ones

### Step 2: Register in CfgPatches.hpp

Add the class name to `units[]`.

---

## Removing a Module

1. **Delete** the class from `CfgVehicles.hpp`
2. **Remove** the class name from `units[]` in `CfgPatches.hpp`
3. If it's a QM with a custom loadout, **remove** the corresponding `case` from `fn_getQMLoadout.sqf`
4. Repack the PBO

---

## Changing a Module's Display Name

Edit the `displayName` property in `CfgVehicles.hpp`:

```cpp
class RGT_Mod_QM_Inf: RGT_Zeus_QM_Base {
    scopeCurator = 2;
    displayName = "Standard Rifleman Quartermaster";  // <-- change this
    RGT_fnc = "RGT_fnc_infQM";
    RGT_loadoutType = "inf";
};
```

---

## Changing a QM Soldier's Appearance

Edit the matching `case` in `functions/fn_getQMLoadout.sqf`. The loadout format is the standard `getUnitLoadout` array.

**Quick method to get a new loadout:**
1. Open Arsenal on a unit
2. Dress them how you want
3. Run in debug console: `copyToClipboard str (getUnitLoadout player);`
4. Replace the case's return value with the clipboard contents

---

## Changing a Box's Container Type

Edit the `RGT_defaultCrate` property in `CfgVehicles.hpp`:

```cpp
class RGT_Mod_Box_Med: RGT_Zeus_FillBox_Base {
    scopeCurator = 2;
    displayName = "Medical Box";
    RGT_fnc = "RGT_fnc_MedBox";
    RGT_defaultCrate = "ACE_medicalSupplyCrate";  // <-- change this classname
};
```

Common crate classes:
- `Box_NATO_Ammo_F` — NATO ammo crate
- `Box_NATO_Wps_F` — NATO weapons crate
- `Box_NATO_Support_F` — NATO support crate
- `Box_NATO_AmmoOrd_F` — NATO ordnance crate
- `Box_NATO_Equip_F` — NATO equipment crate
- `Box_NATO_AmmoVeh_F` — large NATO vehicle ammo crate
- `ACE_medicalSupplyCrate` — ACE medical crate
- `ACE_medicalSupplyCrate_advanced` — ACE advanced medical crate
- `rhs_mags_crate` — RHS magazine crate

---

## Changing the Default Spawn Unit for QMs

Edit `RGT_defaultUnit` in a specific QM module class:

```cpp
class RGT_Mod_QM_Arctic: RGT_Zeus_QM_Base {
    scopeCurator = 2;
    displayName = "Arctic Quartermaster";
    RGT_fnc = "RGT_fnc_arcticQM";
    RGT_loadoutType = "arctic";
    RGT_defaultUnit = "B_CTRG_Soldier_3_F";  // <-- override default B_Soldier_F
};
```

Note: If `RGT_loadoutType` is set, the loadout from `fn_getQMLoadout.sqf` will be applied on top of whatever the unit spawns with, so the unit class mainly affects the base model/face.

---

## Packing the PBO

1. Open **Arma 3 Tools → Addon Builder**
2. Source: `@RGT_Quartermaster_Zeus\addons\rgt_qm_zeus`
3. Destination: `@RGT_Quartermaster_Zeus\addons`
4. **Uncheck Binarize** (keeps config readable for debugging)
5. Click **Pack**

---

## Common Mistakes

| Problem | Cause | Fix |
|---------|-------|-----|
| Module doesn't appear in Zeus | `scope = 2` on the module | Remove `scope = 2` — let it inherit `scope = 1` from base |
| Module doesn't appear in Zeus | Missing from `units[]` in CfgPatches | Add the class name to the array |
| "Script not found" error on launch | Wrong file path in CfgFunctions | Path must be `rgt_qm_zeus\functions` (the PBO folder name) |
| Loadout error "expected Bool" | Loadout array has outer wrapper `[data, []]` | Use `_loadout select 0` when passing to `setUnitLoadout` |
| Crate has default items + RGT items | Cargo not cleared before filling | The dispatcher handles this automatically for spawned crates |
| QM soldier holds a gun | Weapons not removed after loadout | The dispatcher calls `removeAllWeapons` automatically |
