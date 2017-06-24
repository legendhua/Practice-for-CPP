#include "System.h"
#include <iostream>
using namespace std;

char System::m_iSys[17] = "0123456789ABCDEF";
System::System(int num, char n)
{
	m_iNum = num;
	if (n=='B')
	{
		m_iN = 2;
	} 
	else if (n=='O')
	{
		m_iN = 8;
	}
	else if (n=='H')
    {
		m_iN = 16;
	}
	else
	{
		cout << "请输入正确的进制！" << endl;
		m_iN = ' ';
	}
	m_pStack = new MyStack<char>(20);
}

System::~System()
{
	delete m_pStack;
	m_pStack = NULL;
}

void System::System_conver()
{

	if (m_iN!=' ')
	{
		while (m_iNum/m_iN!=0)
		{
		    m_pStack->push(m_iSys[m_iNum%m_iN]);
		    m_iNum = m_iNum / m_iN;
	    }
		m_pStack->push(m_iSys[m_iNum%m_iN]);
		m_pStack->stackTraverse(false);
	}
	else
	{
		cout << "并且重新输入数据！" << endl;
	}
}