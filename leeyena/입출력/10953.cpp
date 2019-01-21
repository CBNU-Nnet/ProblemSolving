#include "iostream"
using namespace std;
int main() {
	int num, k = 0;
	char com;
	int a, b;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> a >> com >> b;
		cout << a + b << endl;
	}
}