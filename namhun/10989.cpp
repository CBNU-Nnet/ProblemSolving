#include <iostream>

using namespace std;

#define SIZE 10001

int st[SIZE];

int main() {
	int N, M;

	scanf_s("%d", &N);

	for (int i = 0; i < SIZE; i++)
		st[i] = 0;

	for (int i = 0; i < N; i++) {
		scanf_s("%d", &M);
		st[M] ++;
	}

	for (int i = 1; i < SIZE; i++) {
		if (st[i] > 0) {
			printf("%d\n", i);
			st[i] --;
			i--;
		}
	}

	return 0;
}