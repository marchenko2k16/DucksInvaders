#pragma once
#include "GameObject.h"
class Wall :
	public GameObject
{
public:
	Wall(sf::Sprite spr, double posX, double posY, double spriteW, double spriteH);
	~Wall();
};

