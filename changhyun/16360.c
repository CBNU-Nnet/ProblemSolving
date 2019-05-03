#include <stdio.h>


int main()
{
	char arr[40] = { NULL };
	int i, j;
	int k;
	int n; // 줄 수
	int count = 0; // 글자 수

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%s", arr);
		while (arr[count] != NULL)
			count++;

		

		switch (arr[count - 1])
		{
		case 'a':
			arr[count] = 's';
			break;
		case 'i':
			arr[count - 1] = 'i';
			arr[count] = 'o';
			arr[count + 1] = 's';
			break;
		case 'y':
			arr[count - 1] = 'i';
			arr[count] = 'o';
			arr[count + 1] = 's';
			break;
		case 'l':
			arr[count] = 'e';
			arr[count + 1] = 's';
			break;
		case 'n':
			arr[count - 1] = 'a';
			arr[count] = 'n';
			arr[count + 1] = 'e';
			arr[count + 2] = 's';
			break;
		case 'e':
			if (arr[count - 2] == 'n')
			{
				arr[count - 2] = 'a';
				arr[count - 1] = 'n';
				arr[count] = 'e';
				arr[count + 1] = 's';
			}
			else
			{
				arr[count] = 'u';
				arr[count + 1] = 's';
			}
			break;
		case 'o':
			arr[count] = 's';
			break;
		case 'r':
			arr[count] = 'e';
			arr[count + 1] = 's';
			break;
		case 't':
			arr[count] = 'a';
			arr[count + 1] = 's';
			break;
		case 'u':
			arr[count] = 's';
			break;
		case 'v':
			arr[count] = 'e';
			arr[count + 1] = 's';
			break;
		case 'w':
			arr[count] = 'a';
			arr[count + 1] = 's';
			break;
		default:
			arr[count] = 'u';
			arr[count + 1] = 's';
			break;
		}
		printf("%s", arr);

		count = 0;
		printf("\n");

		for (j = 0; j < 40; j++)
			arr[j] = NULL;
	}
	return 0;
}

