#pragma once
#include <SFML/Audio.hpp>

class Decoration
{
public:
	sf::Music background;
	sf::Sound onEnemyDeath;
	sf::Sound onPlayerLoseLife;
	sf::Sound onPlayerDeath;
	sf::Sound onShoot;
	void loadMusic();
	Decoration();
	~Decoration();
};

