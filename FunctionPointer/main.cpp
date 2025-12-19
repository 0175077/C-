// ConsoleApplication45.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int add(int n1, int n2);
int mul(int n1, int n2);

int main()
{
	// C 방식
	int(*pFunc)(int, int) {};
	pFunc = add;
	printf("%d\n", pFunc(10, 20));

	pFunc = mul;
	printf("%d\n", pFunc(10, 20));


	// C++ 정석
	pFunc = &mul;
	printf("%d\n", (*pFunc)(20, 30));

	// 사실 이것도 되는데 정석으로 하자
	pFunc = mul;
	pFunc = &mul;
	pFunc = *mul;

}

int add(int n1, int n2)
{
	return n1 + n2;
}

int mul(int n1, int n2)
{
	return n1 * n2;
}
