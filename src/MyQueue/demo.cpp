#include <iostream>
#include<stdlib.h>
#include "MyQueue.h"
#include "Customer.h"
using namespace std;
/*******************************************************/
/*���ζ���C++ʵ�֣�2017.3 by zgh */
/*******************************************************/


int main(void)
{
	MyQueue *p = new MyQueue(4);//ͨ����ʵ��������
	Customer c1("zhangsan", 20);
	Customer c2("lisi", 22);
	Customer c3("wangwu", 27);
	p->EnQueue(c1);//�ѷ�ʽ���ʳ�Ա
	p->EnQueue(c2);
	p->EnQueue(c3);

	Customer c5("zgh", 23);
	p->EnQueue(c5);

	Customer c4(" ", 0); //ͨ��ջʵ��������
	p->EnQueue(c4);
	//c4.printInfo();//ջ��ʽ���ʳ�Ա
	cout << p->QueueLength() << endl;

	p->QueueTraverse();

	

	/*MyQueue *p = new MyQueue(4);

	p->EnQueue(10);
	p->EnQueue(12);
	p->EnQueue(16);
	p->EnQueue(18);
	p->EnQueue(20);

	p->QueueTraverse();

	int e = 0;
	p->DeQueue(e);
	cout << e <<endl;
	
	p->DeQueue(e);
	cout << e << endl;

	p->QueueTraverse();

	p->ClearQueue();
	p->QueueTraverse();

	p->EnQueue(18);
	p->EnQueue(20);
	p->QueueTraverse();*/

	delete p;
	p = NULL;
	system("pause");
	return 0;
}