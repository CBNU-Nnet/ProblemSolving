#include <iostream>
using namespace::std;

int main()
{
	char c;
	int a, b,t;
	cin >> t;
	while (t--)
	{
		cin >> a >> c >> b; //  숫자, 숫자에서 [,] 거르기 변수 C
		cout << a + b << endl;
	}
}
