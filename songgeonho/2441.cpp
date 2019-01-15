#include <iostream>
#include <iomanip>
using namespace::std;
int main(void)
{
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		for (int j = i; j > 1; j--)
			printf(" ");
		for (int j = N; j >= i ; j--) {
			cout << "*";
		}
		printf("\n");
	}
}
