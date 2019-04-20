#include <iostream>

using namespace std;

bool PN[1001];

void eratos() {
	
	for (int i = 1; i <= 1000; i++) {
		PN[i] = true;
	}

	for (int i = 2; i * i < 1000; i++) {
		if (PN[i])
			for (int j = i * i; j < 1000; j += i)
				PN[j] = false;
	}
}

int main() {
	eratos();
	
	int T, k;

	cin >> T;

	while (T--) {
		int a = 0, b = 0;
		cin >> k;
		if (k < 7)
			return 0;

		for (int i = 2; i * 2 <= k; i++) {
			if (PN[i] && PN[k - i * 2]) {
				a = i;
				b = k - i * 2;
				break;
			}
		}
		if (b == 0 || a == 0)
			cout << 0 << '\n';
		else if (b <= a)
			cout << b << " " << a << " " << a << '\n';
		else if (b > a)
			cout << a << " " << a << " " << b << '\n';
			
	}

	return 0;
}