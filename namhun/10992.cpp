#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	char s = '*';
	if (N > 101 && N < 0)
		return 0;

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N - i; j++) {
			cout << " ";
		}
		for (int j = 1; j <= 2 * i - 1; j++) {
			if (j == 1 || j == (2 * i - 1))
				cout << s;
			else if (i == N)
				cout << s;
			else
				cout << " ";
		}
		cout << endl;
	}
	return 0;
}