#include <iostream>

using namespace std;

#define M 1000000000

int DP[101][101];

int stair(int n) {
	int sum = 0;

	for (int i = 1; i <= 9; i++)
		DP[1][i] = 1;

	for (int i = 2; i <= n; i++) {
		for (int j = 0; j <= 9; j++) {
			DP[i][j] = 0;
			if (j - 1>= 0)
				DP[i][j] += DP[i - 1][j - 1];
			if (j + 1<= 9)
				DP[i][j] += DP[i - 1][j + 1];
			DP[i][j] %= M;
		}
	}
	for (int i = 0; i <= 9; i++)
		sum += DP[n][i];
	return sum % M;
}

int main() {
	int N;
	cin >> N;

	if (N <= 0)
		return 0;

	cout << stair(N) % M << endl;
}