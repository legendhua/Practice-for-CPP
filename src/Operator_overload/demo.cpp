#include <iostream>
#include <stdlib.h>
#include "Coordinate.h"
using namespace std;


//���������------һԪ���������
//1��������������أ���Ա��������Ԫ������
//2��++��������أ�ǰ��++������++��
//3��+����������أ���Ա��������Ԫ������
//4��<<������������
//5��[]�������������
int main(void)
{
	Coordinate coor1(1, 3);
	Coordinate coor2(5, 7);
	Coordinate coor3(0, 0);
	coor3 = coor1 + coor2;
	cout << coor3;
	cout << coor3.getX() << " " << coor3.getY() << endl;
	cout << coor3[0]<<endl;
	/*cout << coor1.getX() << " " << coor1.getY()<<endl;
	-coor1;*///����-(-coor1)�Ľ����������������
	//cout << coor1.getX() << " " << coor1.getY() << endl;
	//++coor1;
	//cout << coor1.getX() << " " << coor1.getY() << endl;
	/*cout << (coor1++).getX() << " ";
	cout<< (coor1++).getY() << endl;*/

	system("pause");
	return 0;
}