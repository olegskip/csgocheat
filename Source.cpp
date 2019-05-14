#include <Windows.h>
#include <iostream>
#include "antiflash.h"
#include <TlHelp32.h>
#include "player.h"
#include "localPlayer.h"
#include "bunnyhop.h"
#include "maphack.h"
#include "triggerbot.h"
#include "wallhack.h"
int main()
{
	bunnyhop bunny;
	localPlayer p;
	antiflash flash;
	maphack map;
	triggerbot trigger;
	wallhack wall;
	//map.startMapHack();
	//player testing(1492018880);
	//cout << "H = " << testing.getPlayerHealth();
	cout << "start!" << endl;
	//p.setCurrentClanTag();
	while (true)
	{
		//cout << "1`" << endl;
		bunny.startBunnyHop();
		wall.wallHackStart();
		//
		for (int i = 0; i < 255; i++)
		{
			int state = GetAsyncKeyState(i);
			if (state == 1 || state == -32767)
			{
				if (i == 18)
					bunny.setIsEnable(!bunny.getIsEnable());
				else if (i == 34)
					flash.setIsEnable(!flash.getIsEnable());
				else if (i == 112)
					trigger.setIsEnable(!trigger.getIsEnable());
				else if (i == 113)
					map.setIsEnable(!map.getIsEnable());
				else if (i == 114)
					wall.setIsEnable(!wall.getIsEnable());
			}

		}
		trigger.triggerBotStart();
		map.startMapHack();
		flash.startAntiFlash();
	}

	return 0;
}