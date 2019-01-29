#pragma once
#include "GameObject.h"

class Bullet :
	public GameObject
{
public:
	Bullet(sf::Sprite spr, double posX, double posY, double spriteW, double spriteH);
	~Bullet();
};

