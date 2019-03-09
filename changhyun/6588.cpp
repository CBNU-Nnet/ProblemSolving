#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;
int arr[1000002];
int main() {

	
	for (int i = 2; i < sqrt(1000001); i++) {
		if (arr[i] == 1) // 이미 체크된 수의 배수는 확인하지 않는다
			continue;

		for (int j = i + i; j <= 1000001; j += i) { // i를 제외한 i의 배수들은 0으로 체크
			arr[j] = 1;
		}
	}

	while (1) {
		int n;
		int count = 0;

		scanf("%d", &n);

		if (n == 0)
			break;

		for (int j = 3; j <= n/2; j=j+2)
		{
			if (arr[j] == 0 && arr[n - j] == 0) {
				printf("%d = %d + %d\n", n, j, n - j);
				count = 1;
				break;
			}
		}
		if (count == 0)
			printf("Goldbach's conjecture is wrong.");
	}
}
