#pragma once
class Vergers
{
private:
	int numberTotalTree;
	int monney;
	int maxtree;
	int numberPlot;//number of plot that the player have each plot is 10 tree
	int valueOfContract;//value the contract force the player to sell.
public:
	Vergers();//constructeurs
	~Vergers();//destructeurs
	int tellNumberOfTree();
	int tellMonney();
	int tellnumberPlot();
	int tellContract();
	int addMonney(int);//using for add or minus the monney
	int plantingtree(int, int);//plenting a tree in the "vergers"
	int HarvestAllAndSell();//Harvest all the tree plented in the vergers and selling it right aways.



};

