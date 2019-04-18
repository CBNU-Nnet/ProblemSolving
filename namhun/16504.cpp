#include <iostream>

using namespace std;

long long k[1025][1025];

int main() {
	long long n, sum = 0;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> k[i][j];
			sum += k[i][j];
		}
	}
	cout << sum << '\n';
}