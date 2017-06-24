#ifndef STR_MATCH_H
#define STR_MATCH_H
#include <string>
#include "MyStack.h"
#include <iostream>
using namespace std;

class Str_match
{
public:
	Str_match(string str);
	~Str_match();
	void match_result();
private:
	string m_sStr;
	MyStack<char> *m_pStack;
	char m_cMatch;
};


#endif