#include<bits/stdc++.h>
#define DEBUG
#define ll long long

using namespace std;

ll read() {
	ll x = 0, w = 1;char ch;
	while(!isdigit(ch = getchar())) if(ch == '-') w = -w;
	while(isdigit(ch)) {x = 10 * x + ch - '0'; ch = getchar();}
	return x * w;
}

int main(void) {
	int N = read();
	vector<vector<int>> hero(N+10, vector<int>(N+10,0));
	int max = 0, maxi = 0;
	for(int i = 1; i <= N-1; i++)
		for(int j = i+1; j <= N; j++) {
			hero[i][j] = read();
			hero[j][i] = hero[i][j];
		}
	priority_queue<int> pq;
	for(int i = 1; i <= N; i++) {
		int max = 0; maxi = 0;
		for(int j = 1; j <= N; j++) {
			if(hero[i][j] > max) {
				maxi = max;
				max = hero[i][j];
			}
			else if(hero[i][j] > maxi) {
				maxi = hero[i][j];
			}
		}
		pq.push(maxi);
	}
	int r = pq.top();
	cout << 1 << endl << r;
	
	return 0;
}