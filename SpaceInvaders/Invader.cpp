#include "Invader.h"


void Invader::attack() 
{
	//DO THINGS
}

Invader::Invader(sf::Sprite spr, double posX, double posY, double w, double h, double screenSiezeX) : 
	GameObject(spr, posX, posY, w, h), screenSize(screenSiezeX)
{
}


Invader::~Invader()
{
}
