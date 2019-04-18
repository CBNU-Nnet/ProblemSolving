#include <iostream>

using namespace std;

#define MAX 1000000000

long long DP[201][201];

int PlusDivide(int n, int k) {
	DP[0][0] = 1LL;

	for (int i = 1; i <= k; i++) {
		for (int j = 0; j <= n; j++) {
			for (int l = 0; l <= j; l++) {
				DP[i][j] += DP[i - 1][j - l];
				DP[i][j] %= MAX;
			}
		}
	}

	return DP[k][n];
}

int main() {
	int N = 0;
	int K = 0;

	cin >> N >> K;

	if (N > 200 || N < 1 || K > 200 || K < 1)
		return 0;

	cout << PlusDivide(N, K) << '\n';

}