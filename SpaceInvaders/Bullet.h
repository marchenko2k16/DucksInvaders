#pragma once
#include "GameObject.h"

class Bullet :
	public GameObject
{
public:
	enum class BulletType{ENEMY_BULLET, PLAYER_BULLET};
	Bullet(sf::Sprite spr, double posX, double posY);
	~Bullet();
};

