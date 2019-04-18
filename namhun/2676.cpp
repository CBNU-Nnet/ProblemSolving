#include <iostream>

using namespace std;

int main() {
	int T, n, m;
	cin >> T;
	while (T--) {
		cin >> n >> m;

		if (n == m || m == 0)
			cout << 1 << '\n';
		else
			cout << (m * n) - (m * m - 1) << '\n';
	}
	return 0;
}