#include <iostream>
#include <stdlib.h>
#include "Coordinate.h"
using namespace std;

int main(void)
{
	Coordinate coor[3];
	coor[0].m_iX = 3;//ͨ��ջ�ķ�ʽ
	coor[0].m_iY = 5;
	coor[1].m_iX = 3;//ͨ��ջ�ķ�ʽ
	coor[1].m_iY = 5;
	coor[2].m_iX = 3;//ͨ��ջ�ķ�ʽ
	coor[2].m_iY = 5;

	Coordinate *p = new Coordinate[3];//ͨ���ѵķ�ʽ
	p->m_iX = 7;//��һλ��x����
	p[0].m_iY = 9;//��һλ��y����

	p++;
	p->m_iX = 11;//�ڶ�λ��x����
	p[0].m_iY = 13;//�ڶ�λ��y����

	
	p[1].m_iX = 15;//����λ��x����
	p++;
	p->m_iY = 17;//����λ��y����

	for (int i=0;i<3;i++)
	{
		cout <<"coor_x"<< coor[i].m_iX << endl;
		cout <<"coor_y"<< coor[i].m_iY << endl;
	}
	for (int j=0;j<3;j++)
	{
		cout << "coor_x" << p->m_iX << endl;//��ʱ��pָ�����λ��Ҫ���������ָ�����
		cout << "coor_y" << p->m_iY << endl;
		p--;
	}
	p++;//ִ����֮������pָ���һλ����һλ���Ƿ�λ�ã�
	delete[]p;
	p = NULL;
	system("pause");
	return 0;
}