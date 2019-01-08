#pragma once
#include <SFML/Graphics.hpp>
#include "Vector2d.h"

class GameObject 
{
public:
	sf::Sprite*spr;
	inGame::Vector2d<double> position;

	//virtual void attack();
	GameObject(sf::Sprite spr, double posX, double posY);
	virtual ~GameObject();
};

