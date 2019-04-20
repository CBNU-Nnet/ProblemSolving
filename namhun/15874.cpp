#include <iostream>
#include <string.h>
#include <string>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	int k, s;
	string cipher;
	//char cipher[100001];

	cin >> k >> s;

	k %= 26;

	cin.ignore();
	getline(cin, cipher);
	//fgets(cipher, s + 1, stdin);
	//cin.getline(cipher, s + 1);
	//cout << (int)cipher[0] << endl;
	for (int i = 0; i < s; i++) {
		if (cipher[i] >= 'A' && cipher[i] <= 'Z') {
			cipher[i] += k;
			if (cipher[i] > 90)
				cipher[i] -= 26;
		}
		else if (cipher[i] >= 'a' && cipher[i] <= 'z') {
			if ((int)cipher[i] + k > 122) {
				cipher[i] = cipher[i] - 26 + k;
			}
			else {
				cipher[i] += k;
			}
			//cipher[i] += k;
			//if (cipher[i] > 122)
			//	cipher[i] -= 26;
		}
		else if (cipher[i] != 44 && cipher[i] != 46) {
			cipher[i] = ' ';
		}
		cout << cipher[i];
		}
	cout << '\n';
	return 0;
}