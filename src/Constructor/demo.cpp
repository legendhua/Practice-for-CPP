#include <iostream>
#include <stdlib.h>
#include <string>
#include "Teacher.h"
using namespace std;

/****************************************************************/
/*Teacher��
   �Զ����޲ι��캯��
   �Զ����вι��캯��
 ���ݣ�
      ����
	  ����
��Ա������
      ���ݳ�Ա�ķ�װ����*/
/*****************************************************************/

int main(void)
{
	Teacher t1;
	Teacher t2("Merry", 15);
	Teacher t3("James");
	cout << t1.getName() << " " << t1.getAge() << endl;
	cout << t2.getName() << " " << t2.getAge() << endl;
	cout << t3.getName() << " " << t3.getAge() << endl;
	system("pause");
	return 0;
}