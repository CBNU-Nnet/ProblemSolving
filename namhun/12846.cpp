#include <iostream>

using namespace std;

#define MAX(a,b) (((a)>(b))?(a):(b))

int main() {
	int N;

	scanf_s("%d", &N);

	int *DP = new int[N];

	for (int i = 0; i < N; i++) {
		scanf_s("%d", &DP[i]);
	}

	for (int i = 0; i < N; i++) {

		DP[i] *= (i + 1);
	}

	for (int i = 0; i < N - 1; i++) {
		DP[i + 1] = MAX(DP[i + 1], DP[i]);
	}

	printf("%d", DP[N - 1]);

	return 0;
}