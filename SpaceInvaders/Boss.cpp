#include "Boss.h"


Boss::Boss(sf::Sprite spr, double posX, double posY, double w, double h, double screenSizeX) : 
	GameObject(spr, posX, posY, w, h), screenSize(screenSizeX)
{
}

Boss::~Boss()
{
}
