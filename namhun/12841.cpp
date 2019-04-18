#include <iostream>

using namespace std;

void Route(int n) {
	int Ls = 0;

	int *DP = new int[n + 1];
	int *cross = new int[n + 1]; //횡단보도 거리
	int *left = new int[n];
	int *right = new int[n + 1];

	cross[0] = left[0] = right[n] = right[0] = 0;

	for (int i = 1; i <= n; i++) {
		cin >> cross[i];	//i번째 지점 횡단보도 거리
	}
	for (int i = 1; i < n; i++) {
		cin >> left[i];		//i번째 지점에서 i + 1번째 지점까지 왼쪽 길의 거리
	}
	for (int i = 1; i < n; i++) {
		cin >> right[i];	//i번째 지점에서 i + 1번째 지점까지의 오른쪽 길의 거리
	}

	for (int i = 1; i < n; i++) {
		left[i] += left[i - 1];		//1부터 i번째 지점까지의 왼쪽 길의 거리
	}

	for (int i = n - 1; i >= 1; i--) {
		right[i] += right[i + 1];		//n번째부터 i번째 지점까지의 오른쪽 길의 거리
	}

	for (int i = 1; i <= n; i++) {
		DP[i] = cross[i] + left[i - 1] + right[i];
	}

	for (int i = 1; i <= n; i++) {
		cout << DP[i] << " ";
	}
	cout << endl;

	for (int i = 1; i <= n; i++) {
		if (DP[i] <= DP[i + 1]) {
			DP[i + 1] = DP[i];
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << DP[i] << " ";
	}
	cout << endl;

	for (int i = n; i >= 1; i--) {
		if (DP[i] == DP[i - 1]) {
			Ls = i - 1;
		}
		if (DP[i] < DP[i - 1])
			break;
	}

	cout << Ls << " " << DP[n] << '\n';
	return;
}

int main() {
	int n;

	cin >> n;

	Route(n);

	return 0;
}