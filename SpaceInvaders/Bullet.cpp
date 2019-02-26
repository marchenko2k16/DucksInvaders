#include "Bullet.h"


void Bullet::move()
{
	--position.y;
}

void Bullet::update()
{
	move();
}

void Bullet::loadSound()
{
}

Bullet::Bullet(const sf::Sprite* spr, utilities::Vector2d<double> pos, double w, double h) :
	GameObject(spr, pos, w, h)
{
}


Bullet::~Bullet()
{
}
