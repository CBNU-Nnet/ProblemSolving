#include <iostream>

using namespace std;

#define SIZE 246912

bool PrimeArray[SIZE];

void eratos() {
	PrimeArray[1] = false;

	for (int i = 2; i < SIZE; i++)
		PrimeArray[i] = true;

	for (int i = 2; i * i < SIZE; i++) {
		if (PrimeArray[i])
			for (int j = i * i; j < SIZE; j += i)
				PrimeArray[j] = false;
	}
}

int Bertrand(int n) {
	int check = 0;

	for (int i = n + 1; i <= 2 * n; i++) {
		if (PrimeArray[i])
			check++;
	}

	cout << check << '\n';

	return 0;
}

int main() {
	eratos();
	int N;

	while (scanf_s("%d", &N)) {
		if (N == 0)
			break;
		else
			Bertrand(N);
	}
	return 0;
}