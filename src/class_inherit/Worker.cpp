#include "Worker.h"
#include <iostream>
using namespace std;

Worker::Worker()
{
	cout << "Worker()" << endl;
}

Worker::~Worker()
{
	cout << "~Worker" << endl;
}
void Worker::work()
{
	m_strName = "jack";
	cout <<m_strName << endl;
	//m_iAge = 10;//���ܷ��ʻ����private��Ա
	cout << "work()" << endl;
}
