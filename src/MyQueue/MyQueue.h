#ifndef MYQUEUE_H
#define MYQUEUE_H
/*******************************************************/
/*���ζ���C++ʵ�֣�2017.3 by zgh */
/*******************************************************/

#include "Customer.h"

class MyQueue
{
public:
	MyQueue(int queueCapacity);  //��������
	virtual ~MyQueue();          //���ٶ���
	void ClearQueue();           //��ն���
	bool QueueEmpty() const;     //�пն���
	bool QueueFull() const;      //��������
	int QueueLength() const;     //���г���
	bool EnQueue(Customer element);   //��Ԫ�����
	bool DeQueue(Customer &element);  //��Ԫ�س���
	//bool EnQueue(int element);   //��Ԫ�����
	//bool DeQueue(int &element);  //��Ԫ�س���
	void QueueTraverse();        //��������
private:
	Customer *m_pQueue;               //��������ָ��
	//int *m_pQueue;               //��������ָ��
	int m_iQueueLen;             //����Ԫ�ظ���
	int m_iQueueCapacity;        //������������
	int m_iHead;                 //����ͷ��λ��
	int m_iTail;                 //����β��λ��
};

#endif // !MYQUEUE_H
