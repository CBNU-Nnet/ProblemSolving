#include <iostream>
#include <algorithm>
#include <string>
#include <cstdlib>

using namespace std;

int Reversed(string a, string b) {
	string resultrev = "";
	int num1 = 0, num2 = 0, result = 0;

	//�����
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	//int�� ��ȯ
	num1 = atoi(a.c_str());
	num2 = atoi(b.c_str());
	//���ϱ�
	result = num1 + num2;
	//�ٽ� ��Ʈ������ ����ȯ
	resultrev = to_string(result);
	//������
	reverse(resultrev.begin(), resultrev.end());
	//�ٽ� int������
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