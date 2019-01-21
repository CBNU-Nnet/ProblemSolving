#include "iostream"
using namespace std;
int main() {
	int num = 0;
	int A, B, C;

	while (1) {
		cin >> A >> B;
		if (A == 0 || B == 0)
			break;
		C = A + B;
		cout << C << endl;

	}
}