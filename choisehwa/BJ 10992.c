#include<stdio.h>
int main() {
	int n;
	int i, j;
	scanf("%d", &n);

	for (i = 0; i < n-1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
			printf(" ");
		if(i>=0)
			printf("*");
		for (j = 0; j < 2*i - 1; j++)
			printf(" ");
		if(i>0)
			printf("*");
		printf("\n");

	}
	for (i = 0; i < 2 * n - 1; i++)
		printf("*");

	return 0;
}
