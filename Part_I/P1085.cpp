#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t = 0, t2 = 0, d = 0, e = 0;
	for(int i = 0; i < 7; i++) {
		cin >> t >> t2;
		if(t + t2 > 8 && t + t2 > d) {
			d = t + t2;
			e = i+1;
		}
	}
	cout << e;
	system("pause");
	return 0;
}