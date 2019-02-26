#pragma once
#include "GameObject.h"
#include "IAttacking.h"
#include <SFML/Audio/Sound.hpp>
#include "Resources.h"
#include "IMoveable.h"
#include "Invader.h"
#include "GameDescriptor.h"
#include "Engine.h"

class Boss :
	public GameObject, public IAttacking, public IMoveable
{
protected:
	sf::Sound* onDeath;
	sf::Sound* onDamaged;
	sf::Sound* onAttack;

	void move(float disloc) override;
public:
	void loadSound() override;
	void update() override;
	Boss(const sf::Sprite* spr, utilities::Vector2d<double> pos, double spriteW, double spriteH);
	~Boss();
};
