#include <iostream>
#include <cstdio>

using namespace std;

//long long DP[91][91];

long long D[91];

long long pi(int n) {
	if (n <= 2)
		D[n] = 1;
	else if (D[n] != 0)
		return D[n];
	else
		D[n] = pi(n - 1) + pi(n - 2);
	return D[n];	
}

//int pi(int n) {
//
//	DP[1][0] = 0;
//	DP[1][1] = 1;
//	for (int i = 2; i <= n; i++) {
//		DP[i][0] = DP[i - 1][1] + DP[i - 1][0];
//		DP[i][1] = DP[i - 1][0];
//	}
//
//	return DP[n][1] + DP[n][0];
//}

int main() {
	int N;
	scanf_s("%d", &N);
	printf("%lld", pi(N));

	return 0;
}