#include <iostream>

using namespace std;

int Han[46] = { 0, 111, 123, 135, 147, 159,
				   210, 222, 234, 246, 258,
			       321, 333, 345, 357, 369,
			       420, 432, 444, 456, 468,
			       531, 543, 555, 567, 579,
			       630, 642, 654, 666, 678,
			       741, 753, 765, 777, 789,
			       840, 852, 864, 876, 888,
			       951, 963, 975, 987, 999 };

int main() {
	std::ios::sync_with_stdio(false);
	int input;
	int cnt = 99;

	cin >> input;

	if (input <= 99)
		cout << input << '\n';
	else if (input >= 100 && input <= 110)
		cout << cnt << '\n';
	else {
		for (int i = 0; i < 45; i++) {
			if (input < Han[i + 1] && input >= Han[i]) {
				cnt = cnt + i;
			}
			else if (input == 999) {
				cnt += 45;
				break;
			}
			else if (input == 1000) {
				cnt += 45;
				break;
			}
		}
		cout << cnt << '\n';
	}

	return 0;
}