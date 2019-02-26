#pragma once
#include "GameObject.h"

class GameDescriptor
{
public:
	static int gameLvl;
	static int score;

	static float gameWindowH;
	static float gameWindowW;

	GameDescriptor();
	~GameDescriptor();
};

