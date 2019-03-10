#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	long long a;
	cin >> a;
	if (a % 4 == 0||a%4==2)
		cout << "CY";
	else
		cout << "SK";
}
