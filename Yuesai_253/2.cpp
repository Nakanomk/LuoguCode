#include<bits/stdc++.h>
using namespace std;
int main() {
	int a[1010][1010] = {0};
	int n, m; cin >> n >> m;
	int count = 0;
	bool s[4] = {0};
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			cin >> a[i][j];
	int x, y;
	cin >> x >> y;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			memset(s, 1, 4*sizeof(bool));
			if(i == 0) s[0] = 0;
			if(i == n-1) s[1] = 0;
			if(j == 0)	s[2] = 0;
			if(j == m-1) s[3] = 0;
			if(a[i][j] == x && (s[0] && a[i-1][j] == y || s[1] && a[i+1][j] == y || s[2] && a[i][j-1] == y || s[3] && a[i][j+1] == y)) {
				count++;
				continue;
			}
		}
	
	cout << count;
	system("pause");
	return 0;
}