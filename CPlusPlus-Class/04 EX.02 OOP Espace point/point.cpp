#include "point.h"
#include <iostream>

point::point(int newPosX, int newPosY)
{
	posX = newPosX;
	posY = newPosY;

}

void point::ChangePosX(int movePoseX)
{
	posX = posX + movePoseX;
	if (posX > 100)
	{
		std::cout << "la valeurs d'abscice ne peus dépacer 100, elle est automatiquement mise a 100en cas de dépassement" << std::endl;
		posX = 100;
	};
	if (posX < -100)
	{
		std::cout << "la valeurs d'abscice ne peus pas étre inférieurs a -100, elle est automatiquement mise à -100 en cas de dépassement" << std::endl;
		posX = -100;

	}
}

void point::ChangePosY(int movePoseY)
{
	posY = posY + movePoseY;
	if (posY > 100)
	{
		std::cout << "la valeurs d'ordonnée ne peus dépacer 100, elle est automatiquement mise a 100en cas de dépassement" << std::endl;
		posY = 100;
	};
	if (posY < -100)
	{
		std::cout << "la valeurs d'ordonnée ne peus pas étre inférieurs a -100, elle est automatiquement mise à -100 en cas de dépassement" << std::endl;
		posY = -100;

	}
}

int point::tellPosX()
{
	return posX;
}

int point::tellPosY()
{
	return posY;
}
