#include <iostream>
#include <string.h>

using namespace std;

int main() {
	int T, R;
	char S[20];

	cin >> T;

	while (T--) {
		cin >> R >> S;

		for (int i = 0; i < strlen(S); i++) {
			for (int j = 0; j < R; j++) {
				cout << S[i];
			}
		}
		cout << '\n';
	}
}