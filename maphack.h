#pragma once
#include "playersList.h"
#include <thread>
class maphack
{
public:
	maphack();
	playersList tempPlayerList;
	~maphack();
	void startMapHack();
	void setIsEnable(bool enable);
	bool getIsEnable();
private:
	void mapHackMain();
	bool isEnable = true;
};

