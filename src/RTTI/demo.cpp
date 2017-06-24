#include <iostream>
#include <stdlib.h>
#include "Bird.h"
#include "Plane.h"
using namespace std;

//RTTI´úÂë²Ù×÷
void dosomething(Flyable *obj)
{
	cout << typeid(*obj).name() << endl;
	obj->takeoff();
	if (typeid(*obj) == typeid(Bird))
	{
		Bird *bird = dynamic_cast<Bird*>(obj);
		bird->foraging();
	}
	if (typeid(*obj) == typeid(Plane))
	{
		Plane *plane = dynamic_cast<Plane*>(obj);
		plane->carry();
	}
	obj->land();
}



int main(void)
{
	/*Plane *plane = new Plane;
	dosomething(plane);
	Bird *bird = new Bird;
	dosomething(bird);
	delete plane;
	plane = NULL;
	delete bird;
	bird = NULL;*/

	/*int i = 0;
	cout << typeid(i).name() << endl;*/

	/*Flyable *p = new Plane;
	cout << typeid(p).name()<< endl;
	cout << typeid(*p).name() << endl;*/

	system("pause");
	return 0;
}