#include "bunnyhop.h"



bunnyhop::bunnyhop()
{
}

void bunnyhop::startBunnyHop()
{
	if (isEnable)
	{
		std::thread t1(&bunnyhop::bunnyHopMain, this);
		t1.join();
	}
		
}

void bunnyhop::setIsEnable(bool enable)
{
	lPlayer.setJumpState(0);
	if (enable)
		this->isEnable = true;
	else
	{
		this->isEnable = false;
		
	}
}

bool bunnyhop::getIsEnable()
{
	return this->isEnable;
}

void bunnyhop::bunnyHopMain()
{
	
	lPlayer.setJumpState(4);

	while (true)
	{
		int flag = lPlayer.getFlags();
		if (flag == flags::FL_IN_AIR_STAND || flag == flags::FL_IN_AIR_MOVING_TO_STAND || flag == flags::FL_IN_AIR_MOVING_TO_CROUCH || flag == flags::FL_IN_AIR_CROUCHED)
		{
			Sleep(1);
		}
		else
		{
			lPlayer.setJumpState(5);
			break;
		}
	}
	


}

bunnyhop::~bunnyhop()
{
}
