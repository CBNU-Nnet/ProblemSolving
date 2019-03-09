#include <string>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
int arr[246916];
int main() {


	for (int i = 2; i < sqrt(246916); i++) {
		if (arr[i] == 1) // 이미 체크된 수의 배수는 확인하지 않는다
			continue;

		for (int j = i + i; j <= 246915; j += i) { // i를 제외한 i의 배수들은 0으로 체크

			arr[j] = 1;

		}
	}

	while (1) {
		int n;
		int count = 0;
		int nt;

		cin >> n;



		if (n == 0)
			break;

		for (int i = n+1; i <= 2*n; i++) {	//기준 수
			if (arr[i] == 0)
				count++;
		}
		cout << count << "\n";
	}
}
