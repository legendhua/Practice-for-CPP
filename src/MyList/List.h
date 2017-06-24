#ifndef LIST_H
#define LIST_H
#include <iostream>
using namespace std;


template<typename T>
class List
{
public:
	List(int size);
	~List();
	void ClearList();
	bool ListEmpty();
	int ListLength();
	bool GetElem(int i, T &e);
	int LocateElem(T &e);
	bool PriorElem(T &currentElem,T &preElem);
	bool NextElem(T &currentElem, T &nextElem);
	bool ListInsert(int i, T &e);
	bool ListDelete(int i, T &e);
	void ListTraverse();
private:
	T *m_pList;
	int m_iSize;
	int m_iLength;
};



template<typename T>
List<T>::List(int size)
{
	m_iSize = size;
	m_pList = new T[m_iSize];
	m_iLength = 0;
}

template<typename T>
List<T>::~List()
{
	delete[]m_pList;
	m_pList = NULL;
}

template<typename T>
void List<T>::ClearList()
{
	m_iLength = 0;
}

template<typename T>
bool List<T>::ListEmpty()
{
	if (m_iLength == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

template<typename T>
int List<T>::ListLength()
{
	return m_iLength;
}

template<typename T>
bool List<T>::GetElem(int i, T &e)
{
	if (i < 0 || i >= m_iSize)
	{
		return false;
	}
	e = m_pList[i];
	return true;
}

template<typename T>
int List<T>::LocateElem(T &e)
{
	for (int i = 0; i < m_iLength; i++)
	{
		if (m_pList[i] == e)
		{
			return i;
		}
	}
	return -1;
}

template<typename T>
bool List<T>::PriorElem(T &currentElem, T &preElem)
{
	int CurrentLocation = LocateElem(currentElem);
	if (CurrentLocation == -1)
	{
		return false;
	}
	else if (CurrentLocation == 0)
	{
		return false;
	}
	else
	{
		preElem = m_pList[CurrentLocation - 1];
		return true;
	}

}

template<typename T>
bool List<T>::NextElem(T &currentElem, T &nextElem)
{
	int CurrentLocation = LocateElem(currentElem);
	if (CurrentLocation == -1)
	{
		return false;
	}
	else if (CurrentLocation == m_iLength - 1)
	{
		return false;
	}
	else
	{
		nextElem = m_pList[CurrentLocation + 1];
		return true;
	}
}

template<typename T>
bool List<T>::ListInsert(int i, T &e)
{
	if (i<0 || i>m_iLength)
	{
		return false;
	}
	for (int k = m_iLength - 1; k >= i; k--)
	{
		m_pList[k + 1] = m_pList[k];
	}
	m_pList[i] = e;
	m_iLength++;
	return true;
}

template<typename T>
bool List<T>::ListDelete(int i, T &e)
{
	if (i<0 || i>m_iLength - 1)
	{
		return false;
	}
	e = m_pList[i];//将删除的元素拷贝出来
	for (int k = i; k < m_iLength; k++)
	{
		m_pList[k] = m_pList[k + 1];
	}
	m_iLength--;
	return true;
}

template<typename T>
void List<T>::ListTraverse()
{
	for (int i = 0; i < m_iLength; i++)
	{
		cout << m_pList[i] << endl;
	}
}



#endif