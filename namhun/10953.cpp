#include <iostream>

using namespace std;

int main() {

	int num = 0;

	cin >> num;
	int *a = new int[num];
	char c;
	int *b = new int[num];
	int *d = new int[num];

	for (int i = 0; i < num; i++) {
	a:
		cin >> a[i];
		if (a[i] < 0 || a[i] > 10) {
			cout << "다시 입력하세요" << endl;
			goto a;
		}

		cin >> c;

	b:
		cin >> b[i];
		if (b[i] < 0 || b[i] > 10) {
			cout << "다시 입력하세요" << endl;
			goto b;
		}
		if (c == ',')
			d[i] = a[i] + b[i];
	}

	for (int j = 0; j < num; j++) {
		cout << d[j] << endl;
	}

	return 0;
}
