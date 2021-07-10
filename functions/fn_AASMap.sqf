closeDialog 2900;
openMap true;
MEH = addMissionEventHandler ["MapSingleClick", {
	params ["_units", "_pos", "_alt", "_shift"];
	localNamespace setVariable["JZ_ASS_MapPos",_pos];  
	localNamespace setVariable["JZ_ASS_selectedMapgrid",true];  
}];
waitUntil {localNamespace getVariable["JZ_ASS_selectedMapgrid",false];};
localNamespace setVariable["JZ_ASS_selectedMapgrid",false];
removeMissionEventHandler ["MapSingleClick", MEH];
MEH =  nil;
openMap false;

_pos = localNamespace getVariable["JZ_ASS_MapPos",[0,0,0]];

localNamespace setVariable["JZ_ASS_MapPos",nil];
_grid8 = _pos call JZASS_fnc_posToGrid8;
localNamespace setVariable["JZ_ASS_Grid8",_grid8]; 
localNamespace setVariable["JZ_ASS_UsedAAS",true]; 
createDialog "JZ_ASS_CommanderPanel";