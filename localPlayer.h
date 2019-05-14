#pragma once
#include "player.h"
#include "offsets.h"
#include <thread>
class localPlayer : public player
{
public:
	localPlayer();
	void setJumpState(int state);
	void setAttackState(int state);
	void setFlashDur(int i);
	int getFlags();
	int getCrossId();
	void noSmoke();
	~localPlayer();

	//DWORD localPlayerId;
	
	
};

