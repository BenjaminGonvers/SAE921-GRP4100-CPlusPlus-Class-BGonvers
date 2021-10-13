#include "Arbres.h"
#include <iostream>

Arbres::Arbres(std::string treeName, std::string fruitName, int maxProduce, int minProduce){
	this->treeName_ = treeName;
	this->fruitName_ = fruitName;
	this->maxProd_ = maxProduce;
	this->minProd_ = minProduce;
	this->valueFruit_ = 0;
}
Arbres::~Arbres() {

	std::cout << "j'ai detruis un arbre ( " << this->treeName_ << " )" << std::endl;


}

std::string Arbres::printTreeName()
{
	return std::string(this->treeName_);
}

std::string Arbres::printTreeFruit()
{
	return std::string(this->fruitName_);
}

int Arbres::harvestFruit()
{
	int valueOfHarvest;
	valueOfHarvest = (rand() % maxProd_ - minProd_ + 1) + maxProd_;
	return valueOfHarvest;
}

int Arbres::tellMaxProd()
{
	return this->maxProd_;
}

int Arbres::tellMinprod()
{
	return minProd_;
}

int Arbres::tellValueFruit()
{
	return	valueFruit_;
}

int Arbres::tellNumberTree()
{
	return numberTree_;
}

int Arbres::plentingTree(int addTree)
{
	numberTree_ += addTree;

	return numberTree_;
}
