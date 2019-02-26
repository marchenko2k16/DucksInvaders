#include "GameObject.h"

GameObject::GameObject(const sf::Sprite* spr, utilities::Vector2d<double> pos, double w, double h)
{	
	position = pos;
	spriteWidth = w;
	spriteHeight = h;
}

GameObject::~GameObject()
{
}
