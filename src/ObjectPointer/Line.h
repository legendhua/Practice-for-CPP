#include <stdlib.h>
#include "Coordinate.h"

class Line
{
public:
	Line(int x1,int y1,int x2,int y2);
	~Line();
	void PrintInfo();
private:
	Coordinate *m_pCoorA;//∂‘œÛ÷∏’Î
	Coordinate *m_pCoorB;
};