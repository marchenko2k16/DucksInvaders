#include "Engine.h"
#include <iostream>
#include "Player.h"
#include "Invader.h"


sf::RenderWindow* Engine::gameWindow;
sf::Clock Engine::clock;
std::vector<GameObject*> Engine::gameObjects;

void Engine::typeTextLetterByLetter(std::string txt)
{

}

void Engine::initGame(sf::RenderWindow* rw)
{
	gameWindow = rw;
	sf::Vector2u windowSize = gameWindow->getSize();
	resources.loadTextures();
	resources.loadMusic();
	resources.loadFonts();
	GameDescriptor gameInfo;
}

void Engine::initGameObjects()
{
	GameObject* player = new Player(*resources.playerSpr, 500, 950, 
		resources.playerSpr->getGlobalBounds().width, 
		resources.playerSpr->getGlobalBounds().height,
		1000);
	gameObjects.push_back(player);
	for(int i = 0; i < 6; i++)
	{
		gameObjects.push_back(new Invader(*resources.playerSpr, 500, 950,
			resources.playerSpr->getGlobalBounds().width,
			resources.playerSpr->getGlobalBounds().height,
			1000));
	}
}

void Engine::preview()
{
	resources.backgroundPreviewM->play();

	sf::Text previewText;
	previewText.setFont(resources.font8Bit);
	const char* previewString = 
		"             "
		"SPACE INVADERS\n\n"
		"Press \"F\" to Pay Respects";
	previewText.setString(previewString);
	previewText.setCharacterSize(40);
	previewText.setPosition(140, 300);

	resources.hypnoticCircle->setOrigin(50, 50);//rewrite this hard code
	resources.hypnoticCircle->setPosition(500, 600);

	sf::Texture background_texture;
	background_texture.loadFromFile("data\\images\\background.png");
	background_texture.setRepeated(true);
	sf::Sprite background_sprite;
	background_sprite.setTexture(background_texture);
	background_sprite.setTextureRect(sf::IntRect(0, 0, 500, 500));

	sf::Event e;
	int rotateAngle = 0;
	clock.restart();
	sf::Time tickCounter = clock.getElapsedTime();

	gameWindow->pollEvent(e);
	while (e.key.code != sf::Keyboard::F)
	{
		gameWindow->pollEvent(e);
		if (e.type == sf::Event::EventType::Closed)
		{
			gameWindow->close();
			continue;
		}

		if (tickCounter.asMilliseconds() - clock.getElapsedTime().asMilliseconds() < 200)
		{
			tickCounter += sf::seconds(200);
			rotateAngle++;
		}
		resources.hypnoticCircle->rotate(rotateAngle);

		gameWindow->clear();
		gameWindow->draw(*resources.hypnoticCircle);
		gameWindow->draw(previewText);
		gameWindow->display();
	}
	
	resources.backgroundPreviewM->stop();	
}

void Engine::loop()
{
	//
}



Engine::Engine(){}
Engine::~Engine(){}
 