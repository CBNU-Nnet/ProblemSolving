#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	char* a;
	int i;
	int sum=0;
	
	scanf("%d", &n);
    a = (int*)malloc(sizeof(int)*n);
	scanf("%s", a);

	for (i = 0; i < n; i++)
	{
		sum += a[i] - '0';
		
	}

	printf("%d", sum);
    free(a);
	return 0;
}
