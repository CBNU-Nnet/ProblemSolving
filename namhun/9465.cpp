#include <iostream>

using namespace std;

#define MAX(a,b) (((a)>(b))?(a):(b))

long long A[100001][2];
long long DP[100001][3];

long long sticker(int n) {
	long long max = 0;

	for (int i = 1; i <= n; i++) {
		scanf_s("%lld", &A[i][0]);
		if (A[i][0] > 100 || A[i][0] < 0)
			return 0;
	}
	for (int i = 1; i <= n; i++) {
		scanf_s("%lld", &A[i][1]);
		if (A[i][1] > 100 || A[i][1] < 0)
			return 0;
	}

	DP[0][0] = DP[0][1] = DP[0][2] = 0;

	for (int i = 1; i <= n; i++) {
		DP[i][0] = MAX(DP[i - 1][0], MAX(DP[i - 1][1], DP[i - 1][2]));
		DP[i][1] = MAX(DP[i - 1][0], DP[i - 1][2]) + A[i][0];
		DP[i][2] = MAX(DP[i - 1][0], DP[i - 1][1]) + A[i][1];
	}
	
	for (int i = 1; i <= n; i++) {
		max = MAX(DP[i][0], MAX(DP[i][1], DP[i][2]));
	}

	return max;
}

int main() {
	int T;
	cin >> T;

	while (T--) {
		int n;

		cin >> n;

		if (n > 100000 || n < 1)
			return 0;

		printf("%lld\n", sticker(n));
	}

	return 0;
}