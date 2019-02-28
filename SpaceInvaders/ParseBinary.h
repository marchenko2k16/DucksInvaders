#pragma once
#include <string>
#include <sstream>
#include <fstream>
#include <queue>
#include "Vector2d.h"


class ParseBinary
{
public:
	static void getLvlDescription();//(const std::string level);
	static size_t wallsNum;
	static size_t standartInvadesrNum;
	static size_t shootingInvadersNum;
	static size_t bosses;

	static std::queue<utilities::Vector2d<double>> parsedPosition;

	ParseBinary();
	~ParseBinary();
};
