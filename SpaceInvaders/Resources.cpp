#include "Resources.h"

 sf::Music* Resources::backgroundPreviewM;
 sf::Music* Resources::backgroundGameM;

 sf::Sound* Resources::onShootS;
 sf::Sound* Resources::onEnemyDiedS;
 sf::Sound* Resources::onPlayerDiedS;
 sf::Sound* Resources::onPlayerLoseLifeS;
 
 sf::Sprite* Resources::hypnoticCircle;	 
 sf::Sprite* Resources::wallSpr;
 sf::Sprite* Resources::playerSpr;
 sf::Sprite* Resources::enemySpr;
 sf::Sprite* Resources::bulletSpr;
 sf::Sprite* Resources::bossSpr;
 sf::Sprite* Resources::backgroundSpr;
 
 sf::Font Resources::font8Bit;

void Resources::loadMusic()
{
	backgroundPreviewM = new sf::Music();
	backgroundPreviewM->setLoop(true);
	const char* backgroundPreviewPath = R"(data\audio\music\preview_background_music.wav)";
	backgroundPreviewM->openFromFile(backgroundPreviewPath);
	backgroundPreviewM->setVolume(33);

	backgroundGameM = new sf::Music();
	backgroundGameM->setLoop(true);
	backgroundGameM->openFromFile(R"(data\audio\music\background_music.wav)");
	backgroundGameM->setVolume(33);

	sf::SoundBuffer shootBuffer;
	shootBuffer.loadFromFile(R"(data\audio\sound\shoot_sound.wav)");
	onShootS = new sf::Sound();
	onShootS->setBuffer(shootBuffer);

	sf::SoundBuffer onEnemyDeathBuffer;
	onEnemyDeathBuffer.loadFromFile(R"(data\audio\sound\on_enemy_died.wav)");
	onEnemyDiedS = new sf::Sound();
	onEnemyDiedS->setBuffer(onEnemyDeathBuffer);
	
	sf::SoundBuffer onPlayerDiedBuffer;
	onPlayerDiedBuffer.loadFromFile(R"(data\audio\sound\on_player_died.wav)");
	onPlayerDiedS = new sf::Sound();
	onPlayerDiedS->setBuffer(onPlayerDiedBuffer);
	
	sf::SoundBuffer onPlayerLoseLifeBuffer;
	onPlayerLoseLifeBuffer.loadFromFile(R"(data\audio\sound\on_player_damaged.wav)");
	onPlayerLoseLifeS = new sf::Sound();
	onPlayerLoseLifeS->setBuffer(onPlayerLoseLifeBuffer);

}

void Resources::loadTextures()
{
	sf::Texture* hypnoticT = new sf::Texture();
	hypnoticT->loadFromFile("data\\images\\load_circle.png");
	hypnoticCircle = new sf::Sprite(*hypnoticT);

	sf::Texture* wallT = new sf::Texture();
	wallT->loadFromFile("data\\images\\wall.png");
	wallSpr = new sf::Sprite(*wallT);

	sf::Texture* playerT = new sf::Texture();
	playerT->loadFromFile("data\\images\\new_ufo.png");
	playerSpr = new sf::Sprite(*playerT);

	sf::Texture* enemyT = new sf::Texture();
	enemyT->loadFromFile("data\\images\\two_in_1.jpg");
	enemySpr = new sf::Sprite(*enemyT);

	sf::Texture* bulletT = new sf::Texture();
	bulletT->loadFromFile("data\\images\\16x16bullet.png");
	bulletSpr = new sf::Sprite(*bulletT);
	
	sf::Texture* bossT = new sf::Texture();
	bossT->loadFromFile("data\\images\\duck_invader.png");
	bossSpr = new sf::Sprite(*bossT);

	sf::Texture* backgroundT = new sf::Texture();
	backgroundT->loadFromFile("data\\images\\background.png");
	backgroundT->setRepeated(true);
	backgroundSpr = new sf::Sprite(*backgroundT);

	backgroundSpr->setTextureRect(sf::IntRect(0, 0, 1000, 1000));//hard code 
}

void Resources::loadFonts()
{
	font8Bit.loadFromFile("data\\fonts\\Pixel-Miners.otf");
}

Resources::Resources()
{
}


Resources::~Resources()
{
}
