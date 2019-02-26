#include "Engine.h"



sf::RenderWindow* Engine::gameWindow;
std::vector<GameObject*> Engine::gameObjects;
sf::Clock Engine::clock;
sf::Time Engine::time;
Player* Engine::player;
bool Engine::elapsed;

void Engine::isElapsed()
{
	elapsed = true;
}

void Engine::resetElapsed()
{
	clock.restart();
	elapsed = false;
}

void Engine::initGame(sf::RenderWindow* rw)
{
	gameWindow = rw;
	sf::Vector2u windowSize = gameWindow->getSize();
	Resources::loadTextures();
	Resources::loadMusic();
	Resources::loadFonts();
	GameDescriptor gameInfo;
}


//REWRITE AFTER MAKING BINARY PARSES
void Engine::initGameObjects()
{
	
	player = new Player(Resources::playerSpr, utilities::Vector2d<double>(500,950),
		Resources::playerSpr->getGlobalBounds().width,
		Resources::playerSpr->getGlobalBounds().height);
	gameObjects.push_back(player);
	for(int i = 0; i < 6; i++)
	{
		gameObjects.push_back(new Invader(Resources::playerSpr, utilities::Vector2d<double>(100, 100),
			Resources::playerSpr->getGlobalBounds().width,
			Resources::playerSpr->getGlobalBounds().height));
	}

}

void Engine::preview()
{
	Resources::backgroundPreviewM->play();

	sf::Text previewText;
	previewText.setFont(Resources::font8Bit);
	const char* previewString = 
		"             "
		"SPACE INVADERS\n\n"
		"Press \"F\" to Pay Respects";
	previewText.setString(previewString);
	previewText.setCharacterSize(40);
	previewText.setPosition(140, 300);

	Resources::hypnoticCircle->setOrigin(50, 50);//rewrite this hard code
	Resources::hypnoticCircle->setPosition(500, 600);

	sf::Texture background_texture;
	background_texture.loadFromFile("data\\images\\background.png");
	background_texture.setRepeated(true);
	sf::Sprite background_sprite;
	background_sprite.setTexture(background_texture);
	background_sprite.setTextureRect(sf::IntRect(0, 0, 1000, 1000));

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

		Resources::hypnoticCircle->rotate(rotateAngle);

		gameWindow->clear();
		gameWindow->draw(background_sprite);
		gameWindow->draw(*Resources::hypnoticCircle);
		gameWindow->draw(previewText);
		gameWindow->display();
	}
	
	Resources::backgroundPreviewM->stop();
	gameWindow->clear();
}

void Engine::addObject(GameObject * additionalObj)
{
	Engine::gameObjects.push_back(additionalObj);
}

void Engine::loop()
{
	//TODO false = some condition like hotkey pressed
	sf::Event event;
	while (gameWindow->isOpen() || false)
	{
		
		while (gameWindow->pollEvent(event))
		{
		//	player->action(event);
		}
		
		if (clock.getElapsedTime().asSeconds() > 1)
		{
			isElapsed();
		}
		//for (auto e : gameObjects)
		//{
		//	e->update();
		//}
		
		if (clock.getElapsedTime().asSeconds() > 1)
		{
			std::cout << "Tick done\n";
			resetElapsed();
		}
		
		gameWindow->clear();
		Resources::backgroundSpr->setTextureRect(sf::IntRect(0, 0, 1000, 1000));
		gameWindow->draw(*(Resources::backgroundSpr));
		//for (auto e : gameObjects)
		//{
		//	gameWindow->draw((*e->spr));
		//	gameWindow->display(); 
		//}

	}
}



Engine::Engine(){}
Engine::~Engine(){}
 