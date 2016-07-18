_plane = _this select 0;
_plane allowDamage false;
_player = _this select 2;
_null = objNull;
_technics = position _plane nearEntities 40;
_cnt = count _technics;
_vel = velocity _plane;
sleep 0.01;
if (_cnt > 0) then
{
	{
		if ((_x)!=(_plane)) then
		{			
			sleep 0.01;
			detach _x;
			sleep 0.01;
			_x setfuel 1;
			_x enableSimulation true;
			_x allowDamage true;
		}
	}
	forEach _technics;
};
if (true) exitWith {};