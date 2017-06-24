#include <iostream>
using namespace std;
class Coordinate
{

public:
	Coordinate()
	{
	}
	// 打印坐标的函数
	void printInfo()
	{
		cout << "(" << m_iX << "," << m_iY << ")" << endl;
	}
public:
	int m_iX;
	int m_iY;
};
int main(void)
{
	//定义对象数组
	Coordinate *coorArr = new Coordinate[2];// = { 1,2,3,4 };
	coorArr[0].m_iX = 1;
	coorArr[0].m_iY = 2;
	coorArr[1].m_iX = 3;
	coorArr[1].m_iY = 4;

	//遍历数组，打印对象信息
	for (int i = 0; i < 2; i++)
	{
		coorArr[i].printInfo();
	}
	delete[]coorArr;
	coorArr = NULL;
	system("pause");
	return 0;
}