#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main() {
	int N;
	int m;
	cin >> N;

	set <int> arr;
	set<int>::iterator iter;

	while (N--) {
		cin >> m;
		arr.insert(m);
	}

	for (iter = arr.begin(); iter != arr.end(); ++iter) {
		cout << *iter << " ";
	}
	cout << endl;

	return 0;
}