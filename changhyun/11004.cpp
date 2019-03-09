#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	long long k;
	long long n;
	scanf("%lld", &n);
	scanf("%lld", &k);
	long long *arr = new long long[n];

	for (int i = 0; i < n; i++)
	{
		scanf("%lld", &arr[i]);
	}

	nth_element(arr, arr + k-1, arr + n);

	printf("%lld", arr[k -1]);

}
