#include <iostream>
#include "data.h"

int main()
{
	C_DATA c1{};
	C_DATA c2{};
	void (C_DATA:: * pFunc)() = nullptr;


	c1.setData(1, 2);
	c2.setData(10, 20);

	pFunc = &C_DATA::add;

	(c1.*pFunc)();
	(c2.*pFunc)();

	pFunc = &C_DATA::mul;

	(c1.*pFunc)();
	(c2.*pFunc)();

}