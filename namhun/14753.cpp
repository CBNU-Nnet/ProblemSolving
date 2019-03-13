#include <iostream>
#include <algorithm>

using namespace std;

#define MAX(a,b) (((a)>(b))?(a):(b))

int main() {
	int N;
	int Fmax, Lmax;
	long long M;

	cin >> N;

	int *card = new int[N];

	for (int i = 0; i < N; i++)
		cin >> card[i];

	sort(card, card + N);

	Fmax = MAX(card[0] * card[1] * card[N - 1], card[0] * card[1]);
	Lmax = MAX((card[N - 1] * card[N - 2] * card[N - 3]), (card[N - 1] * card[N - 2]));

	M = MAX(Fmax, Lmax);

	cout << M << '\n';

	return 0;
}