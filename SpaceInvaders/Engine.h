#pragma once
#include "GameObject.h"
#include <SFML/Graphics.hpp>
#include "Resources.h"
#include <vector>
#include "GameDescriptor.h"


class Engine
{
public:
	static std::vector<GameObject*> gameObjects;
	
	static sf::Clock clock;
	double deltaTime;
	double previousTime;



	Resources resources;
	static sf::RenderWindow* gameWindow;

	void typeTextLetterByLetter(std::string txt);
	void lvlStarted();//preview inscription level + %lvlNumber% 
	
	void initGame(sf::RenderWindow* rw);
	void initGameObjects();
	void preview();

	void loop();


	Engine();
	~Engine();
};

