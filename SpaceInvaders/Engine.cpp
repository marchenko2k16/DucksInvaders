#include "Engine.h"

sf::RenderWindow* Engine::gameWindow;

void Engine::initGame(sf::RenderWindow& rw)
{
	gameWindow = &rw;
}

Engine::Engine()
{
}


Engine::~Engine()
{
}
