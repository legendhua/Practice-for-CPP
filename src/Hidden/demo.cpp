#include <iostream>
#include <stdlib.h>
#include "Soldier.h"
using namespace std;

int main(void)
{
	Soldier soldier;
	soldier.play(3);
	soldier.work();
	soldier.Person::play();//���ʸ��������ص�ͬ����Ա����(����ʹ�����ַ�ʽ)
	system("pause");
	return 0;
}