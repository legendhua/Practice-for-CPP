#include <iostream>
#include <stdlib.h>
#include "Worker.h"
using namespace std;

int main(void)
{
	//Worker *p=new Worker();//�۲��ȵ����ĸ�����
	//p->m_strName = "Jack";//�����Ա����
	//p->m_iAge = 10;
	//p->eat();
	//p->m_iSalary = 1000;
	//p->work();
	//delete p; //������ִ���ĸ���������
	//p = NULL;

	//Worker worker;
	//worker.m_strName = "Jack";//�����Ա����
	//worker.m_iAge = 10;
	//worker.eat();
	//worker.m_iSalary = 1000;
	//worker.work();

	/*Person person;
	person.eat();*/
	//person.m_strName = "james";//���ɷ���
	Worker worker;
	//worker.eat();//private�̳У�public��Ϊprivate����
	worker.work();//���ܷ��ʻ����private��Ա

	system("pause");
	return 0;
}