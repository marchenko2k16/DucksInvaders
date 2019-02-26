#pragma once
#include "GameObject.h"
#include "IAttacking.h"
#include "GameDescriptor.h"
#include "Bullet.h"
#include "IMoveable.h"
#include "SFML/Audio.hpp"

class Player :
	public GameObject, public IAttacking, public IMoveable
{
private:
	int lives;
	sf::Sound* onPlayerDiedS;
	sf::Sound* onPlayerLoseLifeS;
	sf::Sound* onShoot;

	void move(float dislocation) override;
	void attack() override;
	void loadSound() override;
public:
	void update() override; //empty//
	void action(sf::Event e);

	Player(const sf::Sprite* spr, utilities::Vector2d<double> pos, double spriteW, double spriteH);
	~Player();
};

