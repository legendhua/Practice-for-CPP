#include <iostream>
#include <stdlib.h>
#include <string>
#include "Teacher.h"
using namespace std;

/*****************************************************/
/*Teacher��
   �Զ��忽�����캯��
���ݣ�
   ����
   ����
��Ա������
   ���ݳ�Ա�ķ�װ����
/*******************************************************/

void test(Teacher t)
{

}
int main(void)
{
	Teacher t1;//�����������캯��
	Teacher t2 = t1;//���ÿ������캯��
	Teacher t3(t1);//���ÿ������캯��
	test(t1);//�������ε��õ�Ҳ�ǿ������캯��
	system("pause");
	return 0;
}