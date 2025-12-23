#include <random>
#include "baseball.h"
#include "numberTable.h"

using namespace std;

void C_BASEBALL::makeNumber()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(0, 9);

    for (int i = 0; i < 10; ++i)
    {
        m_arNumber[i] = i;
    }

    for (int i = 0; i < 50; ++i)
    {
        swapData(m_arNumber[dist(gen)], m_arNumber[dist(gen)]);
    }

    for (int i = 0; i < 4; ++i)
    {
        printf("%d ", m_arNumber[i]);
    }
    printf("\n");
}

void C_BASEBALL::swapData(int& nDst, int& nSrc)
{
    int nTemp = nDst;
    nDst = nSrc;
    nSrc = nTemp;
}

void C_BASEBALL::init(int nTableCount)
{
	m_nTableCount = nTableCount;
	m_pTable = new C_NUMBER_TABLE[m_nTableCount]{};


    makeNumber();
    for (int i = 0; i < m_nTableCount; i++)
    {
        m_pTable[i].init();
        m_pTable[i].setBall(m_arNumber, m_nTableCount);
        m_pTable[i].setStrike(m_arNumber[i]);
    }

}

void C_BASEBALL::run()
{
    int m_arUser[10]{};

    for (int i = 0; i < m_nTableCount; i++)
    {
        scanf_s("%d", &m_arUser[i]);
    }

    for (int i = 0; i < m_nTableCount; i++)
    {
        E_RESULT eResult = m_pTable[i].getResult(m_arUser[i]);
        if (eResult == E_RESULT::E_NONE)
            printf("세팅안됨\n");
        else if (eResult == E_RESULT::E_BALL)
            printf("볼\n");
        else if (eResult == E_RESULT::E_STRIKE)
            printf("스트라이크\n");
    }


}
