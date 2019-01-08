#include "GameObject.h"


GameObject::GameObject(sf::Sprite spr, double posX, double posY)
{
	position.x = posX;
	position.y = posY;
}

GameObject::~GameObject()
{
}
