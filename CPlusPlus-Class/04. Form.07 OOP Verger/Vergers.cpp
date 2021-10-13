#include "Vergers.h"
#include <iostream>

Vergers::Vergers()
{
	Arbres Pommier("Pommier", "Pomme",650,450);
	Arbres Poirier("Poirier", "poire", 500, 400);
	Arbres Cerisier("Cerisier", "Cerise", 60000, 50000);
	this->numberTotalTree_ = 0;
	this->maxtree_ = 25;
	this->numberPlot_ = 0;
	this->valueOfContract_ = 20000000;
}

Vergers::~Vergers()
{
	std::cout << "le vergers a ete detruit" << std::endl;
}

int Vergers::tellNumberOfTree()
{
	return numberTotalTree_;
}

int Vergers::tellnumberPlot()
{
	return numberPlot_;
}

int Vergers::tellContract()
{
	return valueOfContract_;
}

int Vergers::plantingtree(int, int)
{
	return 0;
}

int Vergers::HarvestAllAndSell()
{
	return 0;
}
