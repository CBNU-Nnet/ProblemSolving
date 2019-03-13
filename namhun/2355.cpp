#include <iostream>

using namespace std;

int main() {
	long long A, B;
	long long sum = 0;

	cin >> A >> B;

	if(A > B)
		sum = ((A * (A + 1)) / 2) - ((B * (B + 1)) / 2) + B;
	else
		sum = ((B * (B + 1)) / 2) - ((A * (A + 1)) / 2) + A;
	cout << sum;

	return 0;
}