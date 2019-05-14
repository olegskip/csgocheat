#pragma once
#include "playersList.h"
#include "artstructs.h"
class wallhack
{
public:
	wallhack();
	MemMan memclass;
	playersList tempPlayerList;
	void wallHackStart();
	void setIsEnable(bool enable);
	bool getIsEnable();
	~wallhack();
private:
	bool isEnable = false;
	void wallHackMain();
};

