#include "Boss.h"


void Boss::moveHorizontal(float dislocation) //moveX
{
	position.x += dislocation;
	spr.setPosition(position.x, position.y);
}

void Boss::moveVertical(float dislocation)
{
	position.y += dislocation;
	spr.setPosition(position.x, position.y);
}

void Boss::attack()
{
	//attack char with reticle
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
		moveHorizontal(10); //moveX
			
	}
	else if (Engine::elapsed == true && Invader::moveDir == MovementState::LEFT)
	{
		moveHorizontal(-10);
	}

	if (Invader::moveDir == MovementState::LEFT && position.x <= spriteWidth / 2)
	{
		Invader::moveDir = MovementState::RIGHT;
		moveVertical(10);
	}
	else if (Invader::moveDir == MovementState::RIGHT && position.x >= GameDescriptor::gameWindowW - spriteWidth/2)
	{
		Invader::moveDir = MovementState::LEFT;
		moveVertical(10);
	}

}

Boss::Boss(const sf::Sprite* spr, utilities::Vector2d<double> pos, double w, double h) :
	GameObject(spr, pos, w, h)
{

}

Boss::~Boss()
{
}
