#pragma once
#include "GameObject.h"
#include "IAttacking.h"

class Boss :
	public GameObject, public IAttacking
{
private:
	double screenSize;
public:
	Boss(sf::Sprite spr, double posX, double posY, double spriteW, double spriteH, double screenSiezeX);
	~Boss();
};

