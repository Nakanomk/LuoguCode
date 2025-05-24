#include <bits/stdc++.h>
#define f(y) for(int i = 0, __ = y; i < __; i++)
using namespace std;
int main()
{
	int count = 0;
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int a[10], h;
	f(10)
	{
		cin >> a[i];
	}
	cin >> h;
	h += 30;
	f(10) if (a[i] <= h) count++;
	cout << count;
	system("pause");
	return 0;
}