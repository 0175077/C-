#pragma once

#include <stdio.h>


class C_MOVE;

class C_DUCK
{
private:
	C_MOVE* m_pMove;

public:
	C_DUCK() = default;
	C_DUCK(const C_DUCK&) = delete;
	C_DUCK& operator=(const C_DUCK&) = delete;

	void setMove(C_MOVE* pMove);
	C_MOVE* gerMove();


};