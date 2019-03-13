#include<stdio.h>
int main()
{
	char arr[101];
	int i,j;

	gets(arr);
	j = 0;

	for (i = 0; arr[j] != NULL ; i++)
	{
		for (; j < 10*(i+1) && arr[j] != NULL; j++)
			printf("%c", arr[j]);

		printf("\n");
	}
	return 0;
}
