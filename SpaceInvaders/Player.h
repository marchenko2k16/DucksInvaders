#pragma once
#include "GameObject.h"
#include "IAttacking.h"
class Player :
	public GameObject, public IAttacking
{
private:
	int lives;
public:

	void attack() override;
	Player(sf::Sprite spr, double posX, double posY);
	~Player();
};

