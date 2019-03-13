#include <iostream>

using namespace std;

int DP[11];

int ott(int n) {
	if (n == 0)
		return 1;
	else if (n <= 2)
		return n;
	else if (DP[n] != 0)
		DP[n];
	else
		DP[n] = ott(n - 1) + ott(n - 2) + ott(n - 3);
	return DP[n];
}

int main() {
	int T;
	cin >> T;

	int a;

	while (T) {
		cin >> a;
		cout << ott(a) << endl;
		T--;
	}
	return 0;
}