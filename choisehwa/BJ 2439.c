#include<stdio.h>
int main() {
	int n;
	int i, j, l;
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		for (l = i; l < n-1; l++)
			printf(" ");
		for (j = 0; j < i + 1; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}
