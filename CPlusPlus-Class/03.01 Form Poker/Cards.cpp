#include "Cards.h"
#include <string>




std::string Cards::PrintAValue()
{

	return std::string(Cards::value);

}

std::string Cards::PrintAColor()
{
	return std::string(color);
}

std::string Cards::PrintACard()
{
	return std::string(value & " of " & color);
}

void Cards::GivePlayer()
{

	inHand = true;
	notInDeck = true;

}

void Cards::Discard()
{

	inHand = false;

}
