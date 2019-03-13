#include <iostream>

using namespace std;

#define M 10007

int DP[1001][1001];

int up(int n) {
	long long sum = 0;

	for (int i = 0; i <= 9; i++)
		DP[1][i] = 1;
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j <= 9; j++) {
			for (int k = 0; k <= j; k++) {
				DP[i][j] += DP[i - 1][k];
				DP[i][j] %= M;
			}
		}
	}

	for (int i = 0; i <= 9; i++)
		sum += DP[n][i];
	return sum % M;
}

int main() {
	int N;
	cin >> N;
	cout << up(N) << endl;
}