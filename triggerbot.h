#pragma once
#include "playersList.h"
#include <thread>
class triggerbot
{
public:
	triggerbot();
	void triggerBotStart();
	playersList tempPlayerList;
	
	void setIsEnable(bool enable);
	bool getIsEnable();
	~triggerbot();
private:
	void triggerShoot();
	void triggerBotMain();
	bool isEnable;
};

