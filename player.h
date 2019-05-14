#pragma once
#include "MemMan.h"
#include <iostream>
#include "offsets.h"
using namespace std;
class player
{
public:
	player(DWORD adr);
	
	void setPlayerAddr(DWORD adr);
	~player();

	
	
	int getFlashDur();
	int getCurrentHP();
	int getGlowIndex();
	bool getSpotted();
	bool getDormant();
	void setSpotted(bool state);
	int getTeam();

	bool isAlive();
	int getIndex();
	DWORD playerAddr;
	DWORD teamId = NULL;
protected:
	MemMan memclass;
	DWORD getTeamId();
	//othervars vars;
	int health = 0;
	int glowIndex = 0;
	int flashDuration = 0;


	//DWORD gameModule;
	//DWORD localGameModule = vars.gameModule();
	
};