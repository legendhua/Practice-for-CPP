#ifndef FIGHTERPLANE_H
#define FIGHTERPLANE_H
#include "Flyable.h"
#include <string>
using namespace std;

class FighterPlane:public Flyable
{
public:
	FighterPlane();
	virtual ~FighterPlane();
	void takeoff();
	void land();
};
#endif