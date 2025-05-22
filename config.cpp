class CfgPatches
{
	class sw_bestpda
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"BestPDA_CUSTOM"};
	};
};

class CfgMods 
{
	class BestPDA_CUSTOM
	{
        class defs
	    {
            class gameScriptModule
			{
				value = "";
				files[]={"SW/sw_bestpda/Definitions", "BestPDA_CUSTOM/scripts/3_Game"};
			};

			class worldScriptModule
			{
				value="";
				files[]={"SW/sw_bestpda/Definitions", "BestPDA_CUSTOM/scripts/4_World"};
			};

			class missionScriptModule
			{
				value="";
				files[]={"SW/sw_bestpda/Definitions", "BestPDA_CUSTOM/scripts/5_Mission"};
			};
			class imageSets
			{
				files[]= {"SW/sw_bestpda/GUI/ImageSets/PDA.imageset"};
			};
        };
    };
};

#include "CfgVehicles.hpp"
#include "CfgSlots.hpp"