#include <string>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
long a[10001];
int main()
{

	int n;
	long max = 0;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];	
	}
	sort(a, a + n);

	if (a[0] * a[1] > max)
		max = a[0] * a[1];
	if (a[0] * a[1] * a[n - 1] > max)
		max = a[0] * a[1] * a[n - 1];
	if (a[n - 3] * a[n - 1] * a[n - 2] > max)
		max = a[n - 3] * a[n - 1] * a[n - 2];
	if (a[n - 1] * a[n - 2] > max)
		max =  a[n - 1] * a[n - 2];
	cout << max;
}
