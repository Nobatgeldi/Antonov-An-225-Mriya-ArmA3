#include "BIS_AddonInfo.hpp"
// Antonov 124 "Ruslan" v2.1 by Konyak  Resistance Version
//Rework and Upgrade By VIT

// some basic defines
#define TEast 0
#define TWest 1
#define TGuerrila 2
#define TCivilian 3
#define TSideUnknown 4
#define TEnemy 5
#define TFriendly 6
#define TLogic 7

#define true 1
#define false 0

// type scope
#define private 0
#define protected 1
#define public 2

class CfgPatches
{
	class Antonov225
	{
		units[] =
		{
			"Antonov225"
		};
		weapons[] = {};
		requiredAddons[] = {"wop_gui"};
	};
};

class CfgSounds
{
	class An225_nose
 	{
		sound[]={"\an225\fx\An225_nose.WAV",10,1};
		name = "An225_nose";
		titles[] = {};
 	};

	class An225_gear
 	{
		sound[]={"\an225\fx\An225_gear.WAV",10,1};
		name = "An225_gear";
		titles[] = {};
 	};

    class An225_land
 	{
		sound[]={"\an225\fx\An225_land.wav",10,1};
		name = "An225_land";
		titles[] = {};
 	};

	class An225_lrun
 	{
		sound[]={"\an225\fx\An225_lrun.wav",10,1};
		name = "An225_lrun";
		titles[] = {};
 	};

	class an225fire
 	{
		sound[]={"\an225\fx\an225fire.ogg",10,1};
		name = "an225fire";
		titles[] = {};
 	};

	class an225wheelnsnd
 	{
		sound[]={"\an225\fx\an225wheelnsnd.wav",10,1};
		name = "an225missile";
		titles[] = {};
 	};

    class an225rampa1
 	{
		sound[]={"\an225\fx\an225rampa1.wav",10,1};
		name = "an225rampa1";
		titles[] = {};
 	};

	class an225rampa2
 	{
		sound[]={"\an225\fx\an225rampa2.wav",10,1};
		name = "an225rampa2";
		titles[] = {};
 	};

    class an225Flaps
 	{
		sound[]={"\an225\fx\an225Flaps.wav",10,1};
		name = "an225Flaps";
		titles[] = {};
 	};

	class an225Flare
 	{
		sound[]={"\an225\fx\an225Flare.wav",10,1};
		name = "an225Flare";
		titles[] = {};
 	};

    class an225Gear
 	{
		sound[]={"\an225\fx\an225Gear.wav",10,1};
		name = "an225Gear";
		titles[] = {};
 	};

	class an225GearEnd
 	{
		sound[]={"\an225\fx\an225GearEnd.wav",10,1};
		name = "an225GearEnd";
		titles[] = {};
 	};

    class an225Impact1
 	{
		sound[]={"\an225\fx\an225Impact1.wav",10,1};
		name = "an225Impact1";
		titles[] = {};
 	};

	class an225Impact2
 	{
		sound[]={"\an225\fx\an225Impact2.wav",10,1};
		name = "an225Impact2";
		titles[] = {};
 	};

	class an225Impact3
 	{
		sound[]={"\an225\fx\an225Impact3.wav",10,1};
		name = "an225Impact3";
		titles[] = {};
 	};

	class an225Impact4
 	{
		sound[]={"\an225\fx\an225Impact4.wav",10,1};
		name = "an225Impact4";
		titles[] = {};
 	};

	class an225Impact5
 	{
		sound[]={"\an225\fx\an225Impact5.wav",10,1};
		name = "an225Impact5";
		titles[] = {};
 	};

	class an225Impact6
 	{
		sound[]={"\an225\fx\an225Impact6.wav",10,1};
		name = "an225Impact6";
		titles[] = {};
 	};

	class an225Impact7
 	{
		sound[]={"\an225\fx\an225Impact7.wav",10,1};
		name = "an225Impact7";
		titles[] = {};
 	};

	class an225Impact8
 	{
		sound[]={"\an225\fx\an225Impact8.wav",10,1};
		name = "an225Impact8";
		titles[] = {};
 	};

	class an225Impact9
 	{
		sound[]={"\an225\fx\an225Impact9.wav",10,1};
		name = "an225Impact9";
		titles[] = {};
 	};

	class an225Impact10
 	{
		sound[]={"\an225\fx\an225Impact10.wav",10,1};
		name = "an225Impact10";
		titles[] = {};
 	};

	class an225Impact11
 	{
		sound[]={"\an225\fx\an225Impact11.wav",10,1};
		name = "an225Impact11";
		titles[] = {};
 	};

	class an225Impact12
 	{
		sound[]={"\an225\fx\an225Impact12.wav",10,1};
		name = "an225Impact12";
		titles[] = {};
 	};

	class an225Impact13
 	{
		sound[]={"\an225\fx\an225Impact13.wav",10,1};
		name = "an225Impact13";
		titles[] = {};
 	};
};

class CfgRadio
{
    class an225missile
	{
		name = "an225missile";
		sound[] = {\an225\fx\an225missile.wav, db-60, 1.0};
		title = ;
	};
    class an225PullUp
	{
		name = "an225PullUp";
		sound[] = {\an225\fx\an225PullUp.wav, db-60, 1.0};
		title = ;
	};
    class an225Warning
	{
		name = "an225Warning";
		sound[] = {\an225\fx\an225Warning.ogg, db-60, 1.0};
		title = ;
	};

    class an225LockWarning
	{
		name = "an225LockWarning";
		sound[] = {\an225\fx\an225LockWarning.ogg, db-60, 1.0};
		title = ;
	};

    class an225BingoFuel
	{
		name = "an225BingoFuel";
		sound[] = {\an225\fx\an225BingoFuel.wav, db-60, 1.0};
		title = ;
	};

    class an225SystemsFailure
	{
		name = "an225SystemsFailure.wav";
		sound[] = {\an225\fx\an225SystemsFailure.wav, db-60, 1.0};
		title = ;
	};
};
/*
class CfgFactionClasses {
	class CIV_SU {
		displayName = "$STR_SU";
		priority = 8;
		side = TCivilian;
	};
	class CIV_UA {
		displayName = "$STR_UA";
		priority = 8;
		side = TCivilian;
	};
	class CIV_TW {
		displayName = "$STR_TW";
		priority = 8;
		side = TCivilian;
	};
};

class CfgVehicleClasses {
	class wings_of_union {
		displayName = "$STR_WU_NAME";
	};
};
*/
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		pilot="pilot";
		commander="commander";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class pilot_dead: DefaultDie
		{
			actions="DeadActions";
			speed=0.5;
			looped="false";
			terminal=1;
			file="\an225\anim\kia.rtm";
			connectTo[]=
			{
				"DeadState",
				0.1
			};
		};
		class pilot: Crew
		{
			file="\an225\anim\pilot.rtm";
			interpolateTo[]=
			{
				"pilot_dead",
				1
			};
		};
		class commander: Crew
		{
			file="\an225\anim\commander.rtm";
			interpolateTo[]=
			{
				"pilot_dead",
				1
			};
		};
	};
};
class CfgVehicles
{
	class All {};
	class AllVehicles: All {};
	class Air: AllVehicles {};
	class Plane: Air
	{
		class NewTurret;
		class ViewPilot;
	};
	class Antonov225: Plane
	{
		scope=public;
		brakeDistance=400;
		faction="OPF_F";
		mapSize = 100;
		crew = "Sukhoi_Pilot";
		picture="\an225\an225spl";
		icon="\an225\icon.paa";
		wheelSteeringSensitivity = 12.5;
		side=0;
		displayName="Antonov AN-225";
		accuracy=0.20;
		irTarget=1;
		irScanRange=3000;
		irScanGround=0;
    maxSpeed = 865;
		soundengine[]={"\an225\Fx\an225eng.wav",db+20,1};
		soundLandCrash[]={"\an225\Fx\An225_tire.wav",db+1,1};
		soundEnviron[]={Objects\noise,db-60,1.0};
		weapons[]={};
		magazines[]={};
		armor=250;
		cost=2000000;
		transportSoldier=0;
		//model="\an225\Antonov";
		model="\an225\An_225.p3d";
		fov=0.7;
		aileronSensitivity = 0.6;
		elevatorSensitivity = 6; // relative elevator sensitivity
		noseDownCoef = 0.8; // how much goes nose down during turns
		landingAoa = 8*3.1415/180;
		ejectSpeed[]={0,0,0};
		extCameraPosition[]={0,9,-75};
		type=VAir;
		//threat[] VSoft, VArmor, VAir
		threat[]={0.8, 0.8, 1.0};
    animated=1;
    hiddenSelections[]={"num"};
    transportFuel = 100000;
		transportVehiclesCount = 3;
		transportVehiclesMass = 45000;
    getInRadius=1.5;
    vehicleClass = "Air";
		simulation="airplane";
		_generalMacro="Plane";
		driverAction = "commander";
		gunnerAction = "gunner";
		cargoAction[] =
		{
			"MH6_Cargo01", "MH6_Cargo02","MH6_Cargo01", "MH6_Cargo02"
		};
		insideSoundCoef=0.15000;
		hascommander=0;
		hasGunner=1;
		gearRetracting = true;
		class Library {
			libTextDesc = "$STR_MRIYA_DESCR";
		};
		class ViewPilot : ViewPilot
		{
			initFov = 0.8; minFov = 0.3; maxFov = 1.2;
			initAngleX = 0; minAngleX = -40; maxAngleX = +100;
			initAngleY = 0; minAngleY = -180; maxAngleY = 180;
		};
		class Turrets {
			class MainTurret : NewTurret {
				body = "";
				gun = "";
				commanding = -1;
				proxyIndex = 1;
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				weapons[]={};
				magazines[]={};
				castGunnerShadow = true;
				viewGunnerShadow = true;
				gunnerAction = "gunner";
				gunnerInAction = "gunner";
				primaryGunner = 1;
			};

			class Ing1 : MainTurret {
				body = "";
				gun = "";
				commanding = -1;
				proxyIndex = 2;
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				weapons[]={};
				magazines[]={};
				castGunnerShadow = true;
				viewGunnerShadow = true;
				gunnerAction = "gunner";
				gunnerInAction = "gunner";
				primaryGunner = 0;
			};
			class Ing2 : MainTurret {
				body = "";
				gun = "";
				commanding = -1;
				proxyIndex = 3;
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				weapons[]={};
				magazines[]={};
				castGunnerShadow = true;
				viewGunnerShadow = true;
				gunnerAction = "gunner";
				gunnerInAction = "gunner";
				primaryGunner = 0;
			};
			class Ing3 : MainTurret {
				body = "";
				gun = "";
				commanding = -1;
				proxyIndex = 4;
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				weapons[]={};
				magazines[]={};
				castGunnerShadow = true;
				viewGunnerShadow = true;
				gunnerAction = "gunner";
				gunnerInAction = "gunner";
				primaryGunner = 0;
			};
			class Ing4 : MainTurret {
				body = "";
				gun = "";
				commanding = -1;
				proxyIndex = 5;
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				weapons[]={};
				magazines[]={};
				castGunnerShadow = true;
				viewGunnerShadow = true;
				gunnerAction = "gunner";
				gunnerInAction = "gunner";
				primaryGunner = 0;
			};
		};
		class EventHandlers
		{
		 init = "_this execVM ""\an225\scr\Vapour.sqf"";_this execVM ""\an225\scr\gear_trigger.sqf"";";
		 engine = "_this exec ""\an225\scr\dverclose.sqs""";
		 //gear="if !(_this select 1) then {_this execVM ""\an225\scr\gear_up.sqf""} else {_this execVM ""\an225\scr\gear_down.sqf""}";
		 /*gear = "if ((_this Select 1)==0) {[_this select 0] exec ""\an225\scr\gear_up.sqs"";};";
         engine ="if (_this select 1) then {[_this select 0] exec ""\an225\Sqs\an225engineStart.sqs""} else {[_this select 0] exec ""\an225\Sqs\an225engineStop.sqs""}";
         killed = "_this exec ""\an225\sqs\an225fire.sqs""";
         hit ="[_this select 0] exec ""\an225\sqs\an225hit.sqs""";
         IncomingMissile = "[_this select 0] exec ""\an225\sqs\an225missile.sqs""";*/
		};
		class AnimationSources {
			class gear_trigger
			{
				source = "gear";
				initPhase = 0;
				animPeriod =0.1;
			};
			class ladder
			{
				source = "user";
				initPhase = 0;
				animPeriod =8;
			};
			class ladder_k
			{
				source = "user";
				initPhase = 0;
				animPeriod =8;
			};
			class ladder_2
			{
				source = "user";
				initPhase = 0;
				animPeriod =8;
			};
			class ladder_k_2
			{
				source = "user";
				initPhase = 0;
				animPeriod =8;
			};
			class FGear
			{
				source = "user";
				initPhase = 0;
				animPeriod =45;
			};
			class FGearTrans
			{
				source = "user";
				initPhase = 0;
				animPeriod =45;
			};
			class Nose
			{
				source = "user";
				initPhase = 0;
				animPeriod =30;
			};
			class BGear1
			{
				source = "user";
				initPhase = 0;
				animPeriod =45;
			};
			class BGear2
			{
				source = "user";
				initPhase = 0;
				animPeriod =45;
			};
			class Corp
			{
				source = "user";
				initPhase = 0;
				animPeriod =45;
			};
			class Skat
			{
				source = "user";
				initPhase = 0;
				animPeriod =30;
			};
			class Skat_ph
			{
				source = "user";
				initPhase = 0;
				animPeriod =30;
			};
			class Skat_konec
			{
				source = "user";
				initPhase = 0;
				animPeriod =30;
			};

			class konec2
			{
				source = "user";
				initPhase = 0;
				animPeriod =30;
			};
			class konec3
			{
				source = "user";
				initPhase = 0;
				animPeriod =15;
			};
			class Stoika1
			{
				source = "user";
				initPhase = 0;
				animPeriod =25;
			};
			class Stoika2
			{
				source = "user";
				initPhase = 0;
				animPeriod =25;
			};
			class Stoika3
			{
				source = "user";
				initPhase = 0;
				animPeriod =45;
			};

			class lisection1
			{
				source = "user";
				initPhase = 0;
				animPeriod =5.2;
			};
			class lisection2
			{
				source = "user";
				initPhase = 0;
				animPeriod =4.4;
			};
			class lisection3
			{
				source = "user";
				initPhase = 0;
				animPeriod =3.8;
			};
			class lisection4
			{
				source = "user";
				initPhase = 0;
				animPeriod =3.2;
			};
			class lisection5
			{
				source = "user";
				initPhase = 0;
				animPeriod =4.5;
			};
			class lisection6
			{
				source = "user";
				initPhase = 0;
				animPeriod =4.1;
			};
			class lisection7
			{
				source = "user";
				initPhase = 0;
				animPeriod =5.0;
			};

			class risection1
			{
				source = "user";
				initPhase = 0;
				animPeriod =5;
			};
			class risection2
			{
				source = "user";
				initPhase = 0;
				animPeriod =4.5;
			};
			class risection3
			{
				source = "user";
				initPhase = 0;
				animPeriod =3.3;
			};
			class risection4
			{
				source = "user";
				initPhase = 0;
				animPeriod =3.1;
			};
			class risection5
			{
				source = "user";
				initPhase = 0;
				animPeriod =4.2;
			};
			class risection6
			{
				source = "user";
				initPhase = 0;
				animPeriod =4.7;
			};
			class risection7
			{
				source = "user";
				initPhase = 0;
				animPeriod =5.1;
			};


			class losection1
			{
				source = "user";
				initPhase = 0;
				animPeriod =11.9;
			};
			class losection2
			{
				source = "user";
				initPhase = 0;
				animPeriod =10.5;
			};
			class losection3
			{
				source = "user";
				initPhase = 0;
				animPeriod =10.2;
			};
			class losection4
			{
				source = "user";
				initPhase = 0;
				animPeriod =9.5;
			};
			class losection5
			{
				source = "user";
				initPhase = 0;
				animPeriod =9.0;
			};
			class losection6
			{
				source = "user";
				initPhase = 0;
				animPeriod =10.5;
			};
			class losection7
			{
				source = "user";
				initPhase = 0;
				animPeriod =11.8;
			};

			class rosection1
			{
				source = "user";
				initPhase = 0;
				animPeriod =12;
			};
			class rosection2
			{
				source = "user";
				initPhase = 0;
				animPeriod =10.3;
			};
			class rosection3
			{
				source = "user";
				initPhase = 0;
				animPeriod =9.5;
			};
			class rosection4
			{
				source = "user";
				initPhase = 0;
				animPeriod =9.0;
			};
			class rosection5
			{
				source = "user";
				initPhase = 0;
				animPeriod =8.5;
			};
			class rosection6
			{
				source = "user";
				initPhase = 0;
				animPeriod =9.7;
			};
			class rosection7
			{
				source = "user";
				initPhase = 0;
				animPeriod =12.5;
			};


			class gearF {
				source = "user";
				initPhase = 0;
				animPeriod = 14;
			};

			class gl1
			{
				source = "user";
				initPhase = 0;
				animPeriod =12.5;
			};
			class gl2
			{
				source = "user";
				initPhase = 0;
				animPeriod =11.3;
			};
			class gl3
			{
				source = "user";
				initPhase = 0;
				animPeriod =11.0;
			};
			class gl4
			{
				source = "user";
				initPhase = 0;
				animPeriod =10.5;
			};
			class gl5
			{
				source = "user";
				initPhase = 0;
				animPeriod =9.5;
			};
			class gl6
			{
				source = "user";
				initPhase = 0;
				animPeriod =11.0;
			};
			class gl7
			{
				source = "user";
				initPhase = 0;
				animPeriod =12.0;
			};

			class gr1
			{
				source = "user";
				initPhase = 0;
				animPeriod =12.1;
			};
			class gr2
			{
				source = "user";
				initPhase = 0;
				animPeriod =11.4;
			};
			class gr3
			{
				source = "user";
				initPhase = 0;
				animPeriod =10.3;
			};
			class gr4
			{
				source = "user";
				initPhase = 0;
				animPeriod =10.5;
			};
			class gr5
			{
				source = "user";
				initPhase = 0;
				animPeriod = 9.0;
			};
			class gr6
			{
				source = "user";
				initPhase = 0;
				animPeriod = 9.7;
			};
			class gr7
			{
				source = "user";
				initPhase = 0;
				animPeriod =11.8;
			};



			class kl1
			{
				source = "user";
				initPhase = 0;
				animPeriod =12;
			};
			class kl2
			{
				source = "user";
				initPhase = 0;
				animPeriod =11.2;
			};
			class kl3
			{
				source = "user";
				initPhase = 0;
				animPeriod =10.4;
			};
			class kl4
			{
				source = "user";
				initPhase = 0;
				animPeriod =9.8;
			};
			class kl5
			{
				source = "user";
				initPhase = 0;
				animPeriod =10.4;
			};
			class kl6
			{
				source = "user";
				initPhase = 0;
				animPeriod =9.0;
			};
			class kl7
			{
				source = "user";
				initPhase = 0;
				animPeriod =11.7;
			};

			class kr1
			{
				source = "user";
				initPhase = 0;
				animPeriod =12.5;
			};
			class kr2
			{
				source = "user";
				initPhase = 0;
				animPeriod =11.3;
			};
			class kr3
			{
				source = "user";
				initPhase = 0;
				animPeriod =11.1;
			};
			class kr4
			{
				source = "user";
				initPhase = 0;
				animPeriod =9.8;
			};
			class kr5
			{
				source = "user";
				initPhase = 0;
				animPeriod =9.3;
			};
			class kr6
			{
				source = "user";
				initPhase = 0;
				animPeriod =11.7;
			};
			class kr7
			{
				source = "user";
				initPhase = 0;
				animPeriod =12.5;
			};


			class kl12
			{
				source = "user";
				initPhase = 0;
				animPeriod =12;
			};
			class kl22
			{
				source = "user";
				initPhase = 0;
				animPeriod =11.2;
			};
			class kl32
			{
				source = "user";
				initPhase = 0;
				animPeriod =10.4;
			};
			class kl42
			{
				source = "user";
				initPhase = 0;
				animPeriod =9.8;
			};
			class kl52
			{
				source = "user";
				initPhase = 0;
				animPeriod =10.4;
			};
			class kl62
			{
				source = "user";
				initPhase = 0;
				animPeriod =9.0;
			};
			class kl72
			{
				source = "user";
				initPhase = 0;
				animPeriod =11.7;
			};

			class kr12
			{
				source = "user";
				initPhase = 0;
				animPeriod =12.5;
			};
			class kr22
			{
				source = "user";
				initPhase = 0;
				animPeriod =11.3;
			};
			class kr32
			{
				source = "user";
				initPhase = 0;
				animPeriod =11.1;
			};
			class kr42
			{
				source = "user";
				initPhase = 0;
				animPeriod =9.8;
			};
			class kr52
			{
				source = "user";
				initPhase = 0;
				animPeriod =9.3;
			};
			class kr62
			{
				source = "user";
				initPhase = 0;
				animPeriod =11.7;
			};
			class kr72
			{
				source = "user";
				initPhase = 0;
				animPeriod =12.5;
			};

			class gdoorF1 {
				source = "user";
				initPhase = 0;
				animPeriod = 2;
			};
			class gdoorF2 {
				source = "user";
				initPhase = 0;
				animPeriod = 2;
			};
			class gdoorF3 {
				source="user";
				initPhase = 0;
				animPeriod = 2;
			};
			class gdoorF4 {
				source="user";
				initPhase = 0;
				animPeriod = 2;
			};
		};
		class UserActions
		{
			class OpenNose
			{
				onlyforplayer = false;
				displayname = "$STR_an225_ON";
				position="pos nose open";
				radius=100;
				showWindow = 0;
				condition="this animationPhase ""Corp"" < 0.01 and !isengineon this and this animationPhase ""ladder"" < 0.01 and this animationPhase ""ladder_2"" < 0.01";
				statement="[this] execVM ""\an225\scr\open_nose.sqf""";
			};
			class CloseNose
			{
				onlyforplayer = false;
				displayname = "$STR_an225_CN";
				position="pos nose open";
				radius=100;
				showWindow = 0;
				condition="this animationPhase ""Corp"" >= 0.99 and !isengineon this and this animationPhase ""ladder"" < 0.01 and this animationPhase ""ladder_2"" < 0.01";
				statement="[this] execVM ""\an225\scr\close_nose.sqf""";
			};
			class OpenDoor
			{
				onlyforplayer = false;
				displayname = "$STR_AN225_OD";
				position="pos nose open";
				radius=100;
				showWindow = 0;
				condition="(this animationPhase ""ladder"" < 0.01 and this animationPhase ""corp""==0 or this animationPhase ""ladder_2"" < 0.01 and this animationPhase ""corp""==1) and !isengineon this";
				statement="[this] execVM ""\an225\scr\open_door.sqf""";
			};
			class CloseDoor
			{
				onlyforplayer = false;
				displayname = "$STR_AN225_CD";
				position="pos nose open";
				radius=100;
				showWindow = 0;
				condition="this animationPhase ""ladder"" >= 0.99 and this animationPhase ""corp""==0 or this animationPhase ""ladder_2"" >= 0.99 and this animationPhase ""corp""==1";
				statement="[this] execVM ""\an225\scr\close_door.sqf""";
			};
			/*class GearDown
			{
				displayName="$STR_AN225_GD";
				position="pos nose open";
				onlyForPlayer = false;
				radius=100;
				showWindow = 0;
				condition="this animationPhase ""gearF"" >= 0.99 and player in this;";
				statement="[this] execVM ""\an225\scr\gear_down.sqf"""
			};

			class GearUp
			{
				displayName="$STR_AN225_GU";
				position="pos nose open";
				onlyForPlayer = false;
				radius=100;
				showWindow = 0;
				condition="this animationPhase ""gearF"" < 0.01 and player in this and ((GetPos (this)) Select 2) > 10;";
				statement="[this] execVM ""\an225\scr\gear_up.sqf"""
			};*/
			/*
            class parasoldiers
			{
				onlyforplayer = false;
				displayName="$STR_an225_PS";
				position="pos nose open";
				radius=100;
				condition = "(player in this) and (count crew (vehicle this) > 2) and (getpos this select 2 > 100)";
				statement="[this, player] execVM ""\an225\sqs\paragroup.sqf""";
			};

			class paracargo
			{
				onlyforplayer = false;
				displayName = "$STR_an225_PC";
				position="pos nose open";
				radius=100;
				condition = "getpos this select 2 > 7 and (this animationPhase ""cargoload"" > 0)";
				statement="[this] exec ""\an225\sqs\an225paracargo.sqs"",this animate [""relase"",1]";
			};*/
			class loadcargo
			{
				onlyforplayer = false;
				displayName = "$STR_an225_LC";
				position="axiscargo";
				radius=30;
				condition = "((vehicle player != this) and (vehicle player != player) and (speed vehicle this < 5) and (this animationPhase ""Nose"" < 0.01))";
				statement = "[this, vehicle player, player] execVM ""\an225\scr\attach.sqf""";
			};

			class unloadcargo
			{
				onlyforplayer = false;
				displayName = "$STR_an225_UC";
				position="axiscargo";
				radius=30;
				condition = "(vehicle player != this) and (vehicle player != player)";
				statement = "[this, vehicle player, player] execVM ""\an225\scr\detach.sqf""";
			};

			class unloadcargoall
			{
				onlyforplayer = false;
				showWindow = 0;
				displayName = "$STR_an225_UCA";
				position="axiscargo";
				radius=100;
				//condition = "(player in this) and ((count (position this nearEntities 30)) > 1)";
				condition = "(player in this) and ((count (position this nearEntities 30)) > 1)";
				statement = "[this, vehicle player, player] execVM ""\an225\scr\detachall.sqf""";
			};
			/*
            class Brake
	        {
				displayName="$STR_an225_B";
				onlyforplayer = false;
				position="pos nose open";
				radius=100;
				condition = "this animationPhase ""NoseGear"" < 0.5 and player in this && (getpos this select 2)<1 and isengineon this"
				statement = "[this] exec ""\an225\sqs\an225brake.sqs""";
			};

            class paraSuport
			{
				displayName = "$STR_an225_PARA";
				position="pos nose open";
				onlyforplayer = false;
				radius=100;
				condition="! (isengineon this) && player distance this <5 && this animationphase ""cargoswitch"" ==0 && this animationphase ""cargoswitch2"" ==0";
				statement = "[this,player] exec ""\an225\Cargo\an225groupbail.sqs"";player groupchat ""Plane being Drop suport by parachute!""";
			};*/

		};
		class MarkerLights {
			class RedStill {
				color[] = {0.2, 0.02, 0.02, 1};
				ambient[] = {0.3, 0.03, 0.03, 1};
				name = "cerveny pozicni";
				brightness = 0.01;
				blinking = false;
			};

			class GreenStill {
				color[] = {0.02, 0.2, 0.15, 1};
				ambient[] = {0.03, 0.3, 0.03, 1};
				name = "zeleny pozicni";
				brightness = 0.01;
				blinking = false;
			};
			class WhiteStill {
				color[] = {0.2, 0.2, 0.2, 1};
				ambient[] = {0.3, 0.3, 0.3, 1};
				name = "bily pozicni";
				brightness = 0.01;
				blinking = false;
			};

			class WhiteBlinking {
				color[] = {1, 1, 1, 1};
				ambient[] = {0.2, 0.2, 0.2, 1};
				name = "bily pozicni blik";
				brightness = 0.01;
				blinking = true;
			};

			class RedBlinking {
				color[] = {1, 0.05, 0.05, 1};
				ambient[] = {0.2, 0.02, 0.02, 1};
				name = "cerveny pozicni blik";
				brightness = 0.01;
				blinking = true;
			};
		};

		class Reflectors
		{
			class Left
			{
				color[] = {0.8, 0.8, 1.0, 1.0};
				ambient[] = {0.07, 0.07, 0.07, 1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 1.0;
			};
			class Right
			{
				color[] = {0.8, 0.8, 1.0, 1.0};
				ambient[] = {0.07, 0.07, 0.07, 1.0};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 0.5;
				brightness = 1.0;
			};
			class Left2
			{
				color[] = {0.8, 0.8, 1.0, 1.0};
				ambient[] = {0.07, 0.07, 0.07, 1.0};
				position = "L svetlo2";
				direction = "konec L svetla2";
				hitpoint = "L svetlo2";
				selection = "L svetlo2";
				size = 0.5;
				brightness = 1.0;
			};
			class Right2
			{
				color[] = {0.8, 0.8, 1.0, 1.0};
				ambient[] = {0.07, 0.07, 0.07, 1.0};
				position = "P svetlo2";
				direction = "konec P svetla2";
				hitpoint = "P svetlo2";
				selection = "P svetlo2";
				size = 0.5;
				brightness = 1.0;
			};
		};

		class Exhausts
		{
		   class Exhaust1
		   {
			   position = "exhaust1";
			   direction = "exhaust1_dir";
			   effect = "ExhaustsEffectPlane";
		   };

		   class Exhaust2
		   {
			   position = "exhaust2";
			   direction = "exhaust2_dir";
			   effect = "ExhaustsEffectPlane";
		   };

		   class Exhaust3
		   {
			   position = "exhaust3";
			   direction = "exhaust3_dir";
			   effect = "ExhaustsEffectPlane";
		   };

		   class Exhaust4
		   {
			   position = "exhaust4";
			   direction = "exhaust4_dir";
			   effect = "ExhaustsEffectPlane";
		   };

		   class Exhaust5
		   {
			   position = "exhaust5";
			   direction = "exhaust5_dir";
			   effect = "ExhaustsEffectPlane";
		   };

		   class Exhaust6
		   {
			   position = "exhaust6";
			   direction = "exhaust6_dir";
			   effect = "ExhaustsEffectPlane";
		   };
		};
	};
	/*class Antonov225_2: Antonov225
	{
		displayName = "$STR_AN225_NAME2";
		faction = "CIV_SU";
		hiddenSelections[] = 	{
									"fuse225a_t",
									"fuse225b_t",
									"fuse225c_t",
									"cowlinga_t",
									"cowlingb_t",
									"cowlingc_t",
									"cowlingd_t",
									"cowlinge_t",
									"cowlingf_t",
									"tail225_t",
									"wingl_t",
									"wingr_t"
								};
		hiddenSelectionsTextures[] = 	{
											"\an225\tx2\fuse225a_t.paa",
											"\an225\tx2\fuse225b_t.paa",
											"\an225\tx2\fuse225c_t.paa",
											"\an225\tx2\cowlinga_t.paa",
											"\an225\tx2\cowlingb_t.paa",
											"\an225\tx2\cowlingc_t.paa",
											"\an225\tx2\cowlingd_t.paa",
											"\an225\tx2\cowlinge_t.paa",
											"\an225\tx2\cowlingf_t.paa",
											"\an225\tx2\tail225_t.paa",
											"\an225\tx2\wingl_t.paa",
											"\an225\tx2\wingr_t.paa"
										};
	};*/
	/*class Antonov225_3: Antonov225
	{
		displayName = "$STR_AN225_NAME3";
		faction = "CIV_TW";
		side=3;
		crew = "$STR_WOP_PILOT";
		hiddenSelections[] = 	{
									"fuse225a_t",
									"fuse225b_t",
									"fuse225c_t",
									"cowlinga_t",
									"cowlingb_t",
									"cowlingc_t",
									"cowlingd_t",
									"cowlinge_t",
									"cowlingf_t",
									"tail225_t",
									"wingl_t",
									"wingr_t"
								};
		hiddenSelectionsTextures[] = 	{
											"\an225\tx3\fuse225a_t.paa",
											"\an225\tx3\fuse225b_t.paa",
											"\an225\tx3\fuse225c_t.paa",
											"\an225\tx3\cowlinga_t.paa",
											"\an225\tx3\cowlingb_t.paa",
											"\an225\tx3\cowlingc_t.paa",
											"\an225\tx3\cowlingd_t.paa",
											"\an225\tx3\cowlinge_t.paa",
											"\an225\tx3\cowlingf_t.paa",
											"\an225\tx3\tail225_t.paa",
											"\an225\tx3\wingl_t.paa",
											"\an225\tx3\wingr_t.paa"
										};
	};*/
	class Antonov225_4: Antonov225
	{
		displayName = "UK Antonov225";
		faction = "OPF_F";
		hiddenSelections[] = 	{
									"fuse225a_t",
									"fuse225b_t",
									"fuse225c_t",
									"cowlinga_t",
									"cowlingb_t",
									"cowlingc_t",
									"cowlingd_t",
									"cowlinge_t",
									"cowlingf_t",
									"tail225_t",
									"wingl_t",
									"wingr_t"
								};
		hiddenSelectionsTextures[] = 	{
											"\an225\tx4\fuse225a_t.paa",
											"\an225\tx4\fuse225b_t.paa",
											"\an225\tx4\fuse225c_t.paa",
											"\an225\tx4\cowlinga_t.paa",
											"\an225\tx4\cowlingb_t.paa",
											"\an225\tx4\cowlingc_t.paa",
											"\an225\tx4\cowlingd_t.paa",
											"\an225\tx4\cowlinge_t.paa",
											"\an225\tx4\cowlingf_t.paa",
											"\an225\tx4\tail225_t.paa",
											"\an225\tx4\wingl_t.paa",
											"\an225\tx4\wingr_t.paa"
										};
	};
	/*class Antonov225_engines: Antonov225
	{
		scope = protected;
		displayName="";
		model="\an225\Antonov_engines";
		class EventHandlers
		{
			 init = "[_this select 0] exec ""\an225\sqs\an225stall.sqs"",[_this select 0] exec ""\an225\sqs\an225Fuel.sqs""";
		};
	};*/
	/*class Antonov225_fgears: Antonov225_engines
	{
		model="\an225\Antonov_fgears";
	};
	class Antonov225_bgears: Antonov225_engines
	{
		model="\an225\Antonov_bgears";
	};*/
};
