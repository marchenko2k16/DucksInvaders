#include "ParseBinary.h"


size_t ParseBinary::wallsNum;
size_t ParseBinary::standartInvadesrNum;
size_t ParseBinary::shootingInvadersNum;
size_t ParseBinary::bosses;

std::queue<utilities::Vector2d<double>> ParseBinary::parsedPosition;



void ParseBinary::getLvlDescription()//(const std::string level)
{
	while (!parsedPosition.empty())
	{
		parsedPosition.pop();
	}
	std::ifstream readFrom;
	readFrom.open("data\\binaries\\lvl1");
	readFrom >> wallsNum >> standartInvadesrNum >> shootingInvadersNum >> bosses;
	double xCoord;
	double yCoord;
	while(readFrom >> xCoord >> yCoord)
	{
		parsedPosition.push(utilities::Vector2d<double>(xCoord, yCoord));
	}

}

ParseBinary::ParseBinary()
{
}


ParseBinary::~ParseBinary()
{
}
