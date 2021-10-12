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