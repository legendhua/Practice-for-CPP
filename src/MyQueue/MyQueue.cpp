#include "MyQueue.h"
#include <lmcons.h>
#include <iostream>
#include "Customer.h"
using namespace std;
MyQueue::MyQueue(int queueCapacity)  
{
	m_iQueueCapacity = queueCapacity;
	m_iHead = 0;  //以下三行功能可以看出和ClearQueue一致，所以可以直接写成那个函数
	m_iTail = 0;
	m_iQueueLen = 0;
	m_pQueue = new Customer[m_iQueueCapacity];//堆方式申请空间
	//m_pQueue = new int[m_iQueueCapacity];//申请空间
}

MyQueue::~MyQueue()  //析构函数
{
	delete[]m_pQueue;
	m_pQueue = NULL;
}

void MyQueue::ClearQueue()
{
	m_iHead = 0;
	m_iTail = 0;
	m_iQueueLen = 0;
}

bool MyQueue::QueueEmpty()const
{
	if (m_iQueueLen == 0)
		return true;
	else
		return false;
}

int MyQueue::QueueLength()const
{
	return m_iQueueLen;
}

bool MyQueue::QueueFull() const
{
	if (m_iQueueLen == m_iQueueCapacity)
		return true;
	else
		return false;
}

//bool MyQueue::EnQueue(int element)
bool MyQueue::EnQueue(Customer element)
{
	if (QueueFull())
		return false;
	else
	{
		m_pQueue[m_iTail] = element;
		m_iTail++;
		m_iTail = m_iTail%m_iQueueCapacity;
		m_iQueueLen++;
		return true;
	}	
}

//bool MyQueue::DeQueue(int &element)
bool MyQueue::DeQueue(Customer &element)
{
	if (QueueEmpty())
		return false;
	else
	{
		element = m_pQueue[m_iHead];//存放出队列的元素
		m_iHead++;
		m_iHead = m_iHead%m_iQueueCapacity;
		m_iQueueLen--;
		return true;
	}
}

void MyQueue::QueueTraverse()
{
	cout << endl;
	for (int i=m_iHead;i<m_iQueueLen+ m_iHead;i++)
	{
		//cout << m_pQueue[i%m_iQueueCapacity] << endl;
		m_pQueue[i%m_iQueueCapacity].printInfo();
		cout << "前面还有" << i - m_iHead << "人" << endl;
	}
	cout << endl;
}