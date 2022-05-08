_display = findDisplay 2900;


_ctrl = _display displayCtrl 1700;//Grid8
_grid8 = ctrlText _ctrl;
_pos = _grid8 call JZASS_fnc_Grid8Topos;
//debug

if (!((count _grid8) == 8)||(_grid8 isEqualTo "00000000")) exitwith {
	_text = localize "STR_JZASS_correctGrid";
	hint _text};

_ctrl = _display displayCtrl 1702;
_ammoselect = lbSelection _ctrl;
if (_ammoselect isEqualTo []) then {
	_ammoselect = [0];
};
_ammoselect = _ammoselect#0;

if (_ammoselect == 0) exitwith {_text = localize "STR_JZASS_correctAmmo"; hint _text;};

_ETAArray = AtryETA select _ammoselect;
_dispersion = AtryDispersion select _ammoselect;
_bulletClass = AtryClassName select _ammoselect;
_interval = AtryInterval select _ammoselect;

_ctrl = _display displayCtrl 1703; //Round 
_round = ctrlText _ctrl;
_round = parseNumber _round;

_ctrl = _display displayCtrl 1704; //Number 
_number = ctrlText _ctrl;
_number = parseNumber _number;


_btext=AtryCategory select _ammoselect;
_caliber = AtryCaliber select _ammoselect;

_ctrl = _display displayCtrl 1701;
_chatmode = cbChecked _ctrl;

_sidePlayer = side player;

_ETA = random _ETAArray;
_text = (localize "STR_JZASS_Broadcast1")+_grid8+(localize "STR_JZASS_Broadcast2")+str(_caliber)+"mm"+_btext+(localize "STR_JZASS_Broadcast3")+str(_round)+(localize "STR_JZASS_Broadcast4")+str(_number)+",ETA"+(_ETA toFixed 0)+(localize "STR_JZASS_Broadcast5");



if (_chatmode ) then {[[_sidePlayer, "Base"],_text] remoteExec ["sideChat"]};

[_interval*_round,_chatmode] spawn {
	params["_time","_chatmode"];
	sleep _time;
	if (_chatmode ) then {[[OPFOR, "Base"],localize "STR_JZASS_Launched"] remoteExec ["sideChat"];};
};
sleep _ETA;
for "_i" from 1 to _number do {
	[_pos, _bulletClass, _dispersion, _round, _interval] spawn BIS_fnc_fireSupportVirtual;
	sleep 0.5;
};
