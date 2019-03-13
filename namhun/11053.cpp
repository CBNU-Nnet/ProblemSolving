#include <iostream>

using namespace std;

#define MAX(a,b) (((a)>(b))?(a):(b))

int Max[1001];

int arr(int n) {
	int *DP = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> DP[i];
		if (DP[i] > 1000 || DP[i] < 1)
			return 0;
	}

	for (int i = 0; i < n; i++) {
		Max[i] = 1;
		for (int j = 0; j < i; j++) {
			if (DP[j] < DP[i] && Max[i] < Max[j] + 1) {
				Max[i] = Max[j] + 1;
			}
		}
	}

	for (int i = 1; i < n; i++) {
		Max[i] = MAX(Max[i], Max[i - 1]);
	}

	return Max[n - 1];
}

int main() {
	int N;

	cin >> N;

	if (N > 1000 || N < 1)
		return 0;

	cout << arr(N) << '\n';
}