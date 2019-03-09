#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<int> arr_vec;
	int A, T;
	string ord;
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> ord;
		if (ord.compare("push") == 0) {
			cin >> A;
			
			arr_vec.push_back(A);
		}
		else if (ord.compare("top") == 0) {
			if (arr_vec.size()==0)
				cout << -1<<endl;
			else
				cout << arr_vec.back()<<endl;
		}
		else if (ord.compare("size") == 0) {
			cout << arr_vec.size()<<endl;
		}
		else if (ord.compare("empty") == 0) {
			if (arr_vec.size()==0)
				cout << 1 << endl;
			else
				cout << 0 << endl;
		}
		else if (ord.compare("pop") == 0) {
			if (arr_vec.size()==0)
				cout << -1 << endl;
			else {
				cout << arr_vec.back() << endl;
				arr_vec.pop_back();
			}
		}
	}
	return 0;
}

