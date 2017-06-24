#include "FighterPlane.h"
#include <iostream>
using namespace std;


FighterPlane::FighterPlane()
{
	cout << "FighterPlane()" << endl;
}
FighterPlane::~FighterPlane()
{
	cout << "~FighterPlane()"<<endl;
}
void FighterPlane::takeoff()
{
	cout << "FighterPlane--takeoff" << endl;
}
void FighterPlane::land()
{
	cout << "FighterPlane--land" << endl;
}