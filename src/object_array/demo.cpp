#include <iostream>
#include <stdlib.h>
#include "Coordinate.h"
using namespace std;

int main(void)
{
	Coordinate coor[3];
	coor[0].m_iX = 3;//通过栈的方式
	coor[0].m_iY = 5;
	coor[1].m_iX = 3;//通过栈的方式
	coor[1].m_iY = 5;
	coor[2].m_iX = 3;//通过栈的方式
	coor[2].m_iY = 5;

	Coordinate *p = new Coordinate[3];//通过堆的方式
	p->m_iX = 7;//第一位的x坐标
	p[0].m_iY = 9;//第一位的y坐标

	p++;
	p->m_iX = 11;//第二位的x坐标
	p[0].m_iY = 13;//第二位的y坐标

	
	p[1].m_iX = 15;//第三位的x坐标
	p++;
	p->m_iY = 17;//第三位的y坐标

	for (int i=0;i<3;i++)
	{
		cout <<"coor_x"<< coor[i].m_iX << endl;
		cout <<"coor_y"<< coor[i].m_iY << endl;
	}
	for (int j=0;j<3;j++)
	{
		cout << "coor_x" << p->m_iX << endl;//此时的p指向第三位，要输出必须用指针操作
		cout << "coor_y" << p->m_iY << endl;
		p--;
	}
	p++;//执行完之后现在p指向第一位的上一位（非法位置）
	delete[]p;
	p = NULL;
	system("pause");
	return 0;
}