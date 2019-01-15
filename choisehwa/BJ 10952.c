#include<stdio.h>
int main() {

	int a, b;

	while (scanf("%d %d", &a, &b) != EOF)
	{
		if (a*b != 0)
			printf("%d\n", a + b);
		else
			return 0;
	}
	
}
