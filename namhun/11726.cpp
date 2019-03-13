#include <iostream>

using namespace std;

int DP[1000];

int two(int n) {
	if (n <= 3) {
		return n;
	}
	else if (DP[n] != 0) {
		DP[n];
	}
	else {
		DP[n] = two(n - 1) + two(n - 2);
	}

	return DP[n] % 10007;
}
int main() {
	int n;

	cin >> n;

	if (n > 1000 || n < 1)
		return 0;

	cout << two(n) % 10007 << endl;

	return 0;
}