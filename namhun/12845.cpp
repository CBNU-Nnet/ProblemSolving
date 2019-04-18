#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

#define MAX(a,b) (((a)>(b))?(a):(b))

int main() {
	int n;
	int level = 0;
	int case1 = 0, case2 = 0, gold = 0;

	cin >> n;

	int *marble = new int[n + 1];

	marble[0] = 0;

	for (int i = 1; i <= n; i++) {
		cin >> marble[i];
	}
	sort(marble, marble + n + 1);

	for (int i = 1; i <= n; i++) {
		cout << marble[i] << " ";
	}
	cout << endl;

	level = marble[n];

	for (int i = n - 1; i >= 1; i--) {
		marble[i] += marble[n];
		marble[i - 1] += marble[i];

	}
	cout << marble[1] << endl;
	return 0;
}