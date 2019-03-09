#include <iostream>
using namespace std;
int main()
{
	long long A, B;
	
	cin >> A;
	cin >> B;


	if (B > A) {
		cout << (B*(B + 1) / 2) - (A*(A + 1) / 2)+A;
	}
	else{
		cout << (A*(A + 1) / 2) - (B*(B + 1) / 2) + B;

	}
	return 0;
}

