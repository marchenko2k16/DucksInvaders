#include "GameDescriptor.h"


int GameDescriptor::gameLvl;
int GameDescriptor::score;
float GameDescriptor::gameWindowW;
float GameDescriptor::gameWindowH;

GameDescriptor::GameDescriptor()
{
	gameLvl = 1;
	score = 0;
}

GameDescriptor::~GameDescriptor()
{
}
