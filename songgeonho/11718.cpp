#include <iostream>
using namespace::std;

int main()
{
	int a;
	while ((a = getchar()) != EOF)
	{
		putchar(a); 
   //문자하나 입력받고 출력하고 , 입력받고 출력하고 , 입력받고 출력하고 
		if (a == EOF)  
			break;
	}
}
