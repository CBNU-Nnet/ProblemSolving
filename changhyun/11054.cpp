#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

	long a[1001];
	long b[1001];
	long c[1001];
int main()
{
	int n;
	int max=0;
	int min = 0;
	int q = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = 1;
		c[i] = 1;
	}

	for (int i = 0; i < n; i++){

		for (int j = 0; j < i; j++)
		{
			if(a[i]>a[j]&&b[j]>=b[i]){
				b[i] = b[j] + 1;
			}
		}

	}

	for (int i = n-1; i >= 0; i--)
	{
		for (int j = n-1; j > i; j--)
		{
			if (a[i]>a[j] && c[j] >= c[i]) {
				c[i] = c[j] + 1;
			}
		}

	}
	for (int i = 0; i < n; i++)
	{
		if (q < b[i] + c[i]) {
			q = b[i] + c[i];
		}
		
	}

	cout << q-1;
	return 0;
}
