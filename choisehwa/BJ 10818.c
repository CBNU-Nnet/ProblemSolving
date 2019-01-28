#include<stdio.h>
#include<stdlib.h>
int main()
{
	int* arr;
	int i,j;
	int n;
	int min,max;

	scanf("%d", &n);
	
	arr = (int*)malloc(sizeof(int)*n);
	
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	min = arr[0];
	max = arr[0];
	for (i = 0; i < n; i++)
	{
		if (arr[i] < min)
			min = arr[i];

		if (arr[i] > max)
			max = arr[i];
	}

	printf("%d %d", min, max);
	free(arr);
	return 0;
}
