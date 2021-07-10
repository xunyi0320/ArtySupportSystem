params ["_xGrid","_yGrid"];
_xGrid = _xGrid /10;
_yGrid = _yGrid /10;
_xGrid = ceil _xGrid;
_yGrid = ceil _yGrid; 
if (_xGrid>1000) then {
	_xGrid = str(_xGrid);
} else { 
	_xGrid = str(_xGrid);
	_xGrid = "0" + _xGrid;
};

if (_yGrid>1000) then {
	_yGrid = str(_yGrid);
} else {
	_yGrid = str(_yGrid);
	_yGrid = "0" + _yGrid ;
};

grid8 = _xGrid + _yGrid;
grid8