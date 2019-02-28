#include "GameDescriptor.h"


int GameDescriptor::gameLvl;
int GameDescriptor::score;
float GameDescriptor::gameWindowW;
float GameDescriptor::gameWindowH;

void GameDescriptor::setGameDescriptot(double winH, double winW)
{
	gameWindowH = winH;
	gameWindowW = winW;
}

GameDescriptor::GameDescriptor()
{
	gameLvl = 1;
	score = 0;
}

GameDescriptor::~GameDescriptor()
{
}
