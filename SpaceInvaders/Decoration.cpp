#include "Decoration.h"



void Decoration::loadMusic()
{
	sf::SoundBuffer shootBuffer;
	shootBuffer.loadFromFile("data\\audio\\shoot_sound.wav");
	onShoot.setBuffer(shootBuffer);

	background.setLoop(true);
	background.openFromFile("data\\audio\\background.wav");
	background.setVolume(33);

}

Decoration::Decoration()
{
}


Decoration::~Decoration()
{
}
