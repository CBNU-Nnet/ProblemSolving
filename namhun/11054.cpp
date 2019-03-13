#include <iostream>

using namespace std;

#define MAX(a,b) (((a)>(b))?(a):(b))

int Max[1001];
int reMax[1001];
int All[1001];

int BTN(int n) {
	int *DP = new int[n];
	int *reverseDP = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> DP[i];
		if (DP[i] > 1000 || DP[i] < 1)
			return 0;
	}

	for (int BT = 0; BT < n; BT++) {
		for (int i = 0; i <= BT; i++) {
			Max[i] = 1;
			for (int j = 0; j < i; j++) {
				if (DP[j] < DP[i] && Max[i] < Max[j] + 1) {
					Max[i] = Max[j] + 1;
				}
			}
		}

		int re = n - BT;

		for (int i = BT + 1; i < n; i++) {
			reverseDP[re] = DP[i];
			re--;
		}

		for (int i = BT + 1; i < n; i++) {
			reMax[i] = 1;
			for (int j = 0; j < i; j++) {
				if (reverseDP[j] < reverseDP[i] && reMax[i] < reMax[j] + 1) {
					reMax[i] = reMax[j] + 1;
				}
			}
		}

		for (int i = 0; i < n; i++) {
			reverseDP[i] = NULL;
		}
	}

	for (int i = 0; i < n; i++) {
		cout << Max[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << reMax[i] << " ";
	}
	for (int i = 0; i < n; i++) {
		All[i] = Max[i] + reMax[i + 1];
	}

	for (int i = 1; i < n; i++) {
		All[i] = MAX(All[i], All[i - 1]);
	}
	cout << endl;
	return All[n - 1];
}

int main() {
	int N;

	cin >> N;

	if (N > 1000 || N < 1)
		return 0;

	cout << BTN(N) << '\n';

}