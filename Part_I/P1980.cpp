#include <bits/stdc++.h>
using namespace std;
int main()
{
	int c = 0, n = 0, x = 0;
	cin >> n >> x;
	for (int i = 1; i <= n; i++)
	{
		int b = i;
		while (b)
		{
			if (b % 10 == x)
				c++;
			b /= 10;
		}
	}
	cout << c;
	system("pause");
	return 0;
}