#pragma once
#include "GameObject.h"
#include "IAttacking.h"



class Player :
	public GameObject, public IAttacking
{
private:
	int lives{};
	double screenSize;
public:

	void update() override;
	void move(sf::Event e);

	void attack() override;
	Player(sf::Sprite spr, double posX, double posY, double spriteW, double spriteH, double screenSiezeX);
	~Player();
};

