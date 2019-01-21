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
			switch (N % 2) {
			case 0:
				if ((i % 2) == 1 && (j % 2) == 1) {
					cout << s;
				}
				if ((i % 2) == 1 && (j % 2) == 0) {
					cout << " ";
				}
				if ((i % 2) == 0 && (j % 2) == 0) {
					cout << " ";
				}
				if ((i % 2) == 0 && (j % 2) == 1) {
					cout << s;
				}
				break;
			case 1:
				if ((i % 2) == 1 && (j % 2) == 1) {
					cout << s;
				}
				if ((i % 2) == 1 && (j % 2) == 0) {
					cout << " ";
				}
				if ((i % 2) == 0 && (j % 2) == 0) {
					cout << " ";
				}
				if ((i % 2) == 0 && (j % 2) == 1) {
					cout << s;
				}
				break;
			}

		}
		cout << endl;
	}
	return 0;
}