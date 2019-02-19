#include <iostream>
#include <algorithm>

using namespace std;

int sg[500000];
int comp[500000];
bool check[500000];

bool BS(int *arr, int n, int search) {
	int start = 0;
	int mid;
	int end = n - 1;

	while (end - start >= 0) {
		mid = (end + start) / 2;

		if (search == arr[mid])
			return true;
		else if (search < arr[mid])
			end = mid - 1;
		else
			start = mid + 1;
	}
	return false;
}

int main() {
	int N, M;

	scanf_s("%d", &N);

	for (int i = 0; i < N; i++)
		scanf_s("%d", &sg[i]);

	sort(sg, sg + N);

	scanf_s("%d", &M);

	for (int i = 0; i < M; i++) {
		scanf_s("%d", &comp[i]);
	}

	for (int i = 0; i < M; i++) {
		check[i] = BS(sg, N, comp[i]);
	}

	for (int j = 0; j < M; j++)
		printf("%d ", check[j]);
	printf("\n");
	return 0;
}