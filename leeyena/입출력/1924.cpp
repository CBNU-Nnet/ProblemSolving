#include"iostream"
using namespace std;
int main() {
	int a = 0, y = 0, weekday;
	int last, day = 1, total = 1;
	cin >> a >> y;
	for (int x = 1; x <= a; x++) {
		switch (x) {
		case 2:
			last = 28;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			last = 30;
			break;
		default:
			last = 31;
			break;
		}
		if (x == a) last = y;

		for (int day = 1; day <= last; day++) {
			total++;
		}
	}

	weekday = (total - 1) % 7;
	switch (weekday) {
	case 1: cout << "MON"; break;
	case 2:cout << "TUE"; break;
	case 3:cout << "WED"; break;
	case 4:cout << "THU"; break;
	case 5:cout << "FRI"; break;
	case 6:cout << "SAT"; break;
	case 0:cout << "SUN"; break;

	}
	return 0;
}