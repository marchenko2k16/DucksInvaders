#pragma once
#include "GameObject.h"
#include "IMoveable.h"

class Bullet :
	public GameObject//, public IMoveable
{
public:
	void move() ;
	void update() override;
	void loadSound() override;

	Bullet(const sf::Sprite* spr, utilities::Vector2d<double> pos, double spriteW, double spriteH);
	~Bullet();
};

