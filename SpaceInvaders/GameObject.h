#pragma once
#include <SFML/Graphics.hpp>
#include "Vector2d.h"

class GameObject 
{
public:
	sf::Sprite spr;
	utilities::Vector2d<double> position;

	double spriteWidth;
	double spriteHeight;
	
	virtual void update() = 0;
	virtual void loadSound() = 0;
	GameObject(const sf::Sprite* spr, utilities::Vector2d<double> pos, double spriteW, double spriteH);
	virtual ~GameObject();
};
