#ifndef BIRD_H
#define BIRD_H
#include "Flyable.h"

class Bird:public Flyable
{
public:
	virtual void takeoff();
	virtual void land();
	void foraging();
};
#endif