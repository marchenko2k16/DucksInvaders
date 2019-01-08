#include <iostream>
#include <SFML/Graphics.hpp>
#include <cmath>
#include <SFML/Audio.hpp>
#include "Player.h"
#include "Bullet.h"
#include "Vector2d.h"


#include <fstream>

int main()
{
	sf::RenderWindow renderWindow(sf::VideoMode(640, 480), "Demo Game");

	sf::Event event;
	sf::Texture texture;
	texture.loadFromFile("data\\images\\two_in_1.jpg");

	sf::IntRect rectSourceSprite(0, 0, 100, 100);
	sf::Sprite sprite(texture, rectSourceSprite);
	sf::Clock clock;

	while (renderWindow.isOpen()) {
		while (renderWindow.pollEvent(event)) {
			if (event.type == sf::Event::EventType::Closed)
				renderWindow.close();
		}

		if (clock.getElapsedTime().asSeconds() > 1.0f) {
			if (rectSourceSprite.left == 100)
				rectSourceSprite.left = 0;
			else
				rectSourceSprite.left += 100;

			sprite.setTextureRect(rectSourceSprite);
			clock.restart();
		}


		renderWindow.clear();
		renderWindow.draw(sprite);
		renderWindow.display();
	}

	sf::Texture bulletTexture;
	bulletTexture.loadFromFile("data\\images\\bullet_player.png");
	sf::Sprite bullet_sprite;
	bullet_sprite.setTexture(bulletTexture);
	double bulletMoveX = 0;
	double bulletMoveY = 0;



	sf::Music music;
	music.openFromFile("data\\audio\\background_music.wav");
	music.setLoop(true);
	music.setVolume(10); 
	music.play();


	sf::SoundBuffer soundBuffer;
	soundBuffer.loadFromFile("data\\audio\\shoot_sound.wav");
	sf::Sound sound;
	sound.setBuffer(soundBuffer);
	sf::RenderWindow window(sf::VideoMode(500, 500), "SPACE INVADERS");

	sf::CircleShape circleShape(200);
	circleShape.setFillColor(sf::Color::Blue);
	circleShape.setPosition(100, 100);

	sf::Texture player_texture;
	player_texture.loadFromFile("data\\images\\ufo.png");
	sf::Sprite player_sprite;
	player_sprite.setTexture(player_texture);
	sf::Rect<float> bounds = player_sprite.getGlobalBounds();

	double X = 200;
	double Y = 400;
	double x0 = bounds.width / 2;
	double y0 = bounds.height / 2;
	double centreX = X + x0;
	double centreY = Y + y0;

	player_sprite.setPosition(centreX, centreY);
	player_sprite.setOrigin(x0, y0);


	sf::Texture background_texture;
	background_texture.loadFromFile("data\\images\\background.png");
	background_texture.setRepeated(true);
	sf::Sprite background_sprite;
	background_sprite.setTexture(background_texture);
	background_sprite.setTextureRect(sf::IntRect(0, 0, 500, 500));

	sf::Font font;
	font.loadFromFile("data\\fonts\\Pixel-Miners.otf");
	sf::Text txt;
	txt.setFont(font);
	txt.setString("SPACE INVADERS");
	txt.setCharacterSize(40);
	txt.setPosition(15, 200);

	float i = 0, j = 0;
	bool flag = true;

	sf::Clock chasiki;
	int ms100elapsedCounter = 0;
	
	double playerReloc = 0;

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			sf::Mouse mouse;
			sf::Vector2i v2(mouse.getPosition(window));
			switch (event.type)
			{
			case (sf::Event::Closed):
				window.close();
				break;
			case sf::Event::EventType::MouseButtonPressed:

				std::cout << v2.x << " --  X\n"<< v2.y <<" -- Y\n";
				break;
			case sf::Event::KeyPressed:
				if (event.key.code == sf::Keyboard::Space) {
					bulletMoveX = centreX;
					bulletMoveY = centreY - y0;
					bullet_sprite.setPosition(bulletMoveX - bullet_sprite.getGlobalBounds().width / 2, 
						bulletMoveY - bullet_sprite.getGlobalBounds().height / 2);
					sound.play();
					std::cout << "space shoot\n";
				}
				else if(event.key.code == sf::Keyboard::A ||
						event.key.code == sf::Keyboard::Left)
				{
					centreX -= 30;
					player_sprite.setPosition(centreX, centreY);
					std::cout << "LEFT MOVED\n";
					//MOVE CHAR LEFT 
				}
				else if (event.key.code == sf::Keyboard::D ||
					event.key.code == sf::Keyboard::Right)
				{
					std::cout << "RIGHT MOVED\n";
					centreX += 30;
					player_sprite.setPosition(centreX, centreY);
					//MOVE CHAR LEFT 
				}
				else if (event.key.code == sf::Keyboard::Enter)
				{
					std::cout << "SHOOT\n";
					sound.play();
					//MOVE CHAR LEFT 
				}
				else if(event.key.code == sf::Keyboard::Space)
				{
				}
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::BackSpace))
				{
					std::cout << "sd::KeyBoard::isKeyPressed(sf::Keyboard::BackSpace)\n";
				}
				break;
			default:
				break;
			}

			//std::cout << "IN\n";
		}
		
		window.clear();
		window.draw(background_sprite);
		if (chasiki.getElapsedTime().asMilliseconds() - ms100elapsedCounter * 100 > 100)
		{
			txt.move(i, 0);
			if (i < 5 && flag)
			{
				++i;
			}
			else if (i == 5 && flag)
			{
				flag = false;
			}
			else if (!flag && i > -5)
			{
				--i;
			}
			else
			{
				flag = true;
			}
		}
		window.draw(txt);

		if (chasiki.getElapsedTime().asMilliseconds() - ms100elapsedCounter * 100 > 100) ///TODO
		{
			++ms100elapsedCounter;
			player_sprite.rotate(j);
			++j;
		}
		
		if (bulletMoveX != 0)
		{
			window.draw(bullet_sprite);
			bullet_sprite.move(0,-1);
		}
		window.draw(player_sprite);

		window.display();

	}

	std::cin.get();
	return 0;
}