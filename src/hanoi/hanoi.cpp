#include <iostream>
using namespace std;


//递归实现汉诺塔问题
void move(char positionOne, char positionTwo)
{
	cout << positionOne << "-->" << positionTwo << endl;
}

void hanoi(int n, char positionA, char positionB, char positionC)
{
	if (n==1)
	{
		move(positionA, positionC);
	}
	else
	{
		hanoi(n - 1, positionA, positionC, positionB);
		move(positionA, positionC);
		hanoi(n - 1, positionB, positionA, positionC);
	}
}

int main(void)
{
	cout << "请输入要移动的目标数：";
	int n;
	cin >> n;
	cout << "移动的步骤为：" << endl;
	hanoi(n, 'A', 'B', 'C');
	system("pause");
	return 0;
}