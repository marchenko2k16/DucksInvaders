#include "Invader.h"

//
#include <iostream>
//

MovementState Invader::moveDir;

void Invader::update()
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
		std::cout << "INVADER MOVED LEFT\n";
	}
	else if (Invader::moveDir == MovementState::RIGHT && position.x >= GameDescriptor::gameWindowW - spriteWidth / 2)
	{
		Invader::moveDir = MovementState::LEFT;
		position.y += 10;
	}


}

void Invader::loadSound()
{
	sf::Sound* onDeath = Resources::onEnemyDiedS;//find another sound
	sf::Sound* onAttack = Resources::onShootS;
}

void Invader::move(float dislocation)
{
	position.x += dislocation;
}

void Invader::attack()
{
	//DO THINGS
}

Invader::Invader(const sf::Sprite* spr, utilities::Vector2d<double> pos, double w, double h) :
	GameObject(spr, pos, w, h)
{
}


Invader::~Invader()
{
}
