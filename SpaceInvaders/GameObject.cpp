#include "GameObject.h"

GameObject::GameObject(sf::Sprite spr, double posX, double posY, double w, double h)
{	
	position.x = posX;
	position.y = posY;
	spriteWidth = w;
	spriteHeight = h;
}

GameObject::~GameObject()
{
}
