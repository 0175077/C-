// bst.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "bst.h"

int main()
{
    C_BST cBst{};

    cBst.insert(7);
    cBst.insert(2);
    cBst.insert(5);
    cBst.insert(6);
    cBst.insert(4);
    cBst.insert(9);
    cBst.insert(8);
    cBst.insert(1);
    cBst.insert(3);

    cBst.print();
}
