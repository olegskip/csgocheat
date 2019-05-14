#include "player.h"



player::player(DWORD adr)
{
	//cout << "adr = " << adr << endl;
	setPlayerAddr(adr);



	//cout << "playerAddr = " << playerAddr << endl;
	//cout << "ADR = " << curren << endl;
	//cout << "HP = " << getCurrentHP() << endl;
	
	//cout << "player = " << playerAddr << endl;
	//cout << playerAddr << endl;
	//teamId = getTeamId();
	//cout << "Player = " << playerAddr << endl;
	//cout << teamId << endl;
	
}

int player::getIndex()
{
	return memclass.readMem<int>(playerAddr + offsets::dwWeaponTableIndex);
}

void player::setPlayerAddr(DWORD adr)
{
	playerAddr = memclass.readMem<DWORD>(memclass.gameModule + adr);
}

int player::getTeam()
{
	return memclass.readMem<int>(playerAddr + offsets::m_iTeamNum);
}

bool player::getDormant()
{
	return memclass.readMem<int>(playerAddr + offsets::m_bDormant);
}

int player::getCurrentHP()
{
	return memclass.readMem<int>(playerAddr + 0x100);
}

DWORD player::getTeamId()
{
	return playerAddr = memclass.readMem<DWORD>(playerAddr + offsets::m_iTeamNum);
}

bool player::getSpotted()
{
	return memclass.readMem<int>(playerAddr + offsets::m_bSpotted);
}

void player::setSpotted(bool state)
{
	memclass.writeMem<int>(playerAddr + offsets::m_bSpotted, state);
}

int player::getFlashDur()
{
	return memclass.readMem<int>(playerAddr + offsets::m_flFlashDuration);
}

int player::getGlowIndex()
{
	return memclass.readMem<int>(playerAddr + offsets::m_iGlowIndex);
}

bool player::isAlive()
{
	if (getCurrentHP() < 0 || getCurrentHP() > 100)
		return false;
	else
		return true;
}



player::~player()
{
}
