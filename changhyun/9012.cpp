#include <string>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{

	int n;
	
	string a;

	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a;
		int vps = 0;
		int fin = 0;
		for (int j = 0; j < a.length(); j++)
		{
			if (a.at(j) == '(') 
				vps++;
			
			else if (a.at(j) == ')') 
				vps--;
			
			if (vps < 0) {
				cout << "NO" << endl;
				fin = 1;
				break;
			}
		}
		if (vps == 0&&fin==0)
			cout << "YES" << endl;

		else if(fin==0)
			cout << "NO" << endl;
	
	}

}
