#pragma once
#include "GameObject.h"
#include <SFML/Graphics.hpp>
#include "Resources.h"
#include <vector>
#include <iostream>
#include "Player.h"
#include "Invader.h"
#include "ParseBinary.h"
#include "Wall.h"
#include "Boss.h"

class Engine
{
public:
	static sf::Clock clock;
	static sf::Time time;
	static std::vector<GameObject*> gameObjects;
	static Player* player;
	static bool elapsed;

	double deltaTime;
	double previousTime;

	static void isElapsed();
	void resetElapsed();

	sf::RenderWindow* gameWindow;

	void typeTextLetterByLetter(std::string txt, float posX, float posY);

	void initGame(sf::RenderWindow& rw);
	void initGameObjects();
	void preview();
	void loop();

	static void addObject(GameObject * additionalObj);
	static void deleteObject();
	void clearMemory();



	Engine();
	~Engine();
};

