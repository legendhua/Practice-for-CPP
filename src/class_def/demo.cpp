#include <iostream>
#include <stdlib.h>
#include <string>
#include "Teacher.h"
using namespace std;

/*****************************************************************/
/*����һ��Teacher�࣬Ҫ��ֱ����ͬ�ļ����ⶨ��ͷ��ļ����ⶨ��
�ķ�ʽ��ɣ�����Ҫ�����£�
���ݳ�Ա��
	����
	����
	�Ա�
��Ա������
	���ݳ�Ա�ķ�װ����
	�ڿ�teach*/
/*****************************************************************/




int main(void)
{
	Teacher tea;
	tea.setName("zhangsan");
	tea.setAge(21);
	tea.setGender("��");
	cout << tea.getName() << " " << tea.getAge() << " " << tea.getGender() << endl;
	tea.teach();
	system("pause");
	return 0;
}