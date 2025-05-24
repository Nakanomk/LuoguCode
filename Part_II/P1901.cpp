#include<bits/stdc++.h>
#define DEBUG
#define ll long long

using namespace std;

int room[1010][1010], v[1010][1010] = {0}, vst[1010][1010] = {0};
int n, m; int d[4][2] = {{1,0},{-1, 0}, {0,1}, {0,-1}};

bool isIn(int x, int y) {
	return x >= 1 && x <= n && y >= 1 && y <= m;
}

void vstClear() {
	for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            vst[i][j] = 0;
        }
    }
}

bool bfs(int a) {
	queue<pair<int,int>> q;
	q.push(make_pair(1,1)); vst[1][1] = 1;
	while(!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for(int i = 0; i < 4; i++) {
			int xx = x + d[i][0], yy = y + d[i][1];
			if(xx == n) {vstClear(); return true;}
			if(isIn(xx, yy) && room[xx][yy] <= a && !vst[xx][yy]) {q.push(make_pair(xx, yy)); vst[xx][yy] = 1;}
		}
	}
    vstClear();
	return false;
}

int main() {
	cin >> n >> m;
	int l = 0, r = 0;
    for(int i = 1; i <= n; i++)
		for(int j = 1; j <= m; j++) {
			cin >> room[i][j];
			if(room[i][j] > r) r = room[i][j];
		}
	while(l < r) {
		int mid = (l + r) / 2;
		if(!bfs(mid)) l = mid + 1;
		else r = mid;
	}
    while(bfs(l)) l--;
	cout << l + 1;
    return 0;
}