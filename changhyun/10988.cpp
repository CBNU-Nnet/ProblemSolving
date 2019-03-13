#include <string>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	string a;
	cin >> a;
	int e = 0;
	for (int i = 0; i < (a.length() + 1) / 2; i++)
	{

		if (a.at(i) == a.at(a.length() - i - 1)) {

		}
		else {
			cout << 0;
			e = 1;
			break;
		}

	}
	if (e==0)
	cout << 1;
}
