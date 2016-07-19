class CfgVehicles
{
	class All
	{
	};
	class AllVehicles: All
	{
	};
	class Air: AllVehicles
	{
	};
	class Plane: Air
	{
	};
	class Antonov225: Plane
	{
		scope=2;
		brakeDistance=400;
		faction="An225";
		mapSize=100;
		crew="O_helipilot_F";
		picture="\an225\an225spl";
		icon="\an225\icon.paa";
		wheelSteeringSensitivity=12.5;
		side=0;
		displayName="$STR_AN225_NAME1";
		accuracy=0.2;
		simulation="airplane";
		irTarget=1;
		irScanRange=3000;
		irScanGround=0;
		textplural="Airplanes";
		textsingular="Airplane";
		audible=6;
		maneuvrability=40;
		acceleration=4000;
		maxSpeed=1500;
		landingSpeed=275;
		//geardowntime=6;
		//gearuptime=6;
		soundengine[]=
		{
			"\an225\Fx\an225eng.wav",
			10,
			1
		};
		soundLandCrash[]=
		{
			"\an225\Fx\An225_tire.wav",
			1.1220185,
			1
		};
		soundEnviron[]=
		{
			"Objects\noise",
			0.001,
			1
		};
		weapons[]={};
		magazines[]={};
		armor=250;
		cost=2000000;
		transportSoldier=4;
		model="\an225\An_225_3";
		fov=0.69999999;
		aileronSensitivity=0.60000002;
		elevatorSensitivity=6;
		noseDownCoef=0.80000001;
		landingAoa= "rad 9";//"8*3.1415/180";
		ejectSpeed[]={0,0,0};
		extCameraPosition[]={0,9,-75};
		type="VAir";
		//lightongear=0;
		threat[]={0.80000001,0.80000001,1};
		animated=1;
		hiddenSelections[]=
		{
			"num"
		};
		transportFuel=600000;
		transportVehiclesCount=3;
		transportVehiclesMass=250000;
		getInRadius=1.5;
		vehicleClass="Air";
		driverAction="pilot";
		gunnerAction="pilot";
		cargoAction[]=
		{
			/*"MH6_Cargo01",
			"MH6_Cargo02",
			"MH6_Cargo01",
			"MH6_Cargo02"*/
		};
		insideSoundCoef=0.015;
		hascommander=0;
		hasGunner=1;
		//gearRetracting=1;
		driverCompartments="Compartment1";
		class Library
		{
			libTextDesc="$STR_MRIYA_DESCR";
		};
		class ViewOptics
		{
			initFov=1;
			minFov=0.30000001;
			maxFov=1.2;
			initAngleX=0;
			minAngleX=-40;
			maxAngleX=85;
			initAngleY=0;
			minAngleY=-150;
			maxAngleY=150;
		};
		class NewTurret;
		class ViewPilot;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				body="";
				gun="";
				commanding=-1;
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				weapons[]={};
				magazines[]={};
				castGunnerShadow=1;
				viewGunnerShadow=1;
				gunnerAction="pilot";
				gunnerInAction="pilot";
			};
		};
		class EventHandlers
		{
			init="_this execVM ""\an225\scr\Vapour.sqf"";_this execVM ""\an225\scr\gear_trigger.sqf"";_this execVM ""\an225\scr\loadcrew.sqf"";";
			engine="_this exec ""\an225\scr\dverclose.sqs""";
		};
		class AnimationSources
		{
			class gear_trigger
			{
				source="gear";
				initPhase=0;
				animPeriod=0.1;
			};
			class ladder
			{
				source="user";
				initPhase=0;
				animPeriod=8;
			};
			class ladder_k
			{
				source="user";
				initPhase=0;
				animPeriod=8;
			};
			class ladder_2
			{
				source="user";
				initPhase=0;
				animPeriod=8;
			};
			class ladder_k_2
			{
				source="user";
				initPhase=0;
				animPeriod=8;
			};
			class FGear
			{
				source="user";
				initPhase=0;
				animPeriod=38;
			};
			class Nose
			{
				source="user";
				initPhase=0;
				animPeriod=35;
			};
			class BGear1
			{
				source="user";
				initPhase=0;
				animPeriod=45;
			};
			class BGear2
			{
				source="user";
				initPhase=0;
				animPeriod=45;
			};
			class Corp
			{
				source="user";
				initPhase=0;
				animPeriod=45;
			};
			class Skat
			{
				source="user";
				initPhase=0;
				animPeriod=45;
			};
			class Skat_konec
			{
				source="user";
				initPhase=0;
				animPeriod=45;
			};
			class konec2
			{
				source="user";
				initPhase=0;
				animPeriod=45;
			};
			class konec3
			{
				source="user";
				initPhase=0;
				animPeriod=45;
			};
			class Stoika1
			{
				source="user";
				initPhase=0;
				animPeriod=25;
			};
			class Stoika2
			{
				source="user";
				initPhase=0;
				animPeriod=25;
			};
			class Stoika3
			{
				source="user";
				initPhase=0;
				animPeriod=45;
			};
			class lisection1
			{
				source="user";
				initPhase=0;
				animPeriod=5.1999998;
			};
			class lisection2
			{
				source="user";
				initPhase=0;
				animPeriod=4.4000001;
			};
			class lisection3
			{
				source="user";
				initPhase=0;
				animPeriod=3.8;
			};
			class lisection4
			{
				source="user";
				initPhase=0;
				animPeriod=3.2;
			};
			class lisection5
			{
				source="user";
				initPhase=0;
				animPeriod=4.5;
			};
			class lisection6
			{
				source="user";
				initPhase=0;
				animPeriod=4.0999999;
			};
			class lisection7
			{
				source="user";
				initPhase=0;
				animPeriod=5;
			};
			class risection1
			{
				source="user";
				initPhase=0;
				animPeriod=5;
			};
			class risection2
			{
				source="user";
				initPhase=0;
				animPeriod=4.5;
			};
			class risection3
			{
				source="user";
				initPhase=0;
				animPeriod=3.3;
			};
			class risection4
			{
				source="user";
				initPhase=0;
				animPeriod=3.0999999;
			};
			class risection5
			{
				source="user";
				initPhase=0;
				animPeriod=4.1999998;
			};
			class risection6
			{
				source="user";
				initPhase=0;
				animPeriod=4.6999998;
			};
			class risection7
			{
				source="user";
				initPhase=0;
				animPeriod=5.0999999;
			};
			class losection1
			{
				source="user";
				initPhase=0;
				animPeriod=11.9;
			};
			class losection2
			{
				source="user";
				initPhase=0;
				animPeriod=10.5;
			};
			class losection3
			{
				source="user";
				initPhase=0;
				animPeriod=10.2;
			};
			class losection4
			{
				source="user";
				initPhase=0;
				animPeriod=9.5;
			};
			class losection5
			{
				source="user";
				initPhase=0;
				animPeriod=9;
			};
			class losection6
			{
				source="user";
				initPhase=0;
				animPeriod=10.5;
			};
			class losection7
			{
				source="user";
				initPhase=0;
				animPeriod=11.8;
			};
			class rosection1
			{
				source="user";
				initPhase=0;
				animPeriod=12;
			};
			class rosection2
			{
				source="user";
				initPhase=0;
				animPeriod=10.3;
			};
			class rosection3
			{
				source="user";
				initPhase=0;
				animPeriod=9.5;
			};
			class rosection4
			{
				source="user";
				initPhase=0;
				animPeriod=9;
			};
			class rosection5
			{
				source="user";
				initPhase=0;
				animPeriod=8.5;
			};
			class rosection6
			{
				source="user";
				initPhase=0;
				animPeriod=9.6999998;
			};
			class rosection7
			{
				source="user";
				initPhase=0;
				animPeriod=12.5;
			};
			class gearF
			{
				source="user";
				initPhase=0;
				animPeriod=14;
			};
			class gl1
			{
				source="user";
				initPhase=0;
				animPeriod=12.5;
			};
			class gl2
			{
				source="user";
				initPhase=0;
				animPeriod=11.3;
			};
			class gl3
			{
				source="user";
				initPhase=0;
				animPeriod=11;
			};
			class gl4
			{
				source="user";
				initPhase=0;
				animPeriod=10.5;
			};
			class gl5
			{
				source="user";
				initPhase=0;
				animPeriod=9.5;
			};
			class gl6
			{
				source="user";
				initPhase=0;
				animPeriod=11;
			};
			class gl7
			{
				source="user";
				initPhase=0;
				animPeriod=12;
			};
			class gr1
			{
				source="user";
				initPhase=0;
				animPeriod=12.1;
			};
			class gr2
			{
				source="user";
				initPhase=0;
				animPeriod=11.4;
			};
			class gr3
			{
				source="user";
				initPhase=0;
				animPeriod=10.3;
			};
			class gr4
			{
				source="user";
				initPhase=0;
				animPeriod=10.5;
			};
			class gr5
			{
				source="user";
				initPhase=0;
				animPeriod=9;
			};
			class gr6
			{
				source="user";
				initPhase=0;
				animPeriod=9.6999998;
			};
			class gr7
			{
				source="user";
				initPhase=0;
				animPeriod=11.8;
			};
			class kl1
			{
				source="user";
				initPhase=0;
				animPeriod=12;
			};
			class kl2
			{
				source="user";
				initPhase=0;
				animPeriod=11.2;
			};
			class kl3
			{
				source="user";
				initPhase=0;
				animPeriod=10.4;
			};
			class kl4
			{
				source="user";
				initPhase=0;
				animPeriod=9.8000002;
			};
			class kl5
			{
				source="user";
				initPhase=0;
				animPeriod=10.4;
			};
			class kl6
			{
				source="user";
				initPhase=0;
				animPeriod=9;
			};
			class kl7
			{
				source="user";
				initPhase=0;
				animPeriod=11.7;
			};
			class kr1
			{
				source="user";
				initPhase=0;
				animPeriod=12.5;
			};
			class kr2
			{
				source="user";
				initPhase=0;
				animPeriod=11.3;
			};
			class kr3
			{
				source="user";
				initPhase=0;
				animPeriod=11.1;
			};
			class kr4
			{
				source="user";
				initPhase=0;
				animPeriod=9.8000002;
			};
			class kr5
			{
				source="user";
				initPhase=0;
				animPeriod=9.3000002;
			};
			class kr6
			{
				source="user";
				initPhase=0;
				animPeriod=11.7;
			};
			class kr7
			{
				source="user";
				initPhase=0;
				animPeriod=12.5;
			};
			class gdoorF1
			{
				source="user";
				initPhase=0;
				animPeriod=2;
			};
			class gdoorF2
			{
				source="user";
				initPhase=0;
				animPeriod=2;
			};
			class gdoorF3
			{
				source="user";
				initPhase=0;
				animPeriod=2;
			};
			class gdoorF4
			{
				source="user";
				initPhase=0;
				animPeriod=2;
			};
		};
		class UserActions
		{
			class OpenNose
			{
				onlyforplayer=0;
				displayname="$STR_an225_ON";
				position="pos nose open";
				radius=100;
				showWindow=0;
				condition="this animationPhase ""Nose"" < 0.01 and !isengineon this and this animationPhase ""ladder"" < 0.01 and this animationPhase ""ladder_2"" < 0.01";
				statement="[this] execVM ""\an225\scr\open_nose.sqf""";
			};
			class CloseNose
			{
				onlyforplayer=0;
				displayname="$STR_an225_CN";
				position="pos nose open";
				radius=100;
				showWindow=0;
				condition="this animationPhase ""Nose"" >= 0.99 and !isengineon this and this animationPhase ""ladder"" < 0.01 and this animationPhase ""ladder_2"" < 0.01";
				statement="[this] execVM ""\an225\scr\close_nose.sqf""";
			};
			class OpenDoor
			{
				onlyforplayer=0;
				displayname="$STR_AN225_OD";
				position="pos nose open";
				radius=100;
				showWindow=0;
				condition="(this animationPhase ""ladder"" < 0.01 and this animationPhase ""corp""==0 or this animationPhase ""ladder_2"" < 0.01 and this animationPhase ""corp""==1) and !isengineon this";
				statement="[this] execVM ""\an225\scr\open_door.sqf""";
			};
			class CloseDoor
			{
				onlyforplayer=0;
				displayname="$STR_AN225_CD";
				position="pos nose open";
				radius=100;
				showWindow=0;
				condition="this animationPhase ""ladder"" >= 0.99 and this animationPhase ""corp""==0 or this animationPhase ""ladder_2"" >= 0.99 and this animationPhase ""corp""==1";
				statement="[this] execVM ""\an225\scr\close_door.sqf""";
			};
			class loadcargo
			{
				onlyforplayer=0;
				displayName="$STR_an225_LC";
				position="axiscargo";
				radius=30;
				condition="((vehicle player != this) and (vehicle player != player) and (speed vehicle this < 5) and (this animationPhase ""Nose"" < 0.01))";
				statement="[this, vehicle player, player] execVM ""\an225\scr\attach.sqf""";
			};
			class unloadcargo
			{
				onlyforplayer=0;
				displayName="$STR_an225_UC";
				position="axiscargo";
				radius=30;
				condition="(vehicle player != this) and (vehicle player != player)";
				statement="[this, vehicle player, player] execVM ""\an225\scr\detach.sqf""";
			};
			class unloadcargoall
			{
				onlyforplayer=0;
				showWindow=0;
				displayName="$STR_an225_UCA";
				position="axiscargo";
				radius=100;
				condition="(player in this) and ((count (position this nearEntities 30)) > 1)";
				statement="[this, vehicle player, player] execVM ""\an225\scr\detachall.sqf""";
			};
		};
		class Reflectors
		{
			class Left
			{
				color[]={0.80000001,0.80000001,1,1};
				ambient[]={0.07,0.07,0.07,1};
				position="L svetlo";
				direction="konec L svetla";
				hitpoint="L svetlo";
				selection="L svetlo";
				size=0.5;
				brightness=1;
			};
			class Right
			{
				color[]={0.80000001,0.80000001,1,1};
				ambient[]={0.07,0.07,0.07,1};
				position="P svetlo";
				direction="konec P svetla";
				hitpoint="P svetlo";
				selection="P svetlo";
				size=0.5;
				brightness=1;
			};
		};
	};

	class Antonov225_3: Antonov225
	{
		displayName="$STR_AN225_NAME3";
		faction="An225";
		side=3;
		model="\an225\An_225_3";
		crew="O_helipilot_F";
		class EventHandlers
		{
			init="_this execVM ""\an225\scr\Vapour.sqf"";_this execVM ""\an225\scr\gear_trigger.sqf"";_this execVM ""\an225\scr\loadcrew2.sqf"";";
			engine="_this exec ""\an225\scr\dverclose.sqs""";
		};
	};
};
