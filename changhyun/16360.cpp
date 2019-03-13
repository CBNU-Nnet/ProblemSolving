#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main() {
	string a;
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> a;
		if (a.back() == 'a') {
			a.pop_back();
			a+="as";
			cout << a<<"\n";
		}
		else if (a.back() == 'i'|| a.back() == 'y') {
			a.pop_back();
			a+="ios";
			cout << a << "\n";
		}
		else if (a.back() == 'l') {
			a.pop_back();
			a+="les";
			cout << a << "\n";
		}
		else if (a.back() == 'e' && a.at(a.length() - 2) == 'n') {
			a.pop_back();
			a.pop_back();
			a+="anes";
			cout << a << "\n";
		}
		else if (a.back() == 'n') {
			a.pop_back();
			
			a+="anes";
			cout << a << "\n";
		}
		
		else if (a.back() == 'o') {
			a.pop_back();
			a+="os";
			cout << a << "\n";
		}
		else if (a.back() == 'r') {
			a.pop_back();
			a+="res";
			cout << a << "\n";
		}
		else if (a.back() == 't') {
			a.pop_back();
			a+="tas";
			cout << a << "\n";
		}
		else if (a.back() == 'u') {
			a.pop_back();
			a+="us";
			cout << a << "\n";
		}
		else if (a.back() == 'v') {
			a.pop_back();
			a+="ves";
			cout << a << "\n";
		}
		else if (a.back() == 'w') {
			a.pop_back();
			a+="was";
			cout << a << "\n";
		}
		else {
			a += "us";
			cout << a << "\n";
		}
	}
}
