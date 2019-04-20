//2606바이러스 나중에 다시 
#include <iostream>

using namespace std;

int com;
int T;
int P[101][101];
int infect[101];

void Zombie(int s) {
	int i;

	infect[s] = 1;
	for (i = 1; i <= com; i++) {
		if (P[s][i] == 1 && !infect[i]) {
			Zombie(i);
		}
	}
}


int main() {
	std::ios::sync_with_stdio(false);
	int connA, connB, start = 1;
	int cnt = 0;

	cin >> com;

	for (int i = 1; i <= com; i++) {
		infect[i] = 0;
		for (int j = 1; j <= com; j++) {
			P[i][j] = 0;
		}
	}

	cin >> T;

	while (T--) {

		cin >> connA >> connB;

		P[connA][connB] = 1;
		P[connB][connA] = 1;
	}

	Zombie(start);

	for (int i = 1; i <= com; i++) {
		for (int j = 1; j <= com; j++) {
			cout << P[i][j] << " ";
		}
		cout << '\n';
	}

	for (int i = 1; i <= com; i++) {
		cout << infect[i] << " ";
	}
	cout << endl;

	for (int i = 2; i <= com; i++) {
		if (infect[i] == 1)
			cnt++;
	}
	cout << cnt << '\n';

	return 0;
}