#include <iostream>
using namespace std;


//�ݹ�ʵ�ֺ�ŵ������
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
	cout << "������Ҫ�ƶ���Ŀ������";
	int n;
	cin >> n;
	cout << "�ƶ��Ĳ���Ϊ��" << endl;
	hanoi(n, 'A', 'B', 'C');
	system("pause");
	return 0;
}