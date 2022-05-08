closeDialog 2900;
_text = localize "STR_JZASS_GetGrid8";
player addAction [_text,{
	params ["_target", "_caller", "_actionId", "_arg"];
	_pos = screenToWorld [0.5,0.5];
	_grid8 = _pos call JZASS_fnc_posToGrid8;
	player removeAction _actionId;
	_grid8 spawn JZASS_fnc_initASSCP;
}];

