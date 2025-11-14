#include "duck.h"

void C_DUCK::setMove(C_MOVE* pMove)
{
    m_pMove = pMove;
}

C_MOVE* C_DUCK::gerMove()
{
    return m_pMove;
}
