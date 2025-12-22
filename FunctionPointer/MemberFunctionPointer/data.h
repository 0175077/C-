#pragma once

#include <stdio.h>

class C_DATA
{
private:
	int m_n1;
	int m_n2;

public:
	C_DATA() = default;
	void setData(int n1, int n2);
	void add();
	void mul();

};