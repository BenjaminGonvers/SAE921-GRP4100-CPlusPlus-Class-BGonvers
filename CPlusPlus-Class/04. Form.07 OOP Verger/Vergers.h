#pragma once
#include "Arbres.h"
class Vergers
{
private:
	int numberTotalTree_;
	int maxtree_;
	int numberPlot_;//number of plot that the player have each plot is 10 tree
	int valueOfContract_;//value the contract force the player to sell.
public:
	Vergers();//constructeurs
	~Vergers();//destructeurs
	int tellNumberOfTree();
	int tellnumberPlot();
	int tellContract();
	int plantingtree(int, int);//plenting a tree in the "vergers"
	int HarvestAllAndSell();//Harvest all the tree plented in the vergers and selling it right aways.



};

