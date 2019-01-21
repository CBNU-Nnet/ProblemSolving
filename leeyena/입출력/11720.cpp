#include"iostream"
#include<string>
using namespace std;
int main() {

	int N, sum = 0;
	cin >> N;
	char c;

	for (int i = 0; i < N; i++)
	{
		cin >> c;
		sum += (c - '0');

	}

	cout << sum;

}