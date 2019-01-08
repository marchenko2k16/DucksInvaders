#pragma once
#include "GameObject.h"
class Boss :
	public GameObject
{
public:
	Boss(sf::Sprite spr, double posX, double posY);
	~Boss();
};

