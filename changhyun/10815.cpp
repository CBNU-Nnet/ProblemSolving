#include <iostream>
using namespace std;
int card[20000002];
int main()
{
	int s, s2;
	
	scanf("%d", &s);

	for (int i = 0; i < s; i++)
	{
		long long a;
		scanf("%lld", &a);
		card[a+10000000] = 1;
	}
	scanf("%d", &s2);

	for (int i = 0; i < s2; i++)
	{
		long long a;
		scanf("%lld", &a);
		if (card[a+10000000] == 1)
			printf("1 ");
		else
			printf("0 ");
	}


}
