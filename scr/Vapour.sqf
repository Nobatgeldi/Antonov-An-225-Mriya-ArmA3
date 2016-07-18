#include "\an225\data\Scripts\dikCodes.h"
private ["_plane","_alt","_a1", "_a2", "_a3", "_particle","_zloop"];
_plane = _this select 0;
temp_tire = 0.0;
buster = 0;
sleep 0.01;
AN225_BRAKE=Compile PreProcessFile ("\an225\scr\brake.sqf");
AN225_BOOST=Compile PreProcessFile ("\an225\scr\booster.sqf");
moduleName_keyDownEHId3 = (findDisplay 46) displayAddEventHandler ["KeyDown", "_asm = _this call AN225_BRAKE"];
moduleName_keyDownEHId4 = (findDisplay 46) displayAddEventHandler ["KeyDown", "_asm2 = _this call AN225_BOOST"];

while {(alive _plane)} do
{
	if ((isengineon _plane) and ((speed _plane) >= 300)) then 
	{		
		_alt = (getpos _plane select 2);
		_a1 = 0.1 + (_alt/1000);
		_a2 = _a1 + 0.2;
		_a3 = _a1 + 0.5;
		if ((_a1 < 0.85)) then 
		{
			_a1 = 0.85;
			_a2 = 0.92;
			_a3 = 1.0;
		};
		_particle = drop ["\wop_gui\data\cl_basic", "", "Billboard", 1, 25, [-25.47,1,5], [0,0,0],    0, 0.0052, 0.0040, 0.1, [1, 15, 30], [[0.5,0.5,0.5,0.0],[0.5,0.5,0.5,0.2],[0.5,0.5,0.5,0.1],[0.5,0.5,0.5,0.05],[0.5,0.5,0.5,0.025],[0.5,0.5,0.5,0.012],[0.5,0.5,0.5,0.0]],[0],0.0,2.0, "", "", _plane];
		_particle = drop ["\wop_gui\data\cl_basic", "", "Billboard", 1, 25, [-17.61,-4,5], [0,0,0],   	0, 0.0052, 0.0040, 0.1, [1, 15, 30], [[0.5,0.5,0.5,0.0],[0.5,0.5,0.5,0.2],[0.5,0.5,0.5,0.1],[0.5,0.5,0.5,0.05],[0.5,0.5,0.5,0.025],[0.5,0.5,0.5,0.012],[0.5,0.5,0.5,0.0]],[0],0.0,2.0, "", "", _plane];
		_particle = drop ["\wop_gui\data\cl_basic", "", "Billboard", 1, 25, [-9.75,-9,5], [0,0,0],   	0, 0.0052, 0.0040, 0.1, [1, 15, 30], [[0.5,0.5,0.5,0.0],[0.5,0.5,0.5,0.2],[0.5,0.5,0.5,0.1],[0.5,0.5,0.5,0.05],[0.5,0.5,0.5,0.025],[0.5,0.5,0.5,0.012],[0.5,0.5,0.5,0.0]],[0],0.0,2.0, "", "", _plane];
		_particle = drop ["\wop_gui\data\cl_basic", "", "Billboard", 1, 25, [9.94,-9,5], [0,0,0],   	0, 0.0052, 0.0040, 0.1, [1, 15, 30], [[0.5,0.5,0.5,0.0],[0.5,0.5,0.5,0.2],[0.5,0.5,0.5,0.1],[0.5,0.5,0.5,0.05],[0.5,0.5,0.5,0.025],[0.5,0.5,0.5,0.012],[0.5,0.5,0.5,0.0]],[0],0.0,2.0, "", "", _plane];
		_particle = drop ["\wop_gui\data\cl_basic", "", "Billboard", 1, 25, [17.87,-4,5], [0,0,0],   	0, 0.0052, 0.0040, 0.1, [1, 15, 30], [[0.5,0.5,0.5,0.0],[0.5,0.5,0.5,0.2],[0.5,0.5,0.5,0.1],[0.5,0.5,0.5,0.05],[0.5,0.5,0.5,0.025],[0.5,0.5,0.5,0.012],[0.5,0.5,0.5,0.0]],[0],0.0,2.0, "", "", _plane];
		_particle = drop ["\wop_gui\data\cl_basic", "", "Billboard", 1, 25, [25.74,1,5], [0,0,0],   	0, 0.0052, 0.0040, 0.1, [1, 15, 30], [[0.5,0.5,0.5,0.0],[0.5,0.5,0.5,0.2],[0.5,0.5,0.5,0.1],[0.5,0.5,0.5,0.05],[0.5,0.5,0.5,0.025],[0.5,0.5,0.5,0.012],[0.5,0.5,0.5,0.0]],[0],0.0,2.0, "", "", _plane];
		
		_zloop = abs(0.10-((speed _plane)/6000));
		sleep (0.005 + _zloop);
	}
	else
	{
		sleep 0.05;
	};
};

