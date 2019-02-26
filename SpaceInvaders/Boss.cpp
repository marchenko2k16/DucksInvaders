#include "Boss.h"


void Boss::move(float dislocation)
{
	position.x += dislocation;
}

void Boss::loadSound()
{
	sf::Sound* onDeath = Resources::onEnemyDiedS;//find another sound
	sf::Sound* onDamaged = Resources::onPlayerLoseLifeS;//find another sound
	sf::Sound* onAttack = Resources::onShootS; 
}

void Boss::update()
{
	if (Engine::elapsed == true && Invader::moveDir == MovementState::RIGHT)
	{
		position.x += 10;
	}
	else if (Engine::elapsed == true && Invader::moveDir == MovementState::LEFT)
	{
		position.x -= 10;
	}

	if (Invader::moveDir == MovementState::LEFT && position.x <= spriteWidth / 2)
	{
		Invader::moveDir = MovementState::RIGHT;
		position.y += 10;
	}
	else if (Invader::moveDir == MovementState::RIGHT && position.x >= GameDescriptor::gameWindowW - spriteWidth/2)
	{
		Invader::moveDir = MovementState::LEFT;
		position.y += 10;
	}


}

Boss::Boss(const sf::Sprite* spr, utilities::Vector2d<double> pos, double w, double h) :
	GameObject(spr, pos, w, h)
{

}

Boss::~Boss()
{
}
