#include <iostream>

using namespace std;

bool DP[101];

void Open() {
	//열려있으면 1, 닫혀있으면 0
	DP[0] = false;
	for (int i = 1; i <= 100; i++) {
		DP[i] = false;
	}

	DP[1] = 1;		//첫번째 방은 항상 열려있다.
	for (int i = 2; i * i <= 100; i++) {
		DP[i * i] = true;
	}

	return;
}

int Count(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		if (DP[i])
			sum++;
	}

	return sum;
}

int main() {
	Open();
	int T;
	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		int n = 0;
		scanf("%d", &n);
		cout << Count(n) << '\n';
	}
	

	return 0;
}