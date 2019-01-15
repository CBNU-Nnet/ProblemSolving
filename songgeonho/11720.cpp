#include <iostream>
#include <string>
#include <stdlib.h>
using namespace::std;

int main()
{

	int test, d, sum = 0;
	char c;
	cin >> test;
	cin.ignore(); // 버퍼비우기
	for (int i = 0; i < test; i++)
	{
		scanf("%c", &c);
		int a = c - '0';
		sum += a;
	}
}
