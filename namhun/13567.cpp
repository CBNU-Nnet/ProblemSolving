//·Îº¿
#include <iostream>
#include <string>
#include <string.h>

using namespace std;

char direct = 'e';
int Lsum = 0, Rsum = 0;

void Turn(int dir) {
	if (dir == 0 && direct == 'e')
		direct = 'n';
	else if (dir == 1 && direct == 'e')
		direct = 's';
	else if (dir == 0 && direct == 'n')
		direct = 'w';
	else if (dir == 1 && direct == 'n')
		direct = 'e';
	else if (dir == 0 && direct == 'w')
		direct = 's';
	else if (dir == 1 && direct == 'w')
		direct = 'n';
	else if (dir == 0 && direct == 's')
		direct = 'e';
	else if (dir == 1 && direct == 's')
		direct = 'w';
}

void Move(int d) {
	if (direct == 'e') {
		Lsum += d;
	}
	else if (direct == 'n') {
		Rsum += d;
	}
	else if (direct == 'w') {
		Lsum -= d;
	}
	else if (direct == 's') {
		Rsum -= d;
	}
}

int main() {
	char TM[10];
	int dir, d;
	int M, N;

	cin >> M >> N;

	while (N--) {
		cin >> TM;

		if (!strcmp(TM, "TURN")) {
			cin >> dir;
			Turn(dir);
		}
		else if (!strcmp(TM, "MOVE")) {
			cin >> d;
			if (d > M) {
				cout << -1 << '\n';
				return 0;
			}
			Move(d);
		}
	}

	if (Lsum < 0 || Rsum < 0 || Lsum > M || Rsum > M) {
		cout << -1 << '\n';
	}
	else
		cout << Lsum << " " << Rsum << '\n';

	return 0;
}