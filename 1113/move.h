#pragma once


#include <stdio.h>

__interface I_MOVE
{
	void move();
};

class C_MOVE abstract : public I_MOVE
{
public:
	C_MOVE() = default;
	virtual ~C_MOVE() = default;
	C_MOVE(const C_MOVE&) = delete;
	C_MOVE & operator=(const C_MOVE&) = delete;
};