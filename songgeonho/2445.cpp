#include <iostream>
using namespace::std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i <  n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j <= i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		for (int j = n; j < 2 * n; j++)
		{
			if ( j >= 2*n-i-1)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	for (int i = n - 2; i >= 0; i--)
	{
		for (int j = 0; j < n; j++)
		{
			if (j <= i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		for (int j = n; j < 2 * n; j++)
		{
			if (j >= 2 * n - i - 1)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
//규칙을 보고 그냥 있는그대로 
