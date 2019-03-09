#include <iostream>
using namespace std;
int main()
{
	int A;
	cin >> A;
	if (A > 1000 || A < 0)
		return 0;
	long long* a = new long long[A + 1];
	a[1] = 1;
	a[2] = 3;

	for (int i = 3; i <= A; i++) {
		a[i] = (a[i - 1] + 2 * a[i - 2])%10007;
		
		
	}
	cout << a[A];
	delete(a);
	return 0;
}
