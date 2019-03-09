#include <string>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main() {
	int n;
	string a, b;
	int c;

	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a;
		cin >> b;

		reverse(a.begin(), a.end());
		reverse(b.begin(), b.end());
		int F = stoi(a);
		int S = stoi(b);
		int R = F + S;
		int q = 0;	//나머지
		c = 0;
		while (R>0) {
			q = R % 10;
			R /= 10;
			c = 10 * c+q;
		}
		cout << c<<endl;
	}
}
