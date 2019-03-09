#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
	long a[10001];
	long d[10001];
int main()
{
	int n;

	cin >> n;


	for (int i = 1; i <= n; i++) {
		cin >> d[i];
	}

	a[1] = d[1];
	a[2] = d[1] + d[2];

	for (int i = 3; i <= n; i++) {
		a[i] = a[i - 1];

		if (a[i] < a[i - 2] + d[i]) {
			a[i] = a[i - 2] + d[i];
		}
		if (a[i] < a[i - 3] + d[i - 1] + d[i]) {
			a[i] = a[i - 3] + d[i - 1] + d[i];
		}
	}

	cout << a[n];

	return 0;
}
