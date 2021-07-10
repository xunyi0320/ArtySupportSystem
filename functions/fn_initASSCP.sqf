params[
	["_Grid8","00000000"]
];

waitUntil {!isnull(findDisplay 2900) && !(isNull player)};

if (localNamespace getVariable ["JZ_ASS_UsedAAS",false]) then {
	localNamespace setVariable["JZ_ASS_UsedAAS",nil]; 
	_Grid8 = localNamespace getVariable["JZ_ASS_Grid8","00000000"]; 
};


_display = findDisplay 2900;
_ctrl = _display displayCtrl 1700;//Grid8
_ctrl ctrlSetText _Grid8;

_ctrl = _display displayCtrl 1904;//remain
_ctrl ctrlSetText "-";

[]spawn JZASS_fnc_initASSCPInfoReflash;
[]spawn JZASS_fnc_initASSCPLBAdd;

_ctrl = _display displayCtrl 1701;
_ctrl cbSetChecked true;