#include "Worker.h"
#include <iostream>
using namespace std;

Worker::Worker(string code , string color):Person("Worker"+color)
{
	cout << "Worker()" << endl;
	m_strCode = code;
}
Worker::~Worker()
{
	cout << "~Worker()" << endl;
}
void Worker::carry()
{
	cout << m_strCode << endl;
}