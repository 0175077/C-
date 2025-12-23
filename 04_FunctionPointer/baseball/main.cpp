#include <iostream>
#include "baseball.h"

int main()
{
    C_BASEBALL cBaseBall{};

    cBaseBall.init(4);
    cBaseBall.run();
}