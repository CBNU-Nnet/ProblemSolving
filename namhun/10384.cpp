#include <iostream>
#include <cstring>
#include <string>

using namespace std;

string a;
int alphabet[27];
int n;

void ch(int e, int i) {
	getline(cin, a);

	while (1) {
		if ((int)a[i] <= 90 && (int)a[i] >= 65) {
			alphabet[(int)a[i] - 64]++;
		}
		else if ((int)a[i] <= 122 && (int)a[i] >= 97) {
			alphabet[(int)a[i] - 96]++;
		}
		if (a[i] == '\0')
			break;
		i++;
	}
}

int main() {
	
	int e;
	cin >> n;
	cin.ignore();
	for (e = 1; e <= n; e++) {
		int three = 0, two = 0, one = 0;
		for (int j = 1; j <= 26; j++) {
			alphabet[j] = 0;
		}
		int i = 0;
		
		ch(e, i);
		//
		for (int j = 1; j <= 26; j++) {
			cout << alphabet[j] << ' ';
		}
		cout << '\n';

		for (int j = 1; j <= 26; j++) {
			if (alphabet[j] / 3 >= 1) {
				three++;
			}
			if (alphabet[j] / 2 >= 1) {
				two++;
			}
			if (alphabet[j] >= 1) {
				one++;
			}
			if (alphabet[j] == 0) {
				cout << "Case " << e << ": Not a pangram\n";
				break;
			}
		}
		cout << three << " " << two << " " << one;
		cout << endl;
		if (three >= 26) {
			cout << "Case " << e << ": Triple pangram!!!\n";
		}
		else if (two >= 26) {
			cout << "Case " << e << ": Double pangram!!\n";
		}
		else if (one == 26) {
			cout << "Case " << e << ": Pangram!\n";
		}
	}
	return 0;
}