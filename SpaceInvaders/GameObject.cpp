#include "GameObject.h"

GameObject::GameObject(const sf::Sprite* _spr, utilities::Vector2d<double> pos, double w, double h)
{	
	spr = *_spr;
	position = pos;
	spriteWidth = w;
	spriteHeight = h;
	spr.setPosition(position.x, position.y);
	spr.setOrigin(sf::Vector2f(w / 2, h / 2));
}

GameObject::~GameObject()
{
}
