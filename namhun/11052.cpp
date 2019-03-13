#include <iostream>

using namespace std;

int P[1001];

int Card(int n) {
	for (int i = 1; i <= n; i++) {
		cin >> P[i];
		if (P[i] > 10000 || P[i] < 1)
			return 0;
	}

	for (int i = 1; i <= n; i++) {

	}


}

int main() {
	int N;

	cin >> N;

	cout << Card(N) << '\n';
}