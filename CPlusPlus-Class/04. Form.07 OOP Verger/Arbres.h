#pragma once
#include "Vergers.h"
#include <string>

class Arbres : 
   public Vergers
{
private:
    std::string treeName_;
    std::string fruitName_;
    int numberTree_;
    int maxProd_;
    int minProd_;
    int valueFruit_;
public:
    Arbres(std::string,std::string,int,int);//constructeur avec variable(tree name/fruitName/maxprod/minProd)
    ~Arbres();//destructeur

    std::string printTreeName(); //récupére le nom de l'arbre
    std::string printTreeFruit();//récupére le fruit de l'arbre
    int harvestFruit();//donne une valeur entre max et min de production pour la récolte
    int tellMaxProd();//explicite
    int tellMinprod();//explicite
    int tellValueFruit();//explicite
    int tellNumberTree();//explicite
    int plentingTree(int);//permet d'augmenter la quantité d'arbre, renvoie la nouvelle valeurs de quantité d'arbre

};



