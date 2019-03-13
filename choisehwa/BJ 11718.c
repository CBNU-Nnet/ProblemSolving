#include<stdio.h>
#include<string.h>
int main()
{
	char str[101];

	while (gets(str) != '\0')
		puts(str);

	return 0;
}
