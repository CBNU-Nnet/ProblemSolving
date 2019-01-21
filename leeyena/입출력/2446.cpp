#include"iostream"

using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 2; j <= i; j++)
			cout << " ";
		for (int j = (2 * n) + 1 - (i * 2); j >= 1; j--)
			cout << "*";
		cout << endl;
	}
	for (int i = 1; i <= n - 1; i++) {
		for (int j = n - 2; j >= i; j--)
			cout << " ";
		for (int j = 1 + 2 * i; j >= 1; j--)
			cout << "*";
		cout << endl;
	}


	return 0;
}