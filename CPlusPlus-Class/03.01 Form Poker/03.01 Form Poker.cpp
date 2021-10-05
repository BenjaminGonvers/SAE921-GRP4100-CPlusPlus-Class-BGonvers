
#include <iostream>
#include <chrono>
#include <random>
#include "Cards.h"

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










int main()
{

	Cards testy(Value::Eight, Color::Spades);
	

	std::cout << testy::PrintACard;

}