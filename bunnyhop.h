#pragma once
#include "localPlayer.h"
#include <thread>
class bunnyhop
{
public:
	bunnyhop();
	MemMan memman;
	localPlayer lPlayer;

	void bunnyHopMain();
	void startBunnyHop();
	void setIsEnable(bool enable);
	bool getIsEnable();
	~bunnyhop();
private:
	
	bool isEnable = false;
};

