#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

#define SIZE 1000000

int main() {
	int cnt = 0;
	vector<string> output(SIZE, "");
	string input;

	getline(cin, input);

	stringstream check;
	check.str(input);

	for (int i = 0; i < output.size(); i++) {
		check >> output[i];
		if (input.compare("\n") == 0)
			break;
		else if (output[i] != "")
			cnt++;
	}
	cout << cnt << endl;
	return 0;
}