//�ù� �� ������ ����
#include <iostream>

using namespace std;

#define MODH 3600
#define MODM 60

int main() {
	int h = 0, m = 0, s = 0;	//�ð�, ��, ��
	int tc = 0;					//�׽�Ʈ ���̽� ����
	int T = 0;					//������ ���� ����
	int c = 0;					//������ 1 or 2�϶�, ������ Ȥ�� �ڷ� �̵��� �� ����
	long long time = 0;

	scanf_s("%d %d %d", &h, &m, &s);
	scanf_s("%d", &tc);

	time = h * MODH + m * MODM + s;

	while (tc--) {
		scanf_s("%d", &T);
		switch (T) {
		case 1:
			scanf_s("%d", &c);
			if (c / MODH >= 1) {
				h += c / MODH;
				c -= (c / MODH) * MODH;
			}
			if (c / MODM >= 1) {
				m += c / MODM;
				c -= (c / MODM) * MODM;
			}
			if (c > 0) {
				s += c;
				c -= c;
			}
			break;
		case 2:
			scanf_s("%d", &c);
			if (c / MODH >= 1) {
				h -= c / MODH;
				c -= (c / MODH) * MODH;
			}
			if (c / MODM >= 1) {
				if (m < c / MODM) {
					h -= 1;
					m = 60 - (c / MODM - m);
					c -= (c / MODM) * MODM;
				}
				else {
					m -= c / MODM;
					c -= (c / MODM) * MODM;
				}
			}
			if (c / MODM < 1) {
				if (s < c) {
					m -= 1;
					s = 60 - (c - s);
					c -= c;
				}
				else {
					s -= c;
					c -= c;
				}
			}
			break;
		case 3:
			printf("%d %d %d\n", h, m, s);
			break;
		default:
			break;
		}
	}

	return 0;
}