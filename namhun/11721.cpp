#include <iostream>
#include <string>

using namespace std;

int main() {
	char *c = new char[100];
	fgets(c, 100, stdin);

	for (int i = 0; i < 100; i++) {
		if (c[i] == '\0')
			break;
		if ((i % 10) == 0 && i != 0)
			cout << endl;
		cout << c[i];
	}

	return 0;
}