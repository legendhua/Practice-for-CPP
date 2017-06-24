#include "Str_match.h"
#include <map>

Str_match::Str_match(string str)
{
	m_sStr = str;
	m_cMatch = 0;
	m_pStack = new MyStack<char>(str.size());
}
Str_match::~Str_match()
{
	delete m_pStack;
	m_pStack = NULL;
}
void Str_match::match_result()
{
	map<char, char> m;
	pair<char, char> p1('(', ')');
	pair<char, char> p2('{', '}');
	pair<char, char> p3('[', ']');
	pair<char, char> p4('<', '>');
	m.insert(p1);
	m.insert(p2);
	m.insert(p3);
	m.insert(p4);
	m_pStack->push(m_sStr[0]);
	for (int i = 1; i < int(m_sStr.size()); i++)
	{
		m_cMatch = m[m_pStack->out_top()];
		if (m_sStr[i] == m_cMatch)
		{
			m_pStack->pop();
			m_cMatch = m[m_pStack->out_top()];
		}
		else
		{
			m_pStack->push(m_sStr[i]);
		}
	}
	if (m_pStack->stackEmpty())
	{
		cout << "·ûºÅÆ¥Åä³É¹¦£¡" << endl;
	}
	else
	{
		cout << "·ûºÅÆ¥Åä²»³É¹¦£¡" << endl;
	}
}
