#include <iostream>
#include <stdlib.h>
#include "Worker.h"
using namespace std;

int main(void)
{
	//Worker *p=new Worker();//观察先调用哪个构造
	//p->m_strName = "Jack";//父类成员访问
	//p->m_iAge = 10;
	//p->eat();
	//p->m_iSalary = 1000;
	//p->work();
	//delete p; //销毁先执行哪个析构函数
	//p = NULL;

	//Worker worker;
	//worker.m_strName = "Jack";//父类成员访问
	//worker.m_iAge = 10;
	//worker.eat();
	//worker.m_iSalary = 1000;
	//worker.work();

	/*Person person;
	person.eat();*/
	//person.m_strName = "james";//不可访问
	Worker worker;
	//worker.eat();//private继承，public成为private属性
	worker.work();//不能访问基类的private成员

	system("pause");
	return 0;
}