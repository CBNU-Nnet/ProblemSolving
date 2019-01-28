#include<stdio.h>
int main()
{
	int x, y;
	int i;
	int days = 0;

	scanf("%d %d", &x, &y);

	for (i = 1; i < x; i++)
	{
		switch (i) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			days += 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			days += 30;
			break;
		case 2:
			days += 28;
			break;
		}
	}

	days += y;

	switch (days % 7) {
	case 0:
		printf("SUN");
		break;
	case 1:
		printf("MON");
		break;
	case 2:
		printf("TUE");
		break;
	case 3:
		printf("WED");
		break;
	case 4:
		printf("THU");
		break;
	case 5:
		printf("FRI");
		break;
	case 6:
		printf("SAT");
		break;
	}

	return 0;
}
