#ifndef SYSTEM_H
#define  SYSTEM_H
#include "Mystack.h"

class System
{
public:
	System(int num,char n);  
	~System();
	void System_conver();
private:
	int m_iNum; //ʮ��������
	char m_iN;   //����
	static char m_iSys[17];
	MyStack<char> *m_pStack;
};
#endif