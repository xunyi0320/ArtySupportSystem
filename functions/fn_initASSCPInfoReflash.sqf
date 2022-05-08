
_display = findDisplay 2900;
_ctrl = _display displayCtrl 1702;

_ammoselect = lbSelection _ctrl;
if (_ammoselect isEqualTo []) then {
	_ammoselect = [0];
};
_ammoselect = _ammoselect#0;


_ctrl = _display displayCtrl 1900;//ETA
_ctrl ctrlSetText str(AtryAverageETA select _ammoselect);

_ctrl = _display displayCtrl 1901;//Caliber
_ctrl ctrlSetText str(AtryCaliber select _ammoselect);

_ctrl = _display displayCtrl 1902;//Dispersion
_ctrl ctrlSetText str(AtryDispersion select _ammoselect);

_ctrl = _display displayCtrl 1905;//Category
_ctrl ctrlSetText (AtryCategory select _ammoselect);

_ctrl = _display displayCtrl 1703; //Round 
_round = ctrlText _ctrl;
_round = parseNumber _round;

_ctrl = _display displayCtrl 1704; //Number 
_number = ctrlText _ctrl;
_number = parseNumber _number;

_ctrl = _display displayCtrl 1903;//Total
_ctrl ctrlSetText str(_number*_round);

_display = findDisplay 2900;

_ctrl = _display displayCtrl 1701;//chatmod
localNamespace setVariable ["JZ_ASS_Memory_chatmod",cbChecked _ctrl];

_ctrl = _display displayCtrl 1702;//ammo
localNamespace setVariable ["JZ_ASS_Memory_ammo",lbSelection _ctrl];


_ctrl = _display displayCtrl 1703;//round
localNamespace setVariable ["JZ_ASS_Memory_round",ctrlText _ctrl];

_ctrl = _display displayCtrl 1704; //number 
localNamespace setVariable ["JZ_ASS_Memory_number",ctrlText _ctrl];