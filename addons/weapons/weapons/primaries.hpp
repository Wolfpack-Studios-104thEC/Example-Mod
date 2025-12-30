class GVAR(DC15A): JLTS_DC15A_plastic {
	author = AUTHOR;
	displayName = "[SOB] DC-15A";
	baseWeapon = QGVAR(DC15A);
	magazines[] = {QGVAR(Base_Mag)};

	model = "\MRC\JLTS\weapons\DC15A\DC15A.p3d";
	hiddenSelections[] = {"camo1","illum"};
	hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\DC15A\data\DC15A_co.paa"};
	hiddenSelectionsMaterials[] = {"","\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};

	class WeaponSlotsInfo: WeaponSlotsInfo {
		mass = 97;
		class CowsSlot : CowsSlot {
			displayName = "Optics Slot";
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
			iconPinpoint = "Bottom";
			iconPosition[] = {0.5,0.35};
			iconScale = 0.2;
			linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";
			scope = 0;
			compatibleItems[] = {"optic_lrps"};

			class MuzzleSlot: MuzzleSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_snds_L"};
				iconPosition[] = {0,0.45};
				iconScale = 0.2;
			};

			class PointerSlot: PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"acc_pointer_IR"};
			};

			class UnderBarrelSlot: UnderBarrelSlot {
				compatibleItems[] = {"bipod_O1_F_blk"};
			};
		};
	};
};