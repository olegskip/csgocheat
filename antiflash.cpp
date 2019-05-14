#include "antiflash.h"



antiflash::antiflash()
{

	//int procid = memclass.getprocess("csgo.exe");
	//vars::gamemodule = memclass.getmodule(procid, "client_panorama.dll");
	//vars::localplayer = memclass.readmem<dword>(vars::gamemodule + offsets::dwlocalplayer);

	//if (vars::localplayer == null)
	//	while (vars::localplayer == null)
	//		vars::localplayer = memclass.readmem<dword>(vars::gamemodule + offsets::dwlocalplayer);
}

void antiflash::antiFlashMain()
{
	lPlayer.setFlashDur(0);	
}

void antiflash::setIsEnable(bool enable)
{
	if (enable)
		this->isEnable = true;
	else
		this->isEnable = false;
}

bool antiflash::getIsEnable()
{
	return this->isEnable;
}

void antiflash::startAntiFlash()
{
	if (isEnable)
	{
		std::thread flashThread(&antiflash::antiFlashMain, this);
		flashThread.join();
	}
}

antiflash::~antiflash()
{
}
