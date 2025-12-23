// ConsoleApplication43.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "data.h"
int main()
{
	C_DATA cData1{};
	C_DATA cData2{};
	cData1.setData(10);


	C_DATA::setDataStatic(10);
	printf("%d \n", C_DATA::getDataStatic());
}
