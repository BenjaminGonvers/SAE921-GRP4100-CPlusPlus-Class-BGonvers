#pragma once
class point
{

private:
	int posX;
	int posY;

public:
	point(int, int);
	void ChangePosX(int);
	void ChangePosY(int);
	int tellPosX();
	int tellPosY();

};

