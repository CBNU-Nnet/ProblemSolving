#include <iostream>
using namespace::std;
int main(void)
{
	int N;
	cin >> N;
	for (int i = 1; i < 10; i++)
	{
		printf("%d * %d = %d\n",N, i, N*i);//출력형식에 맞게 
	}
}
