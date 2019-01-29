#pragma once
#include <SFML/Graphics.hpp>
#include "Vector2d.h"
#include <SFML/Graphics.hpp>


class GameObject 
{
public:
	sf::Sprite*spr;
	inGame::Vector2d<double> position;
	double spriteWidth;
	double spriteHeight;
	
	virtual void update() = 0;
	GameObject(sf::Sprite spr, double posX, double posY, double spriteW, double spriteH);
	virtual ~GameObject();
};
