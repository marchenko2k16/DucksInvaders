#include <iostream>
#include"Engine.h"


int main()
{
	//sf::RenderWindow gameWindow(sf::VideoMode(1000, 1000), "SPACE INVADERS");
	//TestWindow* tw = new TestWindow(gameWindow);
	//tw->functionOne();
	//tw->functionTwo();
	sf::RenderWindow gameWindow(sf::VideoMode(1000, 1000), "SPACE INVADERS");
	Engine engine;
	engine.initGame(gameWindow);
	
	engine.initGameObjects();
	engine.preview();
	engine.loop();

	std::cin.get();
	return 0;
}
