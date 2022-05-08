params[
	["_grid8","00000000"]
];
createDialog "JZ_ASS_CommanderPanel";  

waitUntil {!isnull(findDisplay 2900) && !(isNull player)};

_display = findDisplay 2900;
_ctrl = _display displayCtrl 1700;//Grid8
_ctrl ctrlSetText _grid8;

_ctrl = _display displayCtrl 1904;//remain
_ctrl ctrlSetText "-";


_display = findDisplay 2900;
_ctrl = _display displayCtrl 1702;
{_ctrl lbAdd _x}foreach AtryAmmoName;


_ctrl = _display displayCtrl 1701;//chatmod
_chatmod = localNamespace getVariable ["JZ_ASS_Memory_chatmod",true];
_ctrl cbSetChecked _chatmod;

_ctrl = _display displayCtrl 1702;//ammo
_ammo = localNamespace getVariable ["JZ_ASS_Memory_ammo",[]];
if (_ammo isEqualTo []) then {
	_ammo = [0];
};
_ammo = _ammo#0;
_ctrl lbSetCurSel _ammo;

_ctrl = _display displayCtrl 1703;//round
_round = localNamespace getVariable ["JZ_ASS_Memory_round","1"];
_ctrl ctrlSetText _round;

_ctrl = _display displayCtrl 1704; //number 
_number = localNamespace getVariable ["JZ_ASS_Memory_number","4"];
_ctrl ctrlSetText _number;

[]spawn JZASS_fnc_initASSCPInfoReflash;