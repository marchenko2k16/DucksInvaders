#include "Player.h"

void Player::update()
{
}

//rewrite attack should not appear in move
void Player::move(sf::Event e)
{
	switch (e.key.code)
	{
	case (sf::Keyboard::Left):
		if(position.x > spriteWidth / 2)
		position.x -= 10;
		break;
	case (sf::Keyboard::Right):
		if(position.x < screenSize - spriteWidth)
		position.x += 10;
		break;
	case (sf::Keyboard::Space):
		attack();
		break;
	default:
		break;
	}
}

void Player::attack()
{
	//DO STUFF
}

Player::Player(sf::Sprite spr, double posX, double posY, double w, double h, double screenSiezeX) :
	GameObject(spr, posX, posY, w, h), screenSize(screenSiezeX)
{
}


Player::~Player()
= default;
