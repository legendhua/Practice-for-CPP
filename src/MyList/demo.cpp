#include <stdlib.h>
#include <iostream>
#include "List.h"
using namespace std;

int main(void)
{
	/*int e1 = 3;
	int e2 = 5;
	int e3 = 7;
	int e4 = 2;
	int e5 = 9;
	int e6 = 1;
	int e7 = 8;
	List<int> *p = new List<int>(10);*/
	//cout << "length:" << p->ListLength() << endl;
	/*p->ListInsert(0, e1);
	p->ListInsert(1, e2);
	p->ListInsert(2, e3);
	p->ListInsert(3, e4);
	p->ListInsert(4, e5);
	p->ListInsert(5, e6);
	p->ListInsert(6, e7);*/

	/*cout << "length:"<<p->ListLength() <<endl;
	p->ListInsert(2, e7);
	cout << "length:" << p->ListLength() << endl;*/

	/*int temp;
	p->GetElem(3, temp);
	cout << temp << endl;
	p->PriorElem(temp, temp);
	cout << temp << endl;
	p->NextElem(temp, temp);
	cout << temp << endl;
	cout<<p->LocateElem(temp)<<endl;*/
	/*p->ListDelete(0, temp);
	cout << "#"<<temp << endl;
	if (!p->ListEmpty())
	{
		cout << "该线性表不为空！" << endl;
	}

	p->ClearList();

	if (p->ListEmpty())
	{
		cout << "该线性表为空！" << endl;
	}*/
	//p->ListTraverse();

	List<char> *p = new List<char>(3);
	char p1 = 'a';
	p->ListInsert(0, p1);
	p->ListTraverse();

	delete p;
	p = NULL;
	system("pause");
	return 0;
}