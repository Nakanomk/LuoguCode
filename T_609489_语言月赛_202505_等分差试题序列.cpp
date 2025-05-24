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
	int n = read();
	vector<int> a, b;
	int o = 0, l = 0;
	for(int i = 0; i < n; i++) {
		int t = read();
		o = t;
		a.push_back(t);
		int k = o - l;
		if(i != 0) b.push_back(k);
		l = o;
	}
	int cnt = 1, cntmax = 1;
	bool spe = false;
	for(int i = 0; i < n - 1; i++) {
		if(i != 0 && b[i] == b[i-1]) {
			cnt++;
			if(cnt > cntmax) cntmax = cnt;
		}
		else cnt = 1;
		if(b[i] == 1) spe = true;
	}
	if(cntmax >= 2) cout << cntmax + 1;
	else if(spe) cout << 2;
	else cout << 1;

	return 0;
}