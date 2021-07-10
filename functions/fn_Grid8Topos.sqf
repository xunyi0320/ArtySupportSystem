params["_grid8"];
_xfix = parseNumber (_grid8 select [3,1]);
_yfix = parseNumber (_grid8 select [7,1]);
_strb=(_grid8 select [4,3]);
_stra=(_grid8 select [0,3]);
_grid6=_stra+_strb;
_gridM = _grid6 call BIS_fnc_gridToPos;
_pos = _gridM#0+[0];
_pos = _pos vectorAdd [_xfix*10,_yfix*10,0];
_pos