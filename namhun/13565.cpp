#include <iostream>

using namespace std;

#define OPEN 0
#define CLOSE 1

bool Fiber[1001][1001];
int contact[1001];
int flag = 1;
int M = 0, N = 0;

int Find(int dx, int dy) {
	Fiber[dx][dy] = CLOSE;
}

int main() {
	cin >> M >> N;

	for (int i = 1; i <= M; i++) {
		for (int j = 1; j <= N; j++) {
			cin >> Fiber[M][N];
		}
	}
	for (int i = 1; i <= M; i++) {
		contact[i] = 0;
	}

	

}