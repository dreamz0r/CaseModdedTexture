class CfgPatches
{
	class CaseModdedTexture
	{
		units[]={};
		requiredVersion=1.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgMods
{
	class CaseModdedTexture
	{
		dir="CaseModdedTexture";
		picture="";
		action="";
		hideName=0;
		hidePicture=1;
		name="CaseModdedTexture";
		author="";
		authorID="";
		version="1.0";
		extra=0;
		type="mod";
	};
};

class CfgVehicles
{
	class Container_Base;
	class Green_Case: Container_Base
	{
		scope=2;
		displayName="Green Case";
		descriptionShort="A green case";
		model="\dz\gear\containers\Protector_Case.p3d";
		attachments[]=
		{};
		weight=1000;
		rotationFlags=17;
		itemSize[]={3,3};
		itemsCargoSize[]={3,3};
		inventorySlot[]+=
		{};
		stackedRandom=0;
		allowOwnedCargoManipulation=1;
		randomQuantity=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"CaseModdedTexture\data\green_case_co.paa",
			"CaseModdedTexture\data\green_case_co.paa",
			"CaseModdedTexture\data\green_case_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Blue_Case: Container_Base
	{
		scope=2;
		displayName="Blue Case";
		descriptionShort="A blue case";
		model="\dz\gear\containers\Protector_Case.p3d";
		attachments[]=
		{};
		weight=1000;
		rotationFlags=17;
		itemSize[]={3,3};
		itemsCargoSize[]={3,3};
		inventorySlot[]+=
		{};
		stackedRandom=0;
		allowOwnedCargoManipulation=1;
		randomQuantity=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"CaseModdedTexture\data\blue_case_co.paa",
			"CaseModdedTexture\data\blue_case_co.paa",
			"CaseModdedTexture\data\blue_case_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
};
