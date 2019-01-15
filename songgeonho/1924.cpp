#include <iostream>
using namespace::std;
int main(void)
{
	int x, y, a=0;
	cin >> x >> y; //월일
	int b[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 }; // 윤달
	for (int i = 1; i<x; i++) {
		a += b[i-1];  // 전 달에 해당하는 총 day 더하기 
	}
	a += y; // 해당 월 day 
	a %= 7; // 1월1일 월요일로 계산 나머지 1-월, 2-화 순서
	if (a == 1)
		printf("MON");
	else if (a == 2)
		printf("TUE");
	else if (a == 3)
		printf("WED");
	else if (a == 4)
		printf("THU");
	else if (a == 5)
		printf("FRI");
	else if (a == 6)
		printf("SAT");
	else if (a == 0)
		printf("SUN");
}
