#include<stdio.h>
int main()
{
	int i;
	int num;
	int sum = 0;

	scanf("%d", &num);

	for (i = 1; i < num+1; i++)
	{
		sum += i;
	}

	printf("%d", sum);
	return 0;
}
