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
		
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if(a[i]<a[j]&&b[j]>=b[i]){
				b[i] = b[j] + 1;
			}
			if (b[i] > max)
				max = b[i];
		}

	}



	cout << max+1;

	return 0;
}
