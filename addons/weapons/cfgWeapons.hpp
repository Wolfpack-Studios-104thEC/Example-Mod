class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;

class CfgWeapons
{
	class JLTS_DC15A;
	class JLTS_DC15A_plastic : JLTS_DC15A {
		class WeaponSlotsInfo;
	};

	class 3AS_DC15L_Base_F;
	class 3AS_DC15L_F: 3AS_DC15L_Base_F {
		class WeaponSlotsInfo;
		class FullAuto;
	};

	class 3AS_Valken38X_Base_F;
	class 3AS_Valken38X_F: 3AS_Valken38X_Base_F {
		class WeaponSlotsInfo;
	};
	#include "weapons\primaries.hpp"
};