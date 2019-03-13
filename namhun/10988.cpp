#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>

using namespace std;

char pelin[100];
char rev[100];

int main() {
	cin >> pelin;

	for (int i = 0; i < strlen(pelin); i++) {
		rev[i] = pelin[i];
	}

	reverse(rev, rev + strlen(rev));

	if (!strcmp(rev, pelin))
		cout << "1" << '\n';
	else
		cout << "0" << '\n';

	return 0;
}