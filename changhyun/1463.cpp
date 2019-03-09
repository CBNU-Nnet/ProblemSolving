#include <iostream>
using namespace std;
int main()
{
	int A, count;
	
	
	cin >> A;
	int* D=new int[A+1];
	
	D[1] = 0;
	
	for (int i = 2; i <= A; i++) {
		D[i] = D[i - 1] + 1;
		if (i % 2 == 0 && D[i] > D[i / 2] + 1) {
			D[i] = D[i / 2] + 1;
		}
		if (i % 3 == 0 && D[i] > D[i / 3] + 1) {
			D[i] = D[i / 3] + 1;
		}
	}
	cout << D[A];
	return 0;
}
