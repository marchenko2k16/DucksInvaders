#pragma once
#include "GameObject.h"

class GameDescriptor
{
public:
	static void setGameDescriptot(double winH, double winW);

	static int gameLvl;
	static int score;

	static float gameWindowH;
	static float gameWindowW;

	GameDescriptor();
	~GameDescriptor();
};

