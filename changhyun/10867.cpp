#include <string>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main() {
	int n;
	int a;
	cin >> n;
	vector<int > arr(2002,0);
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		arr[a+1001] = 1;
		
	}
	for (int i = 1; i < 2002; i++) {
		if (arr[i] == 1)
			cout << i - 1001 << " ";
	}
}
