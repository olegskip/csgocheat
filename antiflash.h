#pragma once
#include "MemMan.h"
#include "offsets.h"
#include <thread>
#include <iostream>
#include "localPlayer.h"
class antiflash
{
public:
	antiflash();
	//MemMan memclass;
	localPlayer lPlayer;
	void startAntiFlash();
	void setIsEnable(bool enable);
	bool getIsEnable();
	
	~antiflash();
protected:
	bool isEnable = false;
	void antiFlashMain();
	int flashDur = 0;
};


