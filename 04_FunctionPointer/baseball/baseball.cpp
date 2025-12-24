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

bool C_BASEBALL::input()
{
    int arCheck[10]{};
    bool arResult[10]{};

    arResult[m_nTableCount] = true;

    for (int i = 0; i < m_nTableCount; i++)
    {
        scanf_s("%d ", &m_arInput[i]);
        arCheck[m_arInput[i]] = 1;
    }

    int nTotal{};
    for (int i = 0; i < 10; i++)
    {
        nTotal += arCheck[i];
    }

    return arResult[nTotal];
}

bool C_BASEBALL::result()
{
    while (!input())
    {
        printf("다시 입력하세요\n");
    }

    int arResult[(int)E_RESULT::E_MAX]{};
    for (int i = 0; i < m_nTableCount; i++)
    {
        arResult[(int)m_pTable[i].getResult(m_arInput[i])]++;
    }

    for (int i = 0; i < m_nTableCount; i++)
    {
        printf("%d ", arResult[i]);
    }
    // 스트라이크 갯수를 센다
    // 출력한다
    bool arCheck[10]{};
    arCheck[m_nTableCount] = true;




    return arCheck[arResult[(int)E_RESULT::E_STRIKE]];
}

void C_BASEBALL::run()
{
    while (!input())
    {
        // 카운트를 센다
    }

}

