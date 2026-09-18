class CfgMods
{
	class DonutsAnimals
	{
		dir="DonutsObjects";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="DonutsObjects";
		credits="";
		author="JhowPix";
		authorID="76561199247898368";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"DonutsAnimals/Scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"DonutsAnimals/Scripts/4_World"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"DonutsAnimals/Scripts/5_Mission"
				};
			};
		};
	};
};
class CfgPatches
{
	class DonutsObjects
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Scripts",
			"DZ_Characters",
			"DZ_Animals"
		};
	};
};
class cfgVehicles
{
	class EasterEgg;
	class Donuts_Egg: EasterEgg
	{
		scope=2;
		displayName="Donuts Egg";
		descriptionShort="Egg chick";
		model = "\dz\gear\consumables\EasterEgg.p3d";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]=
		{
			"DonutsAnimals\data\Donuts_Egg_co.paa",
			"DonutsAnimals\data\Donuts_Egg_co.paa",
			"DonutsAnimals\data\Donuts_Egg_co.paa"
		};
	};
	class Donuts_EggII: EasterEgg
	{
		scope=2;
		displayName="Donuts Bonus";
		descriptionShort="Egg bonus";
		model = "\dz\gear\consumables\EasterEgg.p3d";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]=
		{
			"DonutsAnimals\data\Donuts_Egg_Bonus_co.paa",
			"DonutsAnimals\data\Donuts_Egg_Bonus_co.paa",
			"DonutsAnimals\data\Donuts_Egg_Bonus_co.paa"
		};
	};
	class Donuts_EggIII: EasterEgg
	{
		scope=2;
		displayName="Donuts Egg Angola";
		descriptionShort="Egg Anggola";
		model = "\dz\gear\consumables\EasterEgg.p3d";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]=
		{
			"DonutsAnimals\data\Donuts_Egg_Angola_co.paa",
			"DonutsAnimals\data\Donuts_Egg_Angola_co.paa",
			"DonutsAnimals\data\Donuts_Egg_Angola_co.paa"
		};
	};
	

	
	class AnimalBase;
	class Pelt_Base;
	class Animal_CanisLupus;
	class Animal_GallusGallusDomesticus;
	class Animal_BosTaurusF;
	class Animal_VulpesVulpes;
	class Animal_UrsusArctos;
	class Donuts_Ursus: Animal_UrsusArctos
	{
		scope=2;
		displayName="Donuts Ursus";
		hiddenSelections[]=
		{
			"body_injury",
			"flags"
		};
		hiddenSelectionsTextures[]=
		{
			"DonutsAnimals\data\Donuts_Ursus_ca.paa",
			"DonutsAnimals\data\Donuts_UrsusFur_ca.paa"
		};
	};
	class Donuts_UrsusII: Animal_UrsusArctos
	{
		scope=2;
		displayName="Donuts Ursus";
		hiddenSelections[]=
		{
			"body_injury",
			"flags"
		};
		hiddenSelectionsTextures[]=
		{
			"DonutsAnimals\data\Donuts_UrsusII_ca.paa",
			"DonutsAnimals\data\Donuts_UrsusFur_ca.paa"
		};
	};
	class Donuts_UrsusIII: Animal_UrsusArctos
	{
		scope=2;
		displayName="Donuts Ursus";
		hiddenSelections[]=
		{
			"body_injury",
			"flags"
		};
		hiddenSelectionsTextures[]=
		{
			"DonutsAnimals\data\Donuts_UrsusIII_ca.paa",
			"DonutsAnimals\data\Donuts_UrsusFur_ca.paa"
		};
	};
	class Donuts_CowZibra: Animal_BosTaurusF
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DonutsAnimals\data\Donuts_CowZibra_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\animals\bos_taurus_fem\data\cow_white.rvmat"
		};
		
	};
	class Donuts_Cow_No_Milk: Animal_BosTaurusF
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DonutsAnimals\data\Donuts_Cow_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\animals\bos_taurus_fem\data\cow_white.rvmat"
		};
	};
	class Epinephrine;
	class Donuts_InjectionHorse: Epinephrine
	{
		scope = 2;
		displayName = "Donuts Injection Horse";
		descriptionShort = "Invigorates Everything";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"DonutsAnimals\data\Donuts_InjectionHorse_co.paa"};
	};
	class Donuts_CowHit: Animal_BosTaurusF
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DonutsAnimals\data\Donuts_CowHit_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\animals\bos_taurus_fem\data\cow_white.rvmat"
		};
		class Skinning
		{
			class ObtainedSteaks
			{
				item="Donuts_InjectionHorse";
				count=2;
				itemZones[]=
				{
					"Zone_Chest",
					"Zone_Belly",
					"Zone_Pelvis"
				};
				countByZone[]={4,4,6};
				quantityMinMaxCoef[]={0.75,1};
			};
		};
	};
	class Donuts_CowII: Animal_BosTaurusF
	{
		scope=2;
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"DonutsAnimals\data\Donuts_CowII_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\animals\bos_taurus_fem\data\cow_white.rvmat"
		};
		class Skinning
		{
			class ObtainedSteaks
			{
				item="Donuts_GallusI";
				count=2;
				itemZones[]=
				{
					"Zone_Chest",
					"Zone_Belly",
					"Zone_Pelvis"
				};
				countByZone[]={2,2};
				quantityMinMaxCoef[]={0.75,1};
			};
		};
	};
	class Animal_GallusGallusDomesticusF_White;
	class Donuts_GallusI: Animal_GallusGallusDomesticusF_White
	{
		scope=2;
		displayName="Donuts Gallus";
		hiddenSelectionsTextures[]=
		{
			"DonutsAnimals\data\Donuts_GallusI_ca.paa"
		};
	};
	class Animal_GallusGallusDomesticusF_Spotted;
	class Donuts_GallusII: Animal_GallusGallusDomesticusF_Spotted
	{
		scope=2;
		displayName="Donuts Gallus";
		hiddenSelectionsTextures[]=
		{
			"DonutsAnimals\data\Donuts_GallusII_ca.paa"
		};
	};
	class Donuts_Chick: Animal_GallusGallusDomesticusF_White
	{
		scope=2;
		displayName="Donuts Chick";
		scale=0.5;
		hiddenSelectionsTextures[]=
		{
			"DonutsAnimals\data\Donuts_Chick_co.paa"
		};
	};
	class Animal_SusScrofa;
	class Donuts_BoarII: Animal_SusScrofa
	{
		hiddenSelections[]=
		{
			"camo",
			"fur"
		};
		hiddenSelectionsTextures[]=
		{
			"DonutsAnimals\data\Donuts_BoarII_ca.paa",
			"DonutsAnimals\data\Donuts_Boar_ca.paa"
		};
	};
	class Donuts_BoarIII: Animal_SusScrofa
	{
		hiddenSelections[]=
		{
			"camo",
			"fur"
		};
		hiddenSelectionsTextures[]=
		{
			"DonutsAnimals\data\Donuts_BoarIII_ca.paa",
			"DonutsAnimals\data\Donuts_Boar_ca.paa"
		};
	};
};
class CfgSoundShaders
{
	class Donuts_Egg_SoundShader
	{
		samples[]=
		{
			
			{
				"DonutsAnimals\Sounds\egg.ogg",
				1
			}
		};
		volume=1;
		range=10;
	};
	class Donuts_Chick_SoundShader
	{
		samples[]=
		{
			
			{
				"DonutsAnimals\Sounds\chick.ogg",
				1
			}
		};
		volume=1;
		range=20;
	};
	class Donuts_ChickII_SoundShader
	{
		samples[]=
		{
			
			{
				"DonutsAnimals\Sounds\chickII.ogg",
				1
			}
		};
		volume=1;
		range=20;
	};
	class Donuts_Horse_SoundShader
	{
		samples[] = {{"DonutsAnimals\Sounds\Donuts_Horse.ogg",1}};
		volume = 1;
		range = 20;
	};
};
class CfgSoundSets
{
	class Donuts_Egg_SoundSet
	{
		soundShaders[]=
		{
			"Donuts_Egg_SoundShader"
		};
		volumeFactor=0.6;
		spatial=0;
		loop=0;
	};
	class Donuts_Chick_SoundSet
	{
		soundShaders[]=
		{
			"Donuts_Chick_SoundShader"
		};
		volumeFactor=0.6;
		spatial=0;
		loop=0;
	};
	class Donuts_ChickII_SoundSet
	{
		soundShaders[]=
		{
			"Donuts_ChickII_SoundShader"
		};
		volumeFactor=0.6;
		spatial=0;
		loop=0;
	};
	class Donuts_Horse_SoundSet
	{
		soundShaders[] = {"Donuts_Horse_SoundShader"};
		volumeFactor = 0.6;
		spatial = 0;
		loop = 0;
	};
};
