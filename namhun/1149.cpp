#include <iostream>

using namespace std;

#define R 0
#define G 1
#define B 2

int RGB_st[1001][3];

int main() {
	int N;

	scanf_s("%d", &N);

	for (int i = 1; i <= N; i++) {
		for (int j = 0; j < 3; j++) {
			scanf_s("%d", &RGB_st[i][j]);
		}
	}


}