#pragma once
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

class Resources
{
public:
	sf::Music* backgroundPreviewM;
	sf::Music* backgroundGameM;

	sf::Sound* onShootS;
	sf::Sound* onEnemyDiedS;
	sf::Sound* onPlayerDiedS;
	sf::Sound* onPlayerLoseLifeS;
	void loadMusic();

	sf::Sprite* hypnoticCircle;
	sf::Sprite* playerSpr;
	sf::Sprite* enemySpr;
	sf::Sprite* bulletSpr;
	sf::Sprite* bossSpr;
	sf::Sprite* backgroundSpr;
	void loadTextures();

	sf::Font font8Bit;
	void loadFonts();

	Resources();
	~Resources();
};

