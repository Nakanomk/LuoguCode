#include <bits/stdc++.h>
using namespace std;
int main()
{
	double S = 0.0, n = 0.0;
	int k, i = 0;
	cin >> k;
	while (S <= k)
	{
		n = n + 1;
		i++;
		S += 1 / n;
	}
	cout << i;
	system("pause");
	return 0;
}