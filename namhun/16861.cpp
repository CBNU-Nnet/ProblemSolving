#include <iostream>

using namespace std;

int Harshad(int n) {

	int sum = 0;

	while (n > 0) {
		int k = 0;

		k = n % 10;
		sum += k;
		n /= 10;
	}

	return sum;
}

int main() {
	int n;

	cin >> n;

	if (n % Harshad(n) == 0) {
		cout << n << '\n';
	}
	else {
		while (n % Harshad(n) != 0) {
			n++;
			if (n % Harshad(n) == 0) {
				cout << n << '\n';
			}
		}
	}

	return 0;
}