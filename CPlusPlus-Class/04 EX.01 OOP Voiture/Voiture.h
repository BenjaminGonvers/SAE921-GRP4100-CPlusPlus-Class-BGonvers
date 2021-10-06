#pragma once
#include <iostream>
#include <string>
class Voiture
{

private:
	std::string mark;
	int years;
	std::string model;

public:

	Voiture(std::string mark_, std::string model_, int years_) {
		mark = mark_;
		model = model_;
		years = years_;

	};

	void tellMeInfo() {

		std::cout << "la voiture est une " + model + " de la marque " + mark + " mise en service en l'année " << years << "." << std::endl;

	}
};

