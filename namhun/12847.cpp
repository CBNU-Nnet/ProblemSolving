#include <iostream>

using namespace std;

#define MAX(a,b) (((a)>(b))?(a):(b))

void arr(int N, int M) {
	int *DP = new int[N];

	for (int i = 0; i < N; i++) {
		scanf_s("%d", &DP[i]);
	}

	int j = 1;
	for (int i = 0; i < N - M + 1;) {
		if (j < i + M) {
			DP[i] += DP[j];
			j++;
		}
		else {
			i++;
			j = i + 1;
		}
	}

	for (int i = 0; i < N - M; i++) {
		DP[i + 1] = MAX(DP[i], DP[i + 1]);
	}

	printf("%d\n", DP[N - M]);

	return;
}

int main() {
	int N, M;

	scanf_s("%d %d", &N, &M);

	arr(N, M);
}