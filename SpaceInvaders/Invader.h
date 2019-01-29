#pragma once
#include "GameObject.h"
#include "IAttacking.h"


enum class MovementState { LEFT, RIGHT};
class Invader :
	public GameObject, public IAttacking
{
private:
	double screenSize;
public:
	static MovementState moveDir;

	void attack() override;
	Invader(sf::Sprite spr, double posX, double posY, double spriteW, double spriteH, double screenSiezeX);
	~Invader();
};

