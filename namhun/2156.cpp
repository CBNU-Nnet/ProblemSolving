#include <iostream>

using namespace std;

#define MAX(a,b) (((a)>(b))?(a):(b))

int P[10001];
int DP[10001];

int wine(int n) {

	for (int i = 1; i <= n; i++) {
		cin >> P[i];

		if (P[i] > 1000 || P[i] < 0)
			return 0;
	}

	DP[0] = 0;
	DP[1] = P[1];
	DP[2] = P[1] + P[2];

	for (int i = 3; i <= n; i++) {
		DP[i] = DP[i - 1];
		DP[i] = MAX(DP[i], MAX(DP[i - 2] + P[i], DP[i - 3] + P[i] + P[i - 1]));
	}  

	return DP[n];
}

int main() {
	int n;
	cin >> n;

	if (n > 10000 || n < 1)
		return 0;

	cout << wine(n);
}