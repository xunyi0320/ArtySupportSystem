ArtyAmmoList = [
//[Name(String) ClassName(String) ETA([MIN,AVE,MAX]) Dispersion(figure) Interval(figure) Caliber(figure) Category(String) ]
//名字			类名				ETA 			  分散				 两轮火炮间的距离   口径            类型
//interval : time between two turns of arty fire
	[localize "STR_JZASS_thirdass","Sh_82mm_AMOS",[3,5,7],50,2,82,"HE"],
	[localize "STR_JZASS_secondasbhe","Sh_155mm_AMOS",[27, 35, 50],100,8,155,"HE"],
	[localize "STR_JZASS_secondasbsmoke","Smoke_120mm_AMOS_White",[27, 35, 50],100,8,120,localize "STR_JZASS_Smoke"],
	[localize "STR_JZASS_secondasbpg","Sh_155mm_AMOS",[27, 35, 50],0,8,155,"HE"],
	[localize "STR_JZASS_thirdgmb","Sh_155mm_AMOS",[45, 60, 90],250,0.5,230,localize "STR_JZASS_Rocket"]
];





AtryAmmoName = [localize "STR_JZASS_PleaseSelect"];
{
	AtryAmmoName pushBack (_x#0);	
} forEach ArtyAmmoList;

AtryClassName = [""];
{
	AtryClassName pushBack (_x#1);	
} forEach ArtyAmmoList;

AtryAverageETA = [-1];
{
	AtryAverageETA pushBack (_x#2#1);	
} forEach ArtyAmmoList;

AtryETA = [-1];
{
	AtryETA pushBack (_x#2);	
} forEach ArtyAmmoList;

AtryDispersion = [-1];
{
	AtryDispersion pushBack (_x#3);	
} forEach ArtyAmmoList;

AtryInterval = [-1];
{
	AtryInterval pushBack (_x#4);	
} forEach ArtyAmmoList;

AtryCaliber = [-1];
{
	AtryCaliber pushBack (_x#5);	
} forEach ArtyAmmoList;

AtryCaliber = [-1];
{
	AtryCaliber pushBack (_x#5);	
} forEach ArtyAmmoList;

AtryCategory = ["-"];
{
	AtryCategory pushBack (_x#6);	
} forEach ArtyAmmoList;

player addAction [localize "STR_JZASS_OpenASS",{[] spawn JZASS_fnc_initASSCP;}];