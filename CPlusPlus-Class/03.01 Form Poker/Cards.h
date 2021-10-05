#pragma once
#include <string>

enum class Value
{
	Two = 2,
	Three,
	Four,
	Five,
	Six,
	Seven,
	Eight,
	Nine,
	Ten,
	Jack,
	Queen,
	King,
	Ace


};

enum class Color
{

	Spades,
	Hearts,
	Diamonds,
	Clubs

};

class Cards
{
	Value value;
	Color color;
	bool inHand;
	bool notInDeck;

	

public :
	
	Cards(Value value_, Color color_) {

		value = value_;
		color = color_;
		inHand = false;
		notInDeck = false;

	}

	std::string PrintAValue();
	std::string PrintAColor();
	std::string PrintACard();
	void GivePlayer();
	void Discard();

};

