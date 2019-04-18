#include <iostream>
#include <algorithm>

using namespace std;

int Dwarf[9];
int sum = 0;

int Kill() {
	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (Dwarf[i] + Dwarf[j] == sum) {
				Dwarf[i] = 0;
				Dwarf[j] = 0;
				return 0;
			}
		}
	}
}

int main() {
	for (int i = 0; i < 9; i++) {
		cin >> Dwarf[i];
		sum += Dwarf[i];
	}

	sum -= 100;

	Kill();

	sort(Dwarf, Dwarf + 9);

	for (int i = 2; i < 9; i++) {
		cout << Dwarf[i] << '\n';
	}
	
	return 0;
}