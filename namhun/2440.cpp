#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	char s = '*';
	if (N > 101 && N < 0)
		return 0;

	for (int i = N; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			cout << s;
		}
		cout << endl;
	}
	return 0;
}