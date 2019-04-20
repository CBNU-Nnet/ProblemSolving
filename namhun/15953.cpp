//ป๓ฑÝ วๅลอ
#include <iostream>

using namespace std;

int main() {
	int T = 0;
	int a = 0, b = 0;
	int asum = 0, bsum = 0;

	scanf("%d", &T);

	while (T--) {
		cin >> a >> b;
		if (a == 1)
			asum = 5000000;
		else if (a >= 2 && a < 4)
			asum = 3000000;
		else if (a >= 4 && a < 7)
			asum = 2000000;
		else if (a >= 7 && a < 11)
			asum = 500000;
		else if (a >= 11 && a < 16)
			asum = 300000;
		else if (a >= 16 && a < 22)
			asum = 100000;
		else
			asum = 0;

		if (b == 1)
			bsum = 5120000;
		else if (b > 1 && b < 4)
			bsum = 2560000;
		else if (b >= 4 && b < 8)
			bsum = 1280000;
		else if (b >= 8 && b < 16)
			bsum = 640000;
		else if (b >= 16 && b < 32)
			bsum = 320000;
		else
			bsum = 0;

		cout << asum + bsum << endl;
		a = 0, b = 0, asum = 0, bsum = 0;
	}

	return 0;
}