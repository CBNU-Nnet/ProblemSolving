#include <iostream>

using namespace std;

bool DP[101];

void Open() {
	//���������� 1, ���������� 0
	DP[0] = false;
	for (int i = 1; i <= 100; i++) {
		DP[i] = false;
	}

	DP[1] = 1;		//ù��° ���� �׻� �����ִ�.
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