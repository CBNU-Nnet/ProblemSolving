#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	char s = '*';

	for (int i = 1; i <= N; i++) {
		for (int j = 0; j < N - i; j++) {
			cout << " ";
		}
		for (int j = 0; j < i; j++) {
			cout << s;
		}
		cout << endl;
	}
	for (int i = 1; i < N; i++) {
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		for (int j = 0; j < N - i; j++) {
			cout << s;
		}
		cout << endl;
	}
	return 0;
}