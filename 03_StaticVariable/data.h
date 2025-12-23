#pragma once

#include <stdio.h>

class C_DATA
{
private:
	int m_nData;
	static int m_nDataStatic;


public:
	C_DATA();
	void setData(int nData);
	static void setDataStatic(int nData);
	int getData();

	static int getDataStatic();
};