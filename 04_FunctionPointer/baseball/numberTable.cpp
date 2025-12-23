#include "numberTable.h"

void C_NUMBER_TABLE::init()
{
	for (int i = 0; i < 10; i++)
	{
		m_arNumber[i] = C_BASEBALL::E_RESULT::E_OUT;
	}
}

void C_NUMBER_TABLE::setBall(const int* pBall, int nCount)
{
	for (int i = 0; i < nCount; i++)
	{
		m_arNumber[pBall[i]] = C_BASEBALL::E_RESULT::E_BALL;
	}
}

void C_NUMBER_TABLE::setStrike(int nStrike)
{
	m_arNumber[nStrike] = C_BASEBALL::E_RESULT::E_STRIKE;
}

C_BASEBALL::E_RESULT C_NUMBER_TABLE::getResult(int nNumber)
{
	return C_BASEBALL::E_RESULT();
}
