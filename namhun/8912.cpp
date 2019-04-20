#include <iostream>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	int T, n;

	cin >> T;

	while (T--) {
		int sum = 0;
		int a[1001] = { 0 };
		cin >> n;

		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}

		for (int i = 2; i <= n; i++) {
			for (int j = 1; j <= i - 1; j++) {
				if (a[i] >= a[j])
					sum++;
			}
		}
		cout << sum << '\n';
	}
}