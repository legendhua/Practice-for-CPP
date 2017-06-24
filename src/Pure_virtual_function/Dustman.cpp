#include "Dustman.h"
#include <iostream>
using namespace std;



Dustman::Dustman(int age, string name) :Worker(age, name)
{
	cout << "Dustman" << endl;
}
void Dustman::work()
{
	cout << "É¨µØ" << endl;
}