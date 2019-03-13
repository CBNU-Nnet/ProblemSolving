#include <iostream>
using namespace std;
int card[10001];
int main()
{
	int s;
	scanf("%d", &s);

	for (int i = 0; i < s; i++)
	{
		int a;
		scanf("%d", &a);
		card[a]++;
	}
	for (int i = 0; i < 10001; i++) {
		if (card[i] >= 1) {
			for (int j = 0; j < card[i]; j++) {
				printf("%d\n", i);
			}
		}
		
	}

}
