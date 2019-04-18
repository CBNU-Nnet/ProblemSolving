//Go Latin
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	int T;

	cin >> T;

	while(T--) {
		string str1;
		char str2[31];
		char cmp1 = '\0', cmp2 = '\0';

		cin >> str1;
		strcpy(str2, str1.c_str());

		cmp1 = str2[strlen(str2) - 2];
		cmp2 = str2[strlen(str2) - 1];

		if (cmp1 == 'n' && cmp2 == 'e') {
			str2[strlen(str2) - 2] = '\0';
			string str3(str2);
			str3.append("anes");
			cout << str3 << endl;
			str3.clear();
		}
		else if (cmp2 == 'n') {
			str2[strlen(str2) - 1] = '\0';
			string str3(str2);
			str3.append("anes");
			cout << str3 << endl;
			str3.clear();
		}
		else if (cmp2 == 'a') {
			string str3(str2);
			str3.append("s");
			cout << str3 << endl;
			str3.clear();
		}
		else if (cmp2 == 'i') {
			string str3(str2);
			str3.append("os");
			cout << str3 << endl;
			str3.clear();
		}
		else if (cmp2 == 'y') {
			str2[strlen(str2) - 1] = '\0';
			string str3(str2);
			str3.append("ios");
			cout << str3 << endl;
			str3.clear();
		}
		else if (cmp2 == 'l') {
			string str3(str2);
			str3.append("es");
			cout << str3 << endl;
			str3.clear();
		}
		else if (cmp2 == 'o' || cmp2 == 'u') {
			string str3(str2);
			str3.append("s");
			cout << str3 << endl;
			str3.clear();
		}
		else if (cmp2 == 'r' || cmp2 == 'v') {
			string str3(str2);
			str3.append("es");
			cout << str3 << endl;
			str3.clear();
		}
		else if (cmp2 == 't' || cmp2 == 'w') {
			string str3(str2);
			str3.append("as");
			cout << str3 << endl;
			str3.clear();
		}
		else {
			string str3(str2);
			str3.append("us");
			cout << str3 << endl;
			str3.clear();
		}

		str1.clear();
	}
	return 0;
}