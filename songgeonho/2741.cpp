/*#include <iostream>
using namespace::std;
int main(void)
{
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		printf("%d\n", i);
	}
}
// cin 입력 28ms
*/

#include <iostream>

int main()
{
	int N;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++)
	{
		printf("%d\n", i);
	}
}
//scanf 입력 8ms 
//cin scanf 입력속도 차이
// ios_base sync_with_stdio(false)로 cin,cout 속도 
