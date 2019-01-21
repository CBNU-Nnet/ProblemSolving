#include <iostream>

using namespace std;

int main() {
	int N;;
	cin >> N;

	int *a = new int[N];
	int min = 1000000, max = -1000000;
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < N; i++) {
		if (a[i] > max)
			max = a[i];
		if (a[i] < min)
			min = a[i];
	}
	cout << min << " " << max << endl;

	return 0;
}