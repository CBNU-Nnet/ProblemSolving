#include <iostream>
using namespace::std;
int main()
{
	int a;
	while ((a = getchar()) != EOF)
	{
		putchar(a);
    //11718과 동일
		if (a == EOF)
			break;
	}
}
