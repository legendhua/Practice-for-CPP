#ifndef WORKER_H
#define WORKER_H
#include "Person.h"

class Worker:public Person
{
public:
	Worker(int age,string name);
	//virtual ~Worker();
    //void work();
protected:
	int m_iage;
};
#endif // 
