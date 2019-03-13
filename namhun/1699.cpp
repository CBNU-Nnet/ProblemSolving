#include <iostream>

using namespace std;

int dp[100001];

int power(int n) {
	for (int i = 1; i <= n; i++) {
		dp[i] = i;
		for (int j = 1; j * j <= i; j++) {
			if (dp[i] > dp[i - j * j] + 1)
				dp[i] = dp[i - j * j] + 1;
		}
	}
	return dp[n];
}

int main() {
	int N;

	cin >> N;
	if (N > 100000 || N < 1)
		return 0;

	cout << power(N) << '\n';
}