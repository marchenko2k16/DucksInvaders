#pragma once
#include "GameObject.h"
#include "IAttacking.h"


class Invader :
	public GameObject, public IAttacking
{
public:
	static bool boundsTouched; //IF ANY OF INVADER CLOSE ENOUGH TO BOUNDS - STEP DOWN AND CHANGE MOVE DIRECTION
	enum class Direction { LEFT, RIGHT };
	void attack() override;
	Invader(sf::Sprite spr, double posX, double posY);
	~Invader();
};

