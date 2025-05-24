#include<bits/stdc++.h>
#define DEBUG
#define ll long long

using namespace std;

ll read() {
	ll x = 0, w = 1; char ch;
	while(!isdigit(ch = getchar())) if(ch == '-') w = -w;
	while(isdigit(ch)) {x = 10 * x + ch - '0'; ch = getchar();}
	return x * w;
}

int main() {
	int c[1001][1001] = {0};
	int n = read(), m = read();
	for(int i = 0; i < m; i++) {
		int x1 = read(), y1 = read(), x2 = read(), y2 = read();
		for(int ii = x1; ii <= x2; ii++)
			for(int iii = y1; iii <= y2; iii++)
				c[ii][iii]++;
	}
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++) {
			cout << c[i][j] << " ";
			if(j == n) cout << endl;
		}

	return 0;
}