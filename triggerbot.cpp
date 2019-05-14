#include "triggerbot.h"



triggerbot::triggerbot()
{
}

void triggerbot::triggerBotMain()
{
	//tempPlayerList
			//	if (GetAsyncKeyState(0x4) & 0x8000)
			//	if (EntList->local.GetCrossId() > 0 && EntList->local.GetCrossId() < 64)
				//	if (EntList->local.GetTeam() != EntList->players[EntList->local.GetCrossId()].GetTeam())
						//Shoot();

			//Sleep(50);
	
	//cout << tempPlayerList.playersArr[tempPlayerList._lPlayer.getCrossId()]->getTeam()
	//cout << tempPlayerList.playersArr[tempPlayerList._lPlayer.getCrossId()]->getCurrentHP() << endl << endl;
	//Sleep(300);
	if (tempPlayerList._lPlayer.getCrossId() > 0 && tempPlayerList._lPlayer.getCrossId() < 64)
	{
			triggerShoot();
			//cout << "TESTING" << endl;
	}
		Sleep(1);
}



void triggerbot::triggerShoot()
{
	tempPlayerList._lPlayer.setAttackState(1);
	Sleep(5);
	tempPlayerList._lPlayer.setAttackState(0);
}

void triggerbot::setIsEnable(bool enable)
{
	tempPlayerList._lPlayer.setAttackState(0);
	
	if (enable)
	{
		cout << "\a" << endl;
		tempPlayerList.init();
		this->isEnable = true;
	}
	else
		this->isEnable = false;
}

bool triggerbot::getIsEnable()
{
	return this->isEnable;
}


void triggerbot::triggerBotStart()
{
	if (isEnable)
	{
		std::thread triggerThread(&triggerbot::triggerBotMain, this);

		triggerThread.join();
	}
}

triggerbot::~triggerbot()
{
}
