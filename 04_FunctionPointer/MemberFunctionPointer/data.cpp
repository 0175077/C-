#include "data.h"

void C_DATA::setData(int n1, int n2)
{
	m_n1 = n1;
	m_n2 = n2;
}

void C_DATA::add()
{
	printf("%d \n", m_n1 + m_n2);
}

void C_DATA::mul()
{
	printf("%d \n", m_n1 * m_n2);
}
