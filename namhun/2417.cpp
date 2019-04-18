#include <iostream>
#include <math.h>

using namespace std;

int main() {
	unsigned long long n, a;
	cin >> n;
	a = sqrt(n);
	if (n < 0)
		return 0;
	else {
		if (a * a >= n) cout << a << '\n';
		else cout << a + 1 << '\n';
	}
}