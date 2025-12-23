#pragma once


#include <stdio.h>
#include "baseball.h"

class C_NUMBER_TABLE
{
private:
	C_BASEBALL::E_RESULT m_arNumber[10];
public:
	C_NUMBER_TABLE() = default;
	void init();
	void setBall(const int* pBall, int nCount);
	void setStrike(int nStrike);
	C_BASEBALL::E_RESULT getResult(int nNumber);

};