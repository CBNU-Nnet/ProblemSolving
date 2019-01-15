#include <iostream>

using namespace std;

int main() {
	int N;
	char s = '*';
	cin >> N;

	if (N > 101 && N < 0)
		return 0;

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= i; j++) {
			cout << s;
		}
		cout << endl;
	}
	return 0;
}