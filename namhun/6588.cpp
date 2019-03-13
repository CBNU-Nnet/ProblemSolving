#include <iostream>

using namespace std;

#define SIZE 1000000

int PrimeArray[SIZE];

void eratos() {
	PrimeArray[1] = 1;
	for (int i = 2; i * i < SIZE; i++) {
		if (!PrimeArray[i])
			for (int j = i * i; j < SIZE; j += i)
				PrimeArray[j] = true;
	}
}

int Goldvach(int n) {
	bool check = false;

	if (n < 6 || n > 1000000) 
		return 0;

	for (int i = 2; i <= n / 2; i++) {
		if (!PrimeArray[i] && !PrimeArray[n - i]) {
			check = true;
			printf("%d = %d + %d\n", n, i, n - i);
			break;
		}
	}
	if (!check)
		printf("Goldbach's conjecture is wrong.\n");
	return 0;
}

int main() {
	eratos();
	int N;

	while (scanf_s("%d", &N)) {
		if (N == 0)
			break;
		else
			Goldvach(N);
	}
	return 0;
}