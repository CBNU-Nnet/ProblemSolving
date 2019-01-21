#include <iostream>
#include <string>

using namespace std;

int main() {
	char c[100];

	while (fgets(c, 100, stdin)) {
		cout << c;
	}

	return 0;
}