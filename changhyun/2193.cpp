#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	long a;
	cin >> a;
	long long *arr = new long long[a+1];
	arr[1] = 1;
	arr[2] = 1;
	for (int i = 3; i <= a; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	cout << arr[a];
	return 0;
}

