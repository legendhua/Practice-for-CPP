#ifndef DUSTMAN_H
#define DUSTMAN_H
#include "Worker.h"

class Dustman:public Worker
{
public:
	Dustman(int age,string name);
	virtual void work();
};



#endif