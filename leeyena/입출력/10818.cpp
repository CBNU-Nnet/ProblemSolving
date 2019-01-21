#include"iostream"
using namespace std;
int main() {
	int N, max, min;
	cin >> N;
	int* num = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> num[i];

	}
	max = min = num[0];
	for (int i = 0; i < N; i++) {
		if (num[i] > max)
			max = num[i];
		if (num[i] < min)
			min = num[i];
	}
	cout << min << " " << max << endl;
	return 0;
}