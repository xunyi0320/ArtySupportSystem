closeDialog 2900;
_text = localize "STR_JZASS_GetGrid8";
player addAction [_text,{
	params ["_target", "_caller", "_actionId", "_arg"];
	_pos = screenToWorld [0.5,0.5];
	_grid8 = _pos call JZASS_fnc_posToGrid8;
	localNamespace setVariable["JZ_ASS_Grid8",_grid8]; 
	localNamespace setVariable["JZ_ASS_UsedAAS",true]; 
	player removeAction _actionId;
	createDialog "JZ_ASS_CommanderPanel";
}];

