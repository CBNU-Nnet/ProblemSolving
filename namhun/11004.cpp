#include <iostream>
#include <algorithm>

using namespace std;

int A[5000001];

int Kth(int N, int K) {
	for (int i = 0; i < N; i++) {
		scanf_s("%lld", &A[i]);
	}

	sort(A, A + N);

	return A[K - 1];
}

int main() {
	int N = 0, K = 0;

	cin >> N >> K;

	cout << Kth(N, K) << '\n';
}