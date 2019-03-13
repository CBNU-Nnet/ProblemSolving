#include <iostream>

using namespace std;

int dp[31];

int tile(int n) {

	dp[0] = 0;
	dp[2] = 3;
	for (int i = 2; i <= n; i=i+2) {
		dp[i] = 3 * dp[i - 2];
		for (int j = i - 4; j >= 0; j = j - 2) {
			dp[i] += 2 * dp[j];
		}
	}

	return dp[n];
}

int main() {
	int N;
	cin >> N;
	if (N > 30 || N < 1)
		return 0;

	cout << tile(N) << '\n';
}