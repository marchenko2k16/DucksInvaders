#pragma once
#include <fstream>

static int numberOfInvaders;
static int score;
static int lvl;

void static saveScore()
{
	std::ofstream saveTo;
	saveTo.open("record_table", std::ios::app);
	saveTo << "\n" << score;
};

void static sortScore();///TO DO ----> MB USE STOI (((