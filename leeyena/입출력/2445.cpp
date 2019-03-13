#include"iostream"
using namespace std;
int main() {
	int n, k, m;
	cin >> n;
	k = m = n;

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < i; j++)
			cout << "*";
		for (int j = 1; j <= 2 * m - 2 * i; j++)
			cout << " ";
		for (int j = 0; j < i; j++)
			cout << "*";
		cout << endl;
	}
	for (int i = 1; i < k; i++) {
		for (int j = k - 1; j >= i; j--)
			cout << "*";
		for (int j = 1; j <= 2 * m - 2 * (m - i); j++)
			cout << " ";
		for (int j = k - 1; j >= i; j--)
			cout << "*";
		cout << endl;
	}
	return 0;
}