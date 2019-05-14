#pragma once
#include "localPlayer.h"

class playersList
{
public:
	playersList();
	void init();
	MemMan memclass;
	player *playersArr[64];
	localPlayer _lPlayer;
	int getMaxPlayer();
	~playersList();
private:
	MemMan memmen;
};

