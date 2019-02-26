#include "Wall.h"



void Wall::loadSound()
{
	onDeath = Resources::onEnemyDiedS;
}

//wall exist//
void Wall::update()
{
}

Wall::Wall(const sf::Sprite* spr, utilities::Vector2d<double> pos, double w, double h) :
	GameObject(spr, pos, w, h)
{
}

Wall::~Wall()
{
}
