#include <iostream>
#include <string>

using namespace std;

int main() {
	string c;

	while (1) {
		getline(cin, c);
		if (c == "")
			break;
		cout << c << "\n";
	}

	return 0;
}