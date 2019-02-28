#include "Player.h"
#include "Engine.h"

void Player::update()
{	
}

void Player::loadSound()
{
	onPlayerDiedS = Resources::onPlayerDiedS;
	onPlayerLoseLifeS = Resources::onPlayerLoseLifeS;
	onShoot = Resources::onShootS;
}

void Player::moveHorizontal(float dislocation) //moveX
{
	position.x += dislocation;
	spr.setPosition(position.x, position.y);
}

void Player::moveVertical(float dislocation)
{
	position.y += dislocation;
	spr.setPosition(position.x, position.y);
}

void Player::action(sf::Event e)
{
	if (e.type == e.KeyPressed)
	{
		switch (e.key.code)
		{
		case (sf::Keyboard::Left):
			if (position.x > spriteWidth / 2)
			{
				moveHorizontal(-10);
			}
			break;
		case (sf::Keyboard::Right):
			if (position.x < GameDescriptor::gameWindowW - spriteWidth / 2)
			{
				moveHorizontal(10);
			}
			break;
		case (sf::Keyboard::Space):
			attack();
			break;
		default:
			break;
		}

	}
}


void Player::attack()
{
	Engine::addObject(new Bullet(Resources::bulletSpr, utilities::Vector2d<double>(position.x, position.y - spriteHeight / 2),
		Resources::bulletSpr->getGlobalBounds().width,
		Resources::bulletSpr->getGlobalBounds().height));
	Resources::onShootS->play();
	/*FIX THIS ONE*/
}

Player::Player(const sf::Sprite* spr, utilities::Vector2d<double> pos, double w, double h) :
	GameObject(spr, pos, w, h)
{
}


Player::~Player() 
{

};