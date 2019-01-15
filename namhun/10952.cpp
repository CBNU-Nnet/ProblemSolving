#include <iostream>

using namespace std;

int main() {

	int a = 0;
	int b = 0;
a:
	while (cin >> a >> b) {

		if (a < 0 || a > 10) {
			cout << "다시 입력하세요" << endl;
			goto a;
		}
		if (b < 0 || b > 10) {
			cout << "다시 입력하세요" << endl;
			goto a;
		}

		if (a == 0 && b == 0)
			break;

		cout << a + b << endl;
	}

	return 0;
}