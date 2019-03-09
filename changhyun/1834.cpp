#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	long long a;
	cin >> a;
	long long result=0;
	for (int i = 1; i < a; i++)
	{
		result = result + (i*a)+i;
	}
	cout << result;
}
