#include"iostream"
#include<cstring>

using namespace std;
int main() {

	int i = 1;

	char line2[100];

	cin >> line2;
	for (int i = 0; i < strlen(line2); i++) {

		cout << line2[i];
		if ((i + 1) % 10 == 0)
			cout << endl;
	}



}