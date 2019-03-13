//다시 한번 더 풀어보기
//질문

#include <iostream>

using namespace std;

#define MAX(a,b) (((a)>(b))?(a):(b))

int st[301];
int dp[301][3];

int stairs(int n) {
	for (int i = 1; i <= n; i++) {
		cin >> st[i];
		if (st[i] > 10000 || st[i] < 1)
			return 0;
	}

	dp[1][1] = st[1];

	for (int i = 2; i <= n; i++) {
		dp[i][2] = dp[i - 1][1] + st[i];
		dp[i][1] = MAX(dp[i - 2][1], dp[i - 2][2]) + st[i];
	}

	for (int i = 1; i <= n; i++) {
		cout << "dp[i][2] = " << dp[i][2] << " ";
	}
	cout << endl;
	for (int i = 1; i <= n; i++) {
		cout << "dp[i][1] = " << dp[i][1] << " ";
	}
	cout << endl;

	return MAX(dp[n][2], dp[n][1]);
}

int main() {
	int N;

	cin >> N;

	if (N > 300 || N < 1)
		return 0;

	cout << stairs(N) << '\n';
}