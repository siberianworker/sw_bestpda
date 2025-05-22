class CfgVehicles
{
    class Man;
    class Inventory_Base;

    class SurvivorBase: Man
	{
		attachments[] += {"PDA"};
		class InventoryEquipment
		{
			playerSlots[] += {"Slot_PDA"};
		};
	};

    class BestPDA_Base: Inventory_Base
    {
        inventorySlot = "PDA";
    };
};