#include <iostream>
#include <string>

using namespace std;

int main() {

	int num, sum = 0;
	cin >> num;

	char *n = new char[num];

	for (int i = 0; i < num; i++) {
		cin >> n[i];
	}

	for (int i = 0; i < num; i++) {
		sum += (int)(n[i] - 48);
	}

	cout << sum;

	return 0;
}