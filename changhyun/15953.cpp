#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main() {
	int T;
	cin >> T;
	int a, b;
	

	for (int i = 0; i < T; i++)
	{
		int total=0;
		cin >> a;
		cin >> b;
		if (a <= 0) {
			total += 0;
		}
		else if (a <= 1) {
			total += 5000000;
		}
		else if (a <= 3) {
			total += 3000000;
		}
		else if (a <= 6) {
			total += 2000000;
		}

		else if (a <= 10) {
			total += 500000;
		}
		else if (a <= 15) {
			total += 300000;
		}

		else if (a <= 21) {
			total += 100000;
		}

		if (b <= 0) {
			total += 0;
		}
		else if (b <= 1) {
			total += 5120000;
		}
		else if (b <= 3) {
			total += 2560000;
		}
		else if (b <= 7) {
			total += 1280000;
		}
		else if (b <= 15) {
			total += 640000;
		}
		else if (b <= 31) {
			total += 320000;
		}
		cout << total<<"\n";
	}
}

