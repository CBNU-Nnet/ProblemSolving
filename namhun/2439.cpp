#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;

	if (N > 101 && N < 0)
		return 0;
	char s = '*';

	for (int i = 1; i <= N; i++) {
		for (int k = N - 1; k >= i; k--) {
			cout << " ";
		}
		for (int j = 1; j <= i; j++) {
			cout << s;
		}
		cout << endl;
	}
	return 0;
}