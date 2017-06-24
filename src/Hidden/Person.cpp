#include "Person.h"
#include <iostream>
using namespace std;

Person::Person()
{
	m_strName = "CY";
}
void Person::play()
{
	cout << "Person--play()" << endl;
}