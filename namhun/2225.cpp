#include <iostream>

using namespace std;

long long DP[201][201];

int PlusDivide(int n, int k) {
	DP[0][0] = 1LL;

	for (int i = 1; i <= k; i++) {
		for (int j = 0; j < n; j++) {

		}
	}
}

int main() {
	int N = 0;
	int K = 0;

	cin >> N >> K;

	if (N > 200 || N < 1 || K > 200 || K < 1)
		return 0;

	cout << PlusDivide(N, K) << '\n';

}