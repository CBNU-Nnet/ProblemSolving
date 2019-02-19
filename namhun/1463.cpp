#include <iostream>

using namespace std;

int DP[1000000];

int make(int n) {
	if (n == 1)
		return 0;
	if (DP[n] > 0)
		return DP[n];

	DP[n] = make(n - 1) + 1;

	if (n % 2 == 0) {
		int comp1 = make(n / 2) + 1;
		if (DP[n] > comp1)
			DP[n] = comp1;
	}

	if (n % 3 == 0) {
		int comp2 = make(n / 3) + 1;
		if (DP[n] > comp2)
			DP[n] = comp2;
	}

	return DP[n];
}

int main() {
	int N;
	int DP[100];
	cin >> N;
	if (N < 1 || N > 1000000)
		return 0;

	cout << make(N) << endl;
}