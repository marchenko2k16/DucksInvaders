#pragma once
#include "GameObject.h"
#include "SFML/Audio.hpp"
#include "Resources.h"
class Wall :
	public GameObject
{
private:
	sf::Sound* onDeath;
public:
	void loadSound() override;
	void update() override;
	Wall(const sf::Sprite* spr, utilities::Vector2d<double> pos, double spriteW, double spriteH);
	~Wall();
};
