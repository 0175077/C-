#include <iostream>
#include "list.h"

int main()
{
    C_LIST cList{};

    cList.pushBack(2);
    cList.pushBack(2);
    cList.pushBack(2);
    cList.pushBack(2);
    cList.pushFront(4);
    cList.pushFront(5);
    cList.pushFront(6);

    C_NODE* pNode = cList.getBegin();
    while (pNode != cList.getEnd())
    {
        printf("%d ", pNode->getData());
        pNode = pNode->getNext();
    }

}