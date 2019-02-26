#pragma once
#include "GameObject.h"
#include "IAttacking.h"
#include "IMoveable.h"
#include "SFML/Audio.hpp"
#include "Resources.h"
#include "GameDescriptor.h"
#include "Engine.h"

enum class MovementState { LEFT, RIGHT };

class Invader :
	public GameObject, public IAttacking, public IMoveable
{
private:
	sf::Sound* onDeath;
	sf::Sound* onShoot;

	void move(float dislocation) override;
	void attack() override;
	void loadSound() override;
public:
	static MovementState moveDir;
	void update() override;

	Invader(const sf::Sprite* spr, utilities::Vector2d<double> pos, double spriteW, double spriteH);
	~Invader();
};

