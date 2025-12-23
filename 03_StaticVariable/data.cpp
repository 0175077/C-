#include "data.h"

int C_DATA::m_nDataStatic = 0;

C_DATA::C_DATA() : m_nData{}
{
}

void C_DATA::setData(int nData)
{
    m_nData = nData;
}

void C_DATA::setDataStatic(int nData)
{
    m_nDataStatic = nData;
}

int C_DATA::getData()
{
    return m_nData;
}

int C_DATA::getDataStatic()
{
    return m_nDataStatic;
}
