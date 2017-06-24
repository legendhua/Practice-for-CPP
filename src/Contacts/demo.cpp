#include <stdlib.h>
#include "List.h"
#include "Node.h"
#include <iostream>
using namespace std;
/*************************************************/
/*线性表--通讯录

  联系人信息：姓名  电话
  
  功能菜单：
  1、新建联系人
  2、删除联系人
  3、浏览通讯录
  4、退出通讯录
  */

int menu()
{
	//显示通讯录功能菜单
	cout << "功能菜单：" << endl;
	cout << "1、新建联系人" << endl;
	cout << "2、删除联系人" << endl;
	cout << "3、浏览通讯录" << endl;
	cout << "4、退出通讯录" << endl;

	cout << "请输入：";
	int order = 0;
	cin >> order;
	return order;
}

void createPerson(List *pList)
{
	Node userNode;
	cout << "请输入姓名：" << endl;
	cin >> userNode.data.name;
	cout << "请输入电话：" << endl;
	cin >> userNode.data.phone;
	pList->ListInsertHead(&userNode);
}

void deletePerson(List *pList)
{
	int num;
	cout << "请输入删除的编号：" << endl;
	cin >> num;
	Node deleteNode;
	pList->ListDelete(num, &deleteNode);
	cout << "删除完成！" << endl;
}

int main(void)
{
	List *pList = new List();

	int userOrder = 0;
	while (userOrder!=4)  //重复的使用菜单
	{
		userOrder = menu();
		switch (userOrder)
		{
		case 1:
			cout << "用户指令--->>新建联系人" << endl;
			createPerson(pList);
			break;
		case 2:
			cout << "用户指令--->>删除联系人" << endl;
			deletePerson(pList);
			break;
		case 3:
			cout << "用户指令--->>浏览联系人" << endl;
			pList->ListTraverse();
			break;
		case 4:
			cout << "用户指令--->>退出联系人" << endl;
			break;
		default:
			break;
		}
	}
	delete pList;
	pList = NULL;
	/*Node node1;
	node1.data.name = "tester1";
	node1.data.phone = "123456";
	Node node2;
	node2.data.name = "tester2";
	node2.data.phone = "654321";

	List *pList = new List();

	pList->ListInsertHead(&node1);
	pList->ListInsertHead(&node2);
	pList->ListTraverse();*/

	system("pause");
	return 0;
}