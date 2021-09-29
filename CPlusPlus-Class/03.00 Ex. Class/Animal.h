#pragma once
#include <iostream>

class Animal
{

	int food_ = 0;

public:

	void eat()
	{
		food_++;
	}

	void print()
	{
		std::cout << "The number the dog eat is " << food_ << std::endl;

	}
};

