#include"iostream"
using namespace std;
int main() {
	int n, sum = 0;
	cin >> n;
	for (int k = 1; k <= n; k++) {
		sum += k;
	}
	cout << sum;
	return 0;
}