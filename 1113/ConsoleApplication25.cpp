// ConsoleApplication25.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

#include "duck.h"
#include "swim.h"
#include "fly.h"
#include "walk.h"


int main()
{
    C_DUCK* arDuck[5]{};
    C_MOVE* pMove = new C_FLY{};

    for (int i = 0; i < 5; i++)
    {
        arDuck[i] = new C_DUCK{};
    }
}

