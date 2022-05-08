#include "BaseControls.hpp"

#define GUI_GRID_X	(0)
#define GUI_GRID_Y	(0)
#define GUI_GRID_W	(0.025)
#define GUI_GRID_H	(0.04)
#define GUI_GRID_WAbs	(1)
#define GUI_GRID_HAbs	(1)

class JZ_ASS_CommanderPanel
{
	idd = 2900;
	movingEnable = true ; 
	//onload = "[] spawn JZASS_fnc_initASSCP";
	class ControlsBackground
	{
		class textBackground: RscASSText
		{
			idc = 1000;

			x = 7 * GUI_GRID_W + GUI_GRID_X;
			y = 1.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 26 * GUI_GRID_W;
			h = 21.5 * GUI_GRID_H;
			colorBackground[] = {-1,-1,-1,0.7};
		};
		class textHeader: RscASSText
		{
			idc = 1001;

			text = "$STR_JZASS_Header"; //--- ToDo: Localize;
			x = 7 * GUI_GRID_W + GUI_GRID_X;
			y = 1.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 18 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {-1,-1,-1,0.7};
		};
		class textVersion: RscASSText
		{
			idc = 1002;

			text = "$STR_JZASS_Version"; //--- ToDo: Localize;
			x = 25 * GUI_GRID_W + GUI_GRID_X;
			y = 1.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 8 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {-1,-1,-1,0.75};
		};
		class textBackgroundAI: RscASSText
		{
			idc = 1003;
			x = 22 * GUI_GRID_W + GUI_GRID_X;
			y = 7 * GUI_GRID_H + GUI_GRID_Y;
			w = 10 * GUI_GRID_W;
			h = 6 * GUI_GRID_H;
			colorBackground[] = {-1,-1,-1,0.7};
		};
		class textAmmo: RscASSText
		{
			idc = 1004;

			text = "$STR_JZASS_Ammo"; //--- ToDo: Localize;
			x = 8 * GUI_GRID_W + GUI_GRID_X;
			y = 8 * GUI_GRID_H + GUI_GRID_Y;
			w = 5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {-1,-1,-1,0.7};
		};
		class textRound: RscASSText
		{
			idc = 1005;

			text = "$STR_JZASS_Round"; //--- ToDo: Localize;
			x = 8 * GUI_GRID_W + GUI_GRID_X;
			y = 11 * GUI_GRID_H + GUI_GRID_Y;
			w = 5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {-1,-1,-1,0.7};
		};
		class textNumber: RscASSText
		{
			idc = 1006;

			text = "$STR_JZASS_ArtyNumber"; //--- ToDo: Localize;
			x = 8 * GUI_GRID_W + GUI_GRID_X;
			y = 13 * GUI_GRID_H + GUI_GRID_Y;
			w = 5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {-1,-1,-1,0.7};
		};
		class textBullet: RscASSText
		{
			idc = 1007;

			text = "$STR_JZASS_AmmoInformation"; //--- ToDo: Localize;
			x = 22 * GUI_GRID_W + GUI_GRID_X;
			y = 7 * GUI_GRID_H + GUI_GRID_Y;
			w = 10 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class textETA: RscASSText
		{
			idc = 1008;

			text = "ETA(s)"; //--- ToDo: Localize;
			x = 22 * GUI_GRID_W + GUI_GRID_X;
			y = 8 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class textCaliber: RscASSText
		{
			idc = 1009;

			text = "$STR_JZASS_Caliber"; //--- ToDo: Localize;
			x = 22 * GUI_GRID_W + GUI_GRID_X;
			y = 9 * GUI_GRID_H + GUI_GRID_Y;
			w = 6 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class textDispersion: RscASSText
		{
			idc = 1010;

			text = "$STR_JZASS_Dispersion"; //--- ToDo: Localize;
			x = 22 * GUI_GRID_W + GUI_GRID_X;
			y = 10 * GUI_GRID_H + GUI_GRID_Y;
			w = 6 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class textTotal: RscASSText
		{
			idc = 1014;

			text = "$STR_JZASS_TotalShells"; //--- ToDo: Localize;
			x = 22 * GUI_GRID_W + GUI_GRID_X;
			y = 15 * GUI_GRID_H + GUI_GRID_Y;
			w = 6 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {-1,-1,-1,0.7};
		};
		class textChatmod: RscASSText
		{
			idc = 1016;

			text = "$STR_JZASS_Broadcast"; //--- ToDo: Localize;
			x = 8 * GUI_GRID_W + GUI_GRID_X;
			y = 15 * GUI_GRID_H + GUI_GRID_Y;
			w = 5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {-1,-1,-1,0.7};
		};
		class textETA1: RscASSText
		{
			idc = 1017;

			text = "$STR_JZASS_About"; //--- ToDo: Localize;
			x = 25 * GUI_GRID_W + GUI_GRID_X;
			y = 8 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class textAAS: RscASSText
		{
			idc = 1018;

			text = "$STR_JZASS_AAS"; //--- ToDo: Localize;
			x = 8 * GUI_GRID_W + GUI_GRID_X;
			y = 5 * GUI_GRID_H + GUI_GRID_Y;
			w = 13 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {-1,-1,-1,0.7};
		};
		class textRemain: RscASSText
		{
			idc = 1019;

			text = "$STR_JZASS_RemainAmmo"; //--- ToDo: Localize;
			x = 22 * GUI_GRID_W + GUI_GRID_X;
			y = 12 * GUI_GRID_H + GUI_GRID_Y;
			w = 6 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class textGrid: RscASSText
		{
			idc = 1020;

			text = "$STR_JZASS_Grid8"; //--- ToDo: Localize;
			x = 8 * GUI_GRID_W + GUI_GRID_X;
			y = 4 * GUI_GRID_H + GUI_GRID_Y;
			w = 5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {-1,-1,-1,0.7};
		};
		class textCategory: RscASSText
		{
			idc = 1009;

			text = "$STR_JZASS_Category"; //--- ToDo: Localize;
			x = 22 * GUI_GRID_W + GUI_GRID_X;
			y = 11 * GUI_GRID_H + GUI_GRID_Y;
			w = 6 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};

	};
	class Controls
	{	
		class buttonExit: RscASSButton
		{
			idc = 1600;
			onButtonClick = "[] spawn JZASS_fnc_closeAASCP";

			text = "$STR_JZASS_Exit"; //--- ToDo: Localize;
			x = 29 * GUI_GRID_W + GUI_GRID_X;
			y = 23.1 * GUI_GRID_H + GUI_GRID_Y;
			w = 4 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {-1,-1,-1,0.7};
		};
		class buttonRequest: RscASSButton
		{
			idc = 1601;
			onButtonClick = "[] spawn JZASS_fnc_Request";
			text = "$STR_JZASS_Request"; //--- ToDo: Localize;
			x = 28 * GUI_GRID_W + GUI_GRID_X;
			y = 19 * GUI_GRID_H + GUI_GRID_Y;
			w = 4 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class buttonHelp: RscASSButton
		{
			idc = 1606;
			onButtonClick = "hint (Localize 'STR_JZASS_implemented')";

			text = "$STR_JZASS_HelpAbout"; //--- ToDo: Localize;
			x = 7 * GUI_GRID_W + GUI_GRID_X;
			y = 23.1 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {-1,-1,-1,0.7};
		};
		class buttonAASMap: RscASSButton
		{
			idc = 1602;
			onButtonClick = "[] spawn JZASS_fnc_AASMap";

			text = "$STR_JZASS_ByMap"; //--- ToDo: Localize;
			x = 8 * GUI_GRID_W + GUI_GRID_X;
			y = 6 * GUI_GRID_H + GUI_GRID_Y;
			w = 5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class buttonAASSight: RscASSButton
		{
			idc = 1603;
			onButtonClick = "[] spawn JZASS_fnc_AASSight";

			text = "$STR_JZASS_BySight"; //--- ToDo: Localize;
			x = 16 * GUI_GRID_W + GUI_GRID_X;
			y = 6 * GUI_GRID_H + GUI_GRID_Y;
			w = 5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class buttonCTOM: RscASSButton
		{
			idc = 1604;
			onButtonClick = "[] spawn JZASS_fnc_CTOM";

			text = "$STR_JZASS_CTOM"; //--- ToDo: Localize;
			x = 22 * GUI_GRID_W + GUI_GRID_X;
			y = 16 * GUI_GRID_H + GUI_GRID_Y;
			w = 10 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class buttonRefresh: RscASSButton
		{
			idc = 1605;
			onButtonClick = "[]spawn JZASS_fnc_initASSCPInfoReflash";

			text = "$STR_JZASS_Refresh"; //--- ToDo: Localize;
			x = 28 * GUI_GRID_W + GUI_GRID_X;
			y = 17 * GUI_GRID_H + GUI_GRID_Y;
			w = 4 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class inputGrid8: RscASSEdit
		{
			idc = 1700;
			text = "12345678"; //--- ToDo: Localize;
			x = 14.5 * GUI_GRID_W + GUI_GRID_X;
			y = 4 * GUI_GRID_H + GUI_GRID_Y;
			w = 6.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {-1,-1,-1,0.7};
		};
		class checkboxChatmod: RscASSCheckBox
		{
			idc = 1701;
			onCheckedChanged = "[]spawn JZASS_fnc_initASSCPInfoReflash";
			x = 14.5 * GUI_GRID_W + GUI_GRID_X;
			y = 15 * GUI_GRID_H + GUI_GRID_Y;
			w = 1 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {-1,-1,-1,0.7};
		};
		class inputAmmo: RscASSCombo
		{
			idc = 1702;
			onLBSelChanged = "[]spawn JZASS_fnc_initASSCPInfoReflash";
			x = 8 * GUI_GRID_W + GUI_GRID_X;
			y = 9 * GUI_GRID_H + GUI_GRID_Y;
			w = 13 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {-1,-1,-1,0.7};
		};
		class inputRound: RscASSEdit
		{
			idc = 1703;
			onKillFocus = "[]spawn JZASS_fnc_initASSCPInfoReflash";

			text = "4"; //--- ToDo: Localize;
			x = 14.5 * GUI_GRID_W + GUI_GRID_X;
			y = 11 * GUI_GRID_H + GUI_GRID_Y;
			w = 6.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {-1,-1,-1,0.7};
		};
		class inputNumber: RscASSEdit
		{
			idc = 1704;
			onKillFocus = "[]spawn JZASS_fnc_initASSCPInfoReflash";

			text = "1"; //--- ToDo: Localize;
			x = 14.5 * GUI_GRID_W + GUI_GRID_X;
			y = 13 * GUI_GRID_H + GUI_GRID_Y;
			w = 6.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {-1,-1,-1,0.7};
		};
		class infoETA: RscASSText
		{
			idc = 1900;

			text = "40"; //--- ToDo: Localize;
			x = 28 * GUI_GRID_W + GUI_GRID_X;
			y = 8 * GUI_GRID_H + GUI_GRID_Y;
			w = 4 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class infoCaliber: RscASSText
		{
			idc = 1901;

			text = "152"; //--- ToDo: Localize;
			x = 28 * GUI_GRID_W + GUI_GRID_X;
			y = 9 * GUI_GRID_H + GUI_GRID_Y;
			w = 4 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class infoDispersion: RscASSText
		{
			idc = 1902;

			text = "50"; //--- ToDo: Localize;
			x = 28 * GUI_GRID_W + GUI_GRID_X;
			y = 10 * GUI_GRID_H + GUI_GRID_Y;
			w = 4 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class infoTotal: RscASSText
		{
			idc = 1903;

			text = "4"; //--- ToDo: Localize;
			x = 28 * GUI_GRID_W + GUI_GRID_X;
			y = 15 * GUI_GRID_H + GUI_GRID_Y;
			w = 4 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {-1,-1,-1,0.7};
		};
		class infoRemain: RscASSText
		{
			idc = 1904;

			text = "70"; //--- ToDo: Localize;
			x = 28 * GUI_GRID_W + GUI_GRID_X;
			y = 12 * GUI_GRID_H + GUI_GRID_Y;
			w = 4 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};

		class infoCategory: RscASSText
		{
			idc = 1905;

			text = "Smoke"; //--- ToDo: Localize;
			x = 28 * GUI_GRID_W + GUI_GRID_X;
			y = 11 * GUI_GRID_H + GUI_GRID_Y;
			w = 4 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};

	};
};