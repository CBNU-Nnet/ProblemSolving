//규칙이 있는지 확인하여 다시 문제풀이
#include <iostream>

using namespace std;

//int tri[45];
//
//void trinum() {
//	for (int i = 1; i < 45; i++) {
//		if ((i * (i + 1) / 2) <= 1000) {
//			tri[i] = (i * (i + 1) / 2);
//		}
//	}
//}

int main() {
	int T, K;

	cin >> T;

	while (T--) {
		cin >> K;

		if (K == 4 || K == 6 || K == 11 || K == 20 || K == 29)
			cout << 0 << '\n';
		else
			cout << 1 << '\n';
	}

	return 0;
}