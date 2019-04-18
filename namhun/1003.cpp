#include <iostream>

using namespace std;

int DP[41];

void fibonacci() {
	DP[-1] = 1;
	DP[0] = 0;
	DP[1] = 1;
	for (int i = 2; i < 41; i++) {
		DP[i] = DP[i - 1] + DP[i - 2];
	}
}

int main() {
	int T, N;

	scanf_s("%d", &T);

	fibonacci();

	while(T--) {
		scanf_s("%d", &N);
		printf("%d %d\n", DP[N - 1], DP[N]);
	}

	return 0;
}