#include <iostream>
#include <math.h>
#include <stdlib.h>


using namespace std;

int N;
int cnt = 0; //몇자리 수인지 알려주는 변수
int c1 = 1, c2 = 1; //수를 두 부분으로 나누어 저장하는 변수

void count(int n) {

	while (n > 0) {
		int k = 0;

		k = n % 10;
		cnt++;
		n /= 10;
	}
}

void Youjin(int cnt1, int clone) {
	for (int j = 0; j < cnt1; j++) {
		int k = 0;

		k = clone % 10;
		c1 *= k;
		clone /= 10;
	}
}

int main() {
	int clone;
	cin >> N;

	if (N < 10) {
		cout << "NO\n";
		return 0;
	}

	count(N);
	int g = cnt - 1;

	for (int i = 1; i < cnt; i++) {
		int c1 = 1, c2 = 1; //수를 두 부분으로 나누어 저장하는 변수
		clone = N;
		//Youjin(cnt - g, clone);
		for (int j = 0; j < cnt - g; j++) {
			int k = 0;

			k = clone % 10;
			c1 *= k;
			clone /= 10;
		}
		//Youjin(g, clone);
		for (int j = 0; j < g; j++) {
			int k = 0;

			k = clone % 10;
			c2 *= k;
			clone /= 10;
		}
		cout << c1 << " " << c2 << '\n';
		if (c1 == c2) {
			cout << "YES\n";
			break;
		}
		if (i == cnt - 1) {
			cout << "NO\n";
			break;
		}
		g--;
	}
	return 0;
}