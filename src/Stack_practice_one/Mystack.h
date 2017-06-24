#ifndef MYSTACK_H
#define  MYSTACK_H
#include <stdlib.h>

template <typename T>
class MyStack
{
public:
	MyStack(int size);//设置初始空间
	~MyStack();//回收空间
	bool stackEmpty();//判空
	bool stackFull();//判满
	void clearStack();//清空
	int stackLength();//已有元素的个数
					  //void push(char elem);//入栈
					  //void pop(char &elem);//出栈，通过引用将出栈的值返回去
					  /*void push(Coordinate elem);
					  void pop(Coordinate &elem);*/
	void push(T elem);
	void pop(T &elem);
	void stackTraverse(bool isEromButtom);//遍历所有元素
private:
	//char *m_pBuffer;//栈空间指针
	//Coordinate *m_pBuffer;
	T *m_pBuffer;
	int m_iSize;//栈容量
	int m_iTop;//栈顶，栈中元素个数
};


template<typename T>
MyStack<T>::MyStack(int size)
{
	m_iSize = size;
	m_pBuffer = new T[m_iSize];
	m_iTop = 0;
}

template<typename T>
MyStack<T>::~MyStack()
{
	delete m_pBuffer;
	m_pBuffer = NULL;
}

template<typename T>
bool MyStack<T>::stackEmpty()
{
	if (0 == m_iTop)//提高代码质量
		return true;
	else
		return false;
}

template<typename T>
bool MyStack<T>::stackFull()
{
	if (m_iTop >= m_iSize)//>=
		return true;
	else
		return false;
}
template<typename T>
void MyStack<T>::clearStack()
{
	m_iTop = 0;//再存放新值直接覆盖
}
template<typename T>
int MyStack<T>::stackLength()
{
	return m_iTop;
}

template<typename T>
void MyStack<T>::push(T elem)
{
	if (stackFull())
		cout << "已满" << endl;//或者通过异常处理
	else

	{
		m_pBuffer[m_iTop] = elem;//需要注意赋值的情况，默认的拷贝构造函数就行，有时候注意深拷贝
		m_iTop++;
	}
}

template<typename T>
void MyStack<T>::pop(T &elem)
{
	if (stackEmpty())
		cout << "为空" << endl;//抛出异常或者通过bool类型的返回值
	else
	{
		m_iTop--;
		elem = m_pBuffer[m_iTop];
		//结合返回类型需要有返回值，如果为void，可以省略返回
	}
}
template<typename T>
void MyStack<T>::stackTraverse(bool isEromButtom)
{
	if (isEromButtom)
		for (int i = 0; i < m_iTop; i++)//从栈底输出
		{
			cout << m_pBuffer[i];//应定义运算符重载
								 //m_pBuffer[i].printCoordinate();
		}
	else
		for (int i = m_iTop - 1; i >= 0; i--)//从栈顶输出
		{
			cout << m_pBuffer[i];
			//m_pBuffer[i].printCoordinate();
		}
	cout << endl;
}
#endif