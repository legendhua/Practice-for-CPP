#include <iostream>
#include <stdlib.h>
#include "Time.h"
#include "Match.h"
using namespace std;


//��Ԫȫ�ֺ���
//��Ԫ��Ա����

//void printTime(Time &t);//��Ԫȫ�ֺ���

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
//	cout << t.m_iHour << ":" << t.m_iMinute << ":" << t.m_iSecond << endl;//��������Ԫ�Ļ������ܷ���Time���˽�����ݳ�Ա
//}