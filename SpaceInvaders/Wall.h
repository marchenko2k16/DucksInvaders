#pragma once
#include "GameObject.h"
class Wall :
	public GameObject
{
public:
	Wall(sf::Sprite spr, double posX, double posY);
	~Wall();
};

