#include "wallhack.h"



wallhack::wallhack()
{

}

void wallhack::wallHackMain()
{


	DWORD glowManagerBase = memclass.readMem<DWORD>(memclass.gameModule + offsets::dwGlowObjectManager);
	for (int i = 0; i < 64; i++)
	{
		if(!tempPlayerList.playersArr[i]->getDormant() && tempPlayerList.playersArr[i]->isAlive())
		{
			DWORD addr = glowManagerBase + (tempPlayerList.playersArr[i]->getGlowIndex() * 0x38 + 4);
			glow_t originalGlowObj = memclass.readMem<glow_t>(addr);
			originalGlowObj.color = tempPlayerList.playersArr[i]->getTeam() == tempPlayerList._lPlayer.getTeam() ? Color(0, 0, 0, 0) : Color(1, 0, 0, 1);
			originalGlowObj.m_bRenderWhenOccluded = true;
			memclass.writeMem<glow_t>(addr, originalGlowObj);

		}
	}
}

void wallhack::wallHackStart()
{
	if (isEnable)
	{
		std::thread wallHackThread(&wallhack::wallHackMain, this);
		wallHackThread.join();
	}
}

void wallhack::setIsEnable(bool enable)
{
	if (enable)
		this->isEnable = true;
	else
		this->isEnable = false;
}

bool wallhack::getIsEnable()
{
	return this->isEnable;
}


wallhack::~wallhack()
{
}
