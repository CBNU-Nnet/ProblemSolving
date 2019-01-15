#include <iostream>
using namespace::std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int space = n-i-1;space >0;space--) //맨처음 공백출력
			printf(" ");
		for (int j = 0; j < 2 * i+1; j++)
		{
			if ((i == 0 || i == n-1 ) || (j == 0 || j == 2 * i)) //(첫번째라인 or 마지막라인) or(2~마지막-1라인의 첫번째)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
