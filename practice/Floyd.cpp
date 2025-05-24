#include<bits/stdc++.h>
#define DEBUG
#define ll long long
#define inf 2e9

using namespace std;

int val[110][110], path[110][110];
int read() {
	int x = 0, w = 1; char ch;
	while(!isdigit(ch = getchar())) if(ch == '-') w = -w;
	while(isdigit(ch)) {x = 10 * x + ch - '0'; ch = getchar();}
	return x * w;
}

void pathSearch(int p1, int p2, int layer) {
	if(p2 == -1) cout << p1 << " to " << p2 << " not exist" << endl;
	if(path[p1][p2] != p1) pathSearch(p1, path[p1][p2], layer+1);
	else cout << p1 << " ";
	cout << p2 << " ";
	return;
}

int main() {
	int n = read(), m = read();
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++)
			if(i == j) val[i][j] = 0, path[i][j] = i;
			else val[i][j] = inf, path[i][j] = -1;
	for(int i = 0; i < m; i++) {
		int x = read(), y = read(), w = read();
		if(w < val[x][y]) val[x][y] = w, val[y][x] = w;
		path[y][x] = y; path[x][y] = x;
	}
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			for(int k = 1; k <= n; k++) {
				if(val[j][i] != inf && val[i][k] != inf && val[j][k] > val[j][i] + val[i][k]) {
					val[j][k] = val[j][i] + val[i][k];
					path[j][k] = path[i][k];
				}
			}
		}
	}

	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++)
			if(j == n) cout << val[i][j] << endl;
			else cout << val[i][j] << " ";

	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++)
				{pathSearch(i, j, 0); cout << endl;}

	return 0;
}