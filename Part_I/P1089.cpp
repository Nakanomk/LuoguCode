#include <bits/stdc++.h>
using namespace std;
int main()
{
	int b = 0, m = 0, cost;
	for(int i = 0; i < 12; i++) {
		b += 300;
		cin >> cost;
		m += (b - cost) / 100 * 100;
		b = b - cost - (b - cost) / 100 * 100;
		if(b < 0) {
			cout << "-" << i+1;
			system("pause");
			return 0;
		}
	}
	cout << b + m * 6 / 5;
	system("pause");
	return 0;
}