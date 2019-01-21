#include"iostream"
using namespace std;
int main() {
	int n, k;
	cin >> n;
	k = n;
	for (int i = 1; i <= n; i++) {
		for (int j = n; j > i; j--)
			cout << " ";
		for (int j = 0; j < 2 * i - 1; j++)
			cout << "*";
		cout << endl;
	}
	return 0;
}