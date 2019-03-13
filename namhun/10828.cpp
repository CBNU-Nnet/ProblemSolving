#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int S[10001] = { 0 };
int t = 0;

void push(int n) {
	S[t] = n;
	t++;
}

void pop() {
	if (S[t - 1] == 0)
		cout << "-1" << '\n';
	else {
		cout << S[t - 1] << '\n';
		S[t - 1] = 0;
		t--;
	}
}

void size() {
	cout << t << '\n';
}

void empty() {
	if (S[0] == 0)
		cout << "1" << '\n';
	else
		cout << "0" << '\n';
}

void top() {
	if (S[t - 1] == 0) {
		cout << "-1" << '\n';
	}
	else
		cout << S[t - 1] << '\n';
}

int main() {
	int N;

	cin >> N;

	if (N > 10000 || N < 1)
		return 0;

	for (int i = 0; i < N; i++) {
		char o[10];
		cin >> o;
		if (!strcmp(o, "push")) {
			int p = 0;
			cin >> p;
			if (p > 100000 || p < 1)
				return 0;
			push(p);
		}
		else if (!strcmp(o, "pop")) {
			pop();
		}
		else if (!strcmp(o, "size")) {
			size();
		}
		else if (!strcmp(o, "empty")) {
			empty();
		}
		else if (!strcmp(o, "top")) {
			top();
		}
		else
			return 0;
	}

	return 0;
}