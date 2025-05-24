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
	set<int> a;
	int n = read();
	for(int i = 1; i <= n; i++) {
		int t = read(); t = abs(t);
		if(t != 0) a.insert(t);
	}
	int r = INT_MAX;
	while(a.size() != 1) {
		r = *a.rbegin() - *a.begin();
		a.erase(*a.rbegin());
		a.insert(r);
	};
	cout << *a.begin();

	return 0;
}