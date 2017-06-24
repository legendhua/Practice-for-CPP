#include <iostream>
#include <stdlib.h>
#include <string>
#include "Teacher.h"
using namespace std;

/****************************************************************/
/*Teacher类
   1，自定义析构函数
   2，普通方式实例化的对象，在销毁对象时是否自动调用析构函数
   3，通过拷贝构造函数实例化对象，在销毁对象时是否自动调用析构函数
 数据：
      名字
	  年龄
成员函数：
      数据成员的封装函数*/
/*****************************************************************/

int main(void)
{
	Teacher t1;
	//Teacher *p = new Teacher();
	//delete p;
	Teacher t2(t1);//程序结束时，会调用析构函数进行销毁实例化的对象
	system("pause");
	return 0;
}