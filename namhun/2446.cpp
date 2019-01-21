#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	char s = '*';
	if (N > 101 && N < 0)
		return 0;

	for (int i = 1; i <= N; i++) {
		for (int j = 0; j < i - 1; j++) {
			cout << " ";
		}
		for (int j = 0; j < 2 * N - (2 * i - 1); j++) {
			cout << s;
		}
		cout << endl;
	}
	for (int i = 1; i < N; i++) {
		for (int j = 0; j < N - (i + 1); j++) {
			cout << " ";
		}
		for (int j = 0; j < 2 * i + 1; j++) {
			cout << s;
		}
		cout << endl;
	}
	return 0;
}