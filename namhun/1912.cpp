#include <iostream>

using namespace std;

#define MAX(a,b) (((a)>(b))?(a):(b))

long long store1[100001];
long long store2[100001];

int conplus(int n) {

	int dp = 0, part = 0, max = -1000;

	for (int i = 0; i < n; i++) {
		cin >> dp;

		if (dp > 1000 || dp < -1000)
			return 0;
		part = MAX(dp, dp + part);
		max = MAX(part, max);
	}

	return max;
	/*for (int i = 0; i < n; i++) {
		store1[i] = 0;
		store2[i] = 0;
	}

	long long *DP = new long long[n];

	for (int i = 0; i < n; i++) {
		cin >> DP[i];
		if (DP[i] > 1000 || DP[i] < -1000)
			return 0;
		if()
	}

	store1[0] = DP[0];
	for (int i = 0; i < n; i++) {
		store1[i] = DP[i];
		for (int j = i; j < n; j++) {
			store1[j] = store1[j - 1] + DP[j];
			store2[i] = MAX(store1[j], store1[j - 1]);
		}
		for (int j = 0; j < n; j++) {
			store1[j] = 0;
		}
	}
	for (int i = 1; i < n; i++) {
		store2[i] = MAX(store2[i], store2[i - 1]);
	}

	return store2[n - 1];*/
}

int main() {
	int N;

	cin >> N;


	if (N > 100000 || N < 1)
		return 0;
	cout << conplus(N) << endl;

	return 0;
}