#include<iostream>
#include<string.h>
#include<string>
#include<ctype.h>
#include<stdio.h>
using namespace std;
int main() {
	int n;
	scanf("%d", &n);

	for (int k = 0; k < n; k++) {

		string str;
		int arr[30] = { 0 };
		bool two = true;
		char cstr[1000];
		cin.ignore(1000, '\n');
		cin.clear();
		cin.get(cstr, 1000);
		int num = 0, num2 = 0, num3 = 0, num4 = 0;
		for (int i = 0; i < strlen(cstr) + 1; i++)
		{
			if (isalpha(cstr[i])) {
				cstr[i] = tolower(cstr[i]);
				//printf("%c", cstr[i]);
				num4 = cstr[i] - 'a';		//여기가 원래 num이었자나 그래서
				if (num4 >= 0 && num4 < 26)
					arr[num4]++;
			}
			else continue;
		}
		for (int i = 0; i < 26; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
		/*for (int i = 0; i < 26; i++)
		   printf("%c: %d\n", 'a' + i, arr[i]);
		printf("\n");*/
		for (int i = 0; i < 26; i++) {
			if (arr[i] <= 0) {
				two = false;
				printf("Case %d: Not a pangram\n", k + 1);
				break;
			}
			else num += arr[i];			//여기랑 겹쳐져서 num이 1 3 5 7 이렇게 늘어나서

		}
		cout << "num = " << num << endl;
		if (num >= 26)
			for (int i = 0; i < 26; i++) {
				if (arr[i] >= 2) {
					num2++;
				}
				else
					break;
			}
		cout << "num2 = " << num2 << endl;
		if (num2 >= 26) {
			for (int i = 0; i < 26; i++) {
				if (arr[i] > 2) {
					num3++;
				}
				else if (arr[i] < 3)
					break;
			}
			//   printf("num1: %d,num2: %d, num3:%d\n", num, num2, num3);
		}
		cout << "num3 = " << num3 << endl;
		if (num3 >= 26)
			printf("Case %d: Triple pangram!!!\n", k + 1);
		else if (num2 >= 26)
			printf("Case %d: Double pangram!!\n", k + 1);
		else if (num >= 26 && two == true)
			printf("Case %d: Pangram!\n", k + 1);
	}

}