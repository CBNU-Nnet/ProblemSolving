#include <iostream>

using namespace std;

int main() {

	int num = 0;

	cin >> num;
	int *a = new int[num];
	int *b = new int[num];

	for (int i = 0; i < num; i++) {
	a:
		cin >> a[i];
		if (a[i] < 0 || a[i] > 10) {
			cout << "�ٽ� �Է��ϼ���" << endl;
			goto a;
		}
	b:
		cin >> b[i];
		if (b[i] < 0 || b[i] > 10) {
			cout << "�ٽ� �Է��ϼ���" << endl;
			goto b;
		}
	}

	for (int j = 0; j < num; j++) {
		cout << a[j] + b[j] << endl;
	}

	return 0;
}