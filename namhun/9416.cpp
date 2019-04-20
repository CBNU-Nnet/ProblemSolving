#include <iostream>

using namespace std;

long long P[101];

void Pibonacci() {
	P[1] = P[2] = P[3] = 1;
	P[4] = P[5] = 2;

	for (int i = 6; i <= 100; i++) {
		P[i] = P[i - 1] + P[i - 5];
	}
}

int main() {
	Pibonacci();

	long long T, N;

	cin >> T;

	while (T--) {
		cin >> N;

		cout << P[N] << '\n';
	}

	return 0;
}