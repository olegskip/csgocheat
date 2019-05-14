#include "maphack.h"



maphack::maphack()
{
}

void maphack::mapHackMain()
{
	for (int i = 0; i < 32; i++)
	{
		if (!tempPlayerList.playersArr[i]->isAlive())
			continue;
		if (tempPlayerList.playersArr[i]->playerAddr == 0)
			continue;
		tempPlayerList.playersArr[i]->setSpotted(true);
	}
	Sleep(5);
}

void maphack::startMapHack()
{
	if (isEnable)
	{
		std::thread mapHackThread(&maphack::mapHackMain, this);
		mapHackThread.join();
	}
}

void maphack::setIsEnable(bool enable)
{
	if (enable)
		this->isEnable = true;
	else
		this->isEnable = false;
}

bool maphack::getIsEnable()
{
	return this->isEnable;
}

maphack::~maphack()
{
}
