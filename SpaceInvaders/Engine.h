#pragma once
#include "GameObject.h"
#include <SFML/Graphics.hpp>
#include "Decoration.h"
#include <vector>


class Engine
{
public:
	static sf::Clock clock;
	double deltaTime;
	double previousTime;



	Decoration decorationSnippets;
	static sf::RenderWindow* gameWindow;


	void initGame(sf::RenderWindow& rw);
	void loadScreen();
	void loop();


	Engine();
	~Engine();
};

