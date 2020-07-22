// Config adapted from FlankenLabs. All texturing done from scratch by Eutyches. //

// For use by Dunbar Snackbar and the War is Hell gaming community. //

class CfgPatches {
	class m249_snackbar {
		units[] = {""};
		weapons[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F"};
	};
};

class CfgWeapons {
	class ItemCore;

	class rhs_weap_m249_pip_S;

class RHS_M249_Snackbar_2: rhs_weap_m249_pip_S
	{
		author = "Eutyches";
		displayName = "M249 Snackbar Edition Clean";
		picture = "\rhsusf\addons\rhsusf_inventoryicons\data\weapons\rhs_weap_m249_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"m249_snackbar\data\reciever_249_co.paa",
			"m249_snackbar\data\m249_merged1_co.paa",
			"m249_snackbar\data\barrelstock_merged_co.paa",
			"m249_snackbar\data\ammobox_merged_co.paa",
			"m249_snackbar\data\Stock_co.paa"
		};
		baseWeapon="RHS_M249_Snackbar_2"
		rhs_grip1_change="RHS_M249_Snackbar_vfg1_2";
		rhs_grip2_change="RHS_M249_Snackbar_vfg2_2";
		rhs_grip3_change="RHS_M249_Snackbar_vfg3_2";
	};
	class RHS_M249_Snackbar_vfg1_2: RHS_M249_Snackbar_2
	{
		author="Eutyches";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_grippod.rtm"
		};
	};
	class RHS_M249_Snackbar_vfg2_2: RHS_M249_Snackbar_2
	{
		author="Eutyches";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_VFG.rtm"
		};
	};
	class RHS_M249_Snackbar_vfg3_2: RHS_M249_Snackbar_2
	{
		author="Eutyches";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_grippod.rtm"
		};
	};
class RHS_M249_Snackbar_Weathered_2: rhs_weap_m249_pip_S
	{
		author = "Eutyches";
		displayName = "M249 Snackbar Edition Weathered";
		picture = "\rhsusf\addons\rhsusf_inventoryicons\data\weapons\rhs_weap_m249_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"m249_snackbar\data\reciever_249_weathered_co.paa",
			"m249_snackbar\data\m249_merged1_weathered_co.paa",
			"m249_snackbar\data\barrelstock_merged_weathered_co.paa",
			"m249_snackbar\data\ammobox_merged_weathered_co.paa",
			"m249_snackbar\data\Stock_weathered_co.paa"
		};
		baseWeapon="RHS_M249_Snackbar_Weathered_2"
		rhs_grip1_change="RHS_M249_Snackbar_Weathered_vfg1_2";
		rhs_grip2_change="RHS_M249_Snackbar_Weathered_vfg2_2";
		rhs_grip3_change="RHS_M249_Snackbar_Weathered_vfg3_2";
	};
	class RHS_M249_Snackbar_Weathered_vfg1_2: RHS_M249_Snackbar_Weathered_2
	{
		author="Eutyches";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_grippod.rtm"
		};
	};
	class RHS_M249_Snackbar_Weathered_vfg2_2: RHS_M249_Snackbar_Weathered_2
	{
		author="Eutyches";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_VFG.rtm"
		};
	};
	class RHS_M249_Snackbar_Weathered_vfg3_2: RHS_M249_Snackbar_Weathered_2
	{
		author="Eutyches";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_grippod.rtm"
		};
	};		
};
