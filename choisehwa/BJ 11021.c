#include <stdio.h>
int main()
{
	int a, b, t, i;

	scanf("%d", &t);

	for (i = 1; i <= t; i++)
	{
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d\n", i,a + b);
	}


	return 0;
}
