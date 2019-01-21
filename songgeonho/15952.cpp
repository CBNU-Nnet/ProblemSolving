#include <iostream>
using namespace::std;

int main()
{
	int a, b;
	while (cin >> a >> b) //입력받다가
	{
		if (a == 0 && b == 0) // 둘다 0,0 이면
			break; // 종료
		cout << a + b << endl;
	}
}
