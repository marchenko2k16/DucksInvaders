#include "Saver.h"



void Saver::saveScore(int score)
{
	std::ofstream saveTo;
	saveTo.open("record_table", std::ios::app);
	saveTo << "\n" << score;
};

Saver::Saver()
{
}


Saver::~Saver()
{
}
