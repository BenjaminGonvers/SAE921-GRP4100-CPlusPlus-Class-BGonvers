#pragma once

#include <string>
#include "Vergers.h"


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
    ~Arbres();//destructeur(il dit juste l'arbre qui ce fait d?truire)

    std::string printTreeName(); //r?cup?re le nom de l'arbre
    std::string printTreeFruit();//r?cup?re le fruit de l'arbre
    int harvestFruit();//donne une valeur entre max et min de production pour la r?colte
    int tellMaxProd();//explicite
    int tellMinprod();//explicite
    int tellValueFruit();//explicite
    int tellNumberTree();//explicite
    int plentingTree(int);//permet d'augmenter la quantit? d'arbre, renvoie la nouvelle valeurs de quantit? d'arbre

};



