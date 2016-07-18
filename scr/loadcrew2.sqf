_plane = _this select 0;
_plane allowDamage false;
if (count (crew _plane) == 0) then
{
	hint "No pilots!";
}
else
{
	_pilot = driver _plane;
	_pilot_grp = group _pilot;

/*	_count = 4;

	for [{_i=0}, {_i<_count}, {_i=_i+1}] do
	{
		"O_helipilot_F" createunit [getpos _plane, _pilot_grp,"", 0.7, "PRIVATE"];
		_tunits = units _pilot_grp;
		_soldier = _tunits select (count(_tunits) -1);
		_soldier moveincargo _plane;
	};*/
};

_plane allowDamage true;
if (true) exitWith {};