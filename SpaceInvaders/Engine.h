#pragma once
#include "GameObject.h"
#include <SFML/Graphics.hpp>
#include "Resources.h"
#include <vector>
#include <iostream>
#include "Player.h"
#include "Invader.h"

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

	static sf::RenderWindow* gameWindow;

	void typeTextLetterByLetter(std::string txt, float posX, float posY);

	void initGame(sf::RenderWindow* rw);
	void initGameObjects();
	void preview();

	static void addObject(GameObject * additionalObj);
	static void deleteObject();
	void clearMemory();

	void loop();


	Engine();
	~Engine();
};

