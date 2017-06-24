#include <iostream>
#include <stdlib.h>
#include "Time.h"
#include "Match.h"
using namespace std;


//友元全局函数
//友元成员函数

//void printTime(Time &t);//友元全局函数

int main(void)
{
	Time time(6, 34, 25);
	Match m;
	m.printTime(time);
	//printTime(time);

	system("pause");
	return 0;
}

//void printTime(Time &t)
//{
//	cout << t.m_iHour << ":" << t.m_iMinute << ":" << t.m_iSecond << endl;//不声明友元的话，不能访问Time类的私有数据成员
//}