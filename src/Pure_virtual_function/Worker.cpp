#include "Worker.h"
#include <iostream>
using namespace std;


Worker::Worker(int age, string name) :Person(name), m_iage(age)
{
	cout << "Worker()" << endl;
}
//Worker::~Worker()
//{
//	cout << "~Worker()"<<endl;
//}
//void Worker::work()
//{
//	cout << "Worker--work" << endl;
//}