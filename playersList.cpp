#include "playersList.h"

playersList::playersList()
{
	init();
}

void playersList::init()
{
	for (int i = 0; i < 64; i++)
	{
		playersArr[i] = new player(offsets::dwEntityList + i * 0x10);
	}
}

int playersList::getMaxPlayer()
{
	return memclass.readMem<int>(memclass.gameModule + offsets::dwClientState_MaxPlayer);
}

playersList::~playersList()
{
}
