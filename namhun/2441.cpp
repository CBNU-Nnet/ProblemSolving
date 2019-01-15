#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	char s = '*';
	if (N > 101 && N < 0)
		return 0;

	for (int i = 0; i < N; i++) {
		for (int k = i; k > 0; k--) {
			cout << " ";
		}
		for (int j = i; j < N; j++) {
			cout << s;
		}
		cout << endl;
	}
	return 0;
}