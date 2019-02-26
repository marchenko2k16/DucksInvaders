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

void Player::action(sf::Event e)
{
	switch (e.key.code)
	{
	case (sf::Keyboard::Left):
		if (position.x > spriteWidth / 2)
			move(-10);
		break;
	case (sf::Keyboard::Right):
		if (position.x < GameDescriptor::gameWindowW - spriteWidth/2)
			move(10);
		break;
	case (sf::Keyboard::Space):
		attack();
		break;
	default:
		break;
	}
}

void Player::move(float dislocation)
{
	position.x += dislocation;
}

void Player::attack()
{
	Engine::addObject(new Bullet(Resources::playerSpr, utilities::Vector2d<double>(position.x, position.y - spriteHeight / 2),
		Resources::playerSpr->getGlobalBounds().width,
		Resources::playerSpr->getGlobalBounds().height));
}

Player::Player(const sf::Sprite* spr, utilities::Vector2d<double> pos, double w, double h) :
	GameObject(spr, pos, w, h)
{
}


Player::~Player()
= default;
