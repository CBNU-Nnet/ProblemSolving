#include <iostream>

using namespace std;

#define MAX(a,b) (((a)>(b))?(a):(b))

int P[1001];
int DP[1001];

int Card(int n) {
	DP[0] = 0;
	P[0] = 0;

	for (int i = 1; i <= n; i++) {
		cin >> P[i];
		if (P[i] > 10000 || P[i] < 1)
			return 0;
	}
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			DP[i] = MAX(DP[i], DP[i - j] + P[j]);
		}
	}

	return DP[n];
}

int main() {
	int N;

	cin >> N;

	cout << Card(N) << '\n';
}