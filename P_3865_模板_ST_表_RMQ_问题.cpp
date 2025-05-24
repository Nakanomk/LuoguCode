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
	int n = read(), m = read();
	int lg[100100], st[100100][21];
	for(int i = 1; i <= n; i++) st[i][0] = read();
	// Processing lg2 array
	lg[1] = 0;
	for(int i = 2; i <= n; i++) lg[i] = lg[i>>1] + 1;
	// Generate ST
	for(int i = 1; i <= lg[n]; i++)
		for(int j = 1; j <= n - (1 << i) + 1; j++) {
			st[j][i] = max(st[j][i-1], st[j+(1<<(i-1))][i-1]);
		}
	// Input
	for(int i = 0; i < m; i++) {
		int l = read(), r = read();
		int k = lg[r-l+1];
		int result = max(st[l][k], st[r - (1 << k) + 1][k]);
		printf("%d\n", result);
	}

	return 0;
}