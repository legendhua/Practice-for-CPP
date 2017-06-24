#include <stdlib.h>
#include <iostream>
using namespace std;

class Coordinate
{
public:
	Coordinate(int x,int y);
	~Coordinate();
	void setX(int x);
	int getX();
	void setY(int y);
	int getY();
private:
	int m_iX;
	int m_iY;
};