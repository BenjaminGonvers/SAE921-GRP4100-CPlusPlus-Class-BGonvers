#pragma once
#include "Vergers.h"
#include <string>

class Arbres : 
   public Vergers
{
private:
    std::string treeName;
    std::string fruitName;
    int numberTree;
    int maxProd_;
    int minProd_;
    int valueFruit;
public:
    Arbres();//constructeur
    Arbres(std::string,std::string,int,int);//constructeur avec variable
    ~Arbres();//destructeur

    std::string printTreeName(); //récupére le nom de l'arbre
    std::string printTreeFruit();//récupére le fruit de l'arbre
    int harvestFruit();//donne une valeur entre max et min
    int tellMaxProd();//explicite
    int tellMinprod();//explicite
    int tellValueFruit();//explicite


};



