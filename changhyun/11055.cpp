#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
	long a[1001];
	long b[1001];
int main()
{
	int n;
	int max=0;
	cin >> n;


	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = a[i];
	}
	max = b[0];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if(a[i]>a[j]&&((b[j]+a[i])>b[i])){
				b[i] = b[j] + a[i];
			}
			if (b[i] > max)
				max = b[i];
		}

	}



	cout << max;

	return 0;
}
