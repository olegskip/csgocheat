#include "localPlayer.h"


localPlayer::localPlayer() : player(offsets::dwLocalPlayer)
{
}

void localPlayer::setJumpState(int state)
{
	memclass.writeMem<int>(memclass.gameModule + offsets::dwForceJump, state);
}

void localPlayer::noSmoke()
{
}

void localPlayer::setAttackState(int state)
{
	memclass.writeMem<int>(memclass.gameModule + offsets::dwForceAttack, state);
}

void localPlayer::setFlashDur(int i)
{
	memclass.writeMem<int>(playerAddr + offsets::m_flFlashDuration, 0);
}

int localPlayer::getCrossId()
{
	return memclass.readMem<int>(playerAddr + offsets::m_iCrosshairId);
}

int localPlayer::getFlags()
{
	return memclass.readMem<int>(playerAddr + offsets::m_fFlags);
}

localPlayer::~localPlayer()
{
}
