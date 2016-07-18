_player = player;
_an225 = _this select 0;
if ((_an225 animationPhase "Corp")>0.1) then
{
	_an225 animate["ladder_2",0]; 
	_an225 animate["ladder_k_2",0];
}
else
{
	_an225 animate["ladder",0]; 
	_an225 animate["ladder_k",0];
};
if (true) exitWith {};
