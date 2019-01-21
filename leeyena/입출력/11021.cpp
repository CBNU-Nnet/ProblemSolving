#include "iostream"
using namespace std;
int main() {
	int num = 0;
	int A, B, C;
	cin >> num;
	for (int k = 0; k < num; k++) {
		cin >> A >> B;
		C = A + B;
		cout << "Case #" << k + 1 << ": " << C << endl;
	}

}