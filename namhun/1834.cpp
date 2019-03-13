#include <iostream>

using namespace std;

int main() {
	long long N, sum = 0;

	cin >> N;
	if (N > 2000000 || N < 1)
		return 0;

	for (int i = 1; i < N; i++) {
		sum += N * i + i;
	}

	cout << sum << '\n';

	return 0;
}