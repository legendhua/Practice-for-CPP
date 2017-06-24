#ifndef MYSTACK_H
#define  MYSTACK_H
#include <stdlib.h>

template <typename T>
class MyStack
{
public:
	MyStack(int size);//���ó�ʼ�ռ�
	~MyStack();//���տռ�
	bool stackEmpty();//�п�
	bool stackFull();//����
	void clearStack();//���
	int stackLength();//����Ԫ�صĸ���
					  //void push(char elem);//��ջ
					  //void pop(char &elem);//��ջ��ͨ�����ý���ջ��ֵ����ȥ
					  /*void push(Coordinate elem);
					  void pop(Coordinate &elem);*/
	void push(T elem);
	void pop(T &elem);
	void stackTraverse(bool isEromButtom);//��������Ԫ��
private:
	//char *m_pBuffer;//ջ�ռ�ָ��
	//Coordinate *m_pBuffer;
	T *m_pBuffer;
	int m_iSize;//ջ����
	int m_iTop;//ջ����ջ��Ԫ�ظ���
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
	if (0 == m_iTop)//��ߴ�������
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
	m_iTop = 0;//�ٴ����ֱֵ�Ӹ���
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
		cout << "����" << endl;//����ͨ���쳣����
	else

	{
		m_pBuffer[m_iTop] = elem;//��Ҫע�⸳ֵ�������Ĭ�ϵĿ������캯�����У���ʱ��ע�����
		m_iTop++;
	}
}

template<typename T>
void MyStack<T>::pop(T &elem)
{
	if (stackEmpty())
		cout << "Ϊ��" << endl;//�׳��쳣����ͨ��bool���͵ķ���ֵ
	else
	{
		m_iTop--;
		elem = m_pBuffer[m_iTop];
		//��Ϸ���������Ҫ�з���ֵ�����Ϊvoid������ʡ�Է���
	}
}
template<typename T>
void MyStack<T>::stackTraverse(bool isEromButtom)
{
	if (isEromButtom)
		for (int i = 0; i < m_iTop; i++)//��ջ�����
		{
			cout << m_pBuffer[i];//Ӧ�������������
								 //m_pBuffer[i].printCoordinate();
		}
	else
		for (int i = m_iTop - 1; i >= 0; i--)//��ջ�����
		{
			cout << m_pBuffer[i];
			//m_pBuffer[i].printCoordinate();
		}
	cout << endl;
}
#endif