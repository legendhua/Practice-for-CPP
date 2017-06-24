#include <stdlib.h>
#include "List.h"
#include "Node.h"
#include <iostream>
using namespace std;
/*************************************************/
/*���Ա�--ͨѶ¼

  ��ϵ����Ϣ������  �绰
  
  ���ܲ˵���
  1���½���ϵ��
  2��ɾ����ϵ��
  3�����ͨѶ¼
  4���˳�ͨѶ¼
  */

int menu()
{
	//��ʾͨѶ¼���ܲ˵�
	cout << "���ܲ˵���" << endl;
	cout << "1���½���ϵ��" << endl;
	cout << "2��ɾ����ϵ��" << endl;
	cout << "3�����ͨѶ¼" << endl;
	cout << "4���˳�ͨѶ¼" << endl;

	cout << "�����룺";
	int order = 0;
	cin >> order;
	return order;
}

void createPerson(List *pList)
{
	Node userNode;
	cout << "������������" << endl;
	cin >> userNode.data.name;
	cout << "������绰��" << endl;
	cin >> userNode.data.phone;
	pList->ListInsertHead(&userNode);
}

void deletePerson(List *pList)
{
	int num;
	cout << "������ɾ���ı�ţ�" << endl;
	cin >> num;
	Node deleteNode;
	pList->ListDelete(num, &deleteNode);
	cout << "ɾ����ɣ�" << endl;
}

int main(void)
{
	List *pList = new List();

	int userOrder = 0;
	while (userOrder!=4)  //�ظ���ʹ�ò˵�
	{
		userOrder = menu();
		switch (userOrder)
		{
		case 1:
			cout << "�û�ָ��--->>�½���ϵ��" << endl;
			createPerson(pList);
			break;
		case 2:
			cout << "�û�ָ��--->>ɾ����ϵ��" << endl;
			deletePerson(pList);
			break;
		case 3:
			cout << "�û�ָ��--->>�����ϵ��" << endl;
			pList->ListTraverse();
			break;
		case 4:
			cout << "�û�ָ��--->>�˳���ϵ��" << endl;
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