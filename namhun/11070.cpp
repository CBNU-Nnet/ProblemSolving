#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int Exp(int S, int A) {
	float W;
	W = powf(S, 2) / (powf(S, 2) + powf(A, 2));
	W *= 1000;

	return W;
}

int main() {
	int T;
	int n, m;		//m은 경기 수
	int a, b, p, q;

	cin >> T;

	while (T--) {
		cin >> n >> m;

		int *tg = new int[n + 1];
		int *tl = new int[n + 1];
		int *tExp = new int[n + 1];

		for (int i = 1; i <= n; i++) {
			tg[i] = 0;
			tl[i] = 0;
			tExp[i] = 0;
		}

		for (int i = 1; i <= m; i++) {
			cin >> a >> b >> p >> q;
			tg[a] += p;
			tg[b] += q;
			tl[a] += q;
			tl[b] += p;
		}

		for (int i = 1; i <= n; i++) {
			if (tg[i] == 0 && tl[i] == 0)
				tExp[i] = 0;
			else
				tExp[i] = Exp(tg[i], tl[i]);
		}
		sort(tExp, tExp + n + 1);
		cout << tExp[n] << '\n';
		cout << tExp[1] << '\n';
	}
	return 0;
}