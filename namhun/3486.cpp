#include <iostream>
#include <algorithm>
#include <string>
#include <cstdlib>

using namespace std;

int Reversed(string a, string b) {
	string resultrev = "";
	int num1 = 0, num2 = 0, result = 0;

	//뒤집어서
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	//int로 변환
	num1 = atoi(a.c_str());
	num2 = atoi(b.c_str());
	//더하기
	result = num1 + num2;
	//다시 스트링으로 형변환
	resultrev = to_string(result);
	//뒤집기
	reverse(resultrev.begin(), resultrev.end());
	//다시 int형으로
	result = atoi(resultrev.c_str());

	return result;
}

int main() {
	int N;

	cin >> N;

	for (int i = 0; i < N; i++) {
		string Add1 = "", Add2 = "";
		cin >> Add1 >> Add2;
		cout << Reversed(Add1, Add2) << '\n';
	}
}