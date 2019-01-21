#include "iostream"
using namespace std;
int main() {
	int num;
	cin >> num;
	int A, B, C;
	int* result = new int[num];
	for (int i = 0; i < num; i++) {
		cin >> A >> B;
		C = A + B;
		result[i] = C;
	}
	for (int i = 0; i < num; i++)
		cout << result[i] << endl;
}