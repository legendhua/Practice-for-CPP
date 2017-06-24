#include <iostream>
#include <stdlib.h>
#include "FighterPlane.h"
#include "Plane.h"
using namespace std;





void flyMatch(Flyable *f1 , Flyable *f2)
{
	f1->takeoff();
	f1->land();
	f2->takeoff();
	f2->land();
}
int main(void)
{
	FighterPlane *fighterPlane1= new FighterPlane;
	FighterPlane *fighterPlane2 = new FighterPlane;
	//flyMatch(fighterPlane1, fighterPlane2);
	Plane *plane1 = new Plane("001A");
	plane1->printCode();
	flyMatch(fighterPlane1, plane1);
	delete fighterPlane1;
	fighterPlane1 = NULL;
	delete fighterPlane2;
	fighterPlane2 = NULL;
	delete plane1;
	plane1 = NULL;
	system("pause");
	return 0;
}