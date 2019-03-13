#include <iostream>
#include <string>
#include <string.h>
#include <vector>

using namespace std;

int main() {
	int N = 0;
	cin >> N;

	while (N--) {
		vector <char> arr;
		char g[51] = { 0, };
		cin >> g;

		for (int i = 0; i < strlen(g); i++) {
			if (g[i] == '(')
				arr.push_back(g[i]);
			else if (g[i] == ')') {
				if (arr.empty()) {
					arr.push_back(g[i]);
					break;
				}
				else
					arr.pop_back();
			}
				
		}

		if (!arr.empty())
			cout << "NO" << '\n';
		else
			cout << "YES" << '\n';
		
		arr.clear();
	}
	return 0;
}