#pragma once
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

//split this class as TextureLoader and SoundLoader


class Resources
{
public:
	static sf::Music* backgroundPreviewM;
	static sf::Music* backgroundGameM;

	static sf::Sound* onShootS;
	static sf::Sound* onEnemyDiedS;
	static sf::Sound* onPlayerDiedS;
	static sf::Sound* onPlayerLoseLifeS;

	static void loadMusic();

	static sf::Sprite* hypnoticCircle;
	static sf::Sprite* playerSpr;
	static sf::Sprite* enemySpr;
	static sf::Sprite* bulletSpr;
	static sf::Sprite* bossSpr;
	static sf::Sprite* backgroundSpr;

	static void loadTextures();

	static sf::Font font8Bit;

	static void loadFonts();

	Resources();
	~Resources();
};

