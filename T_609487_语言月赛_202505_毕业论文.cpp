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
	int w = read(), f = read(), a = read(), r = read();
	if(w != 0) {
		int rR = f * 5;
		int aR = a * 10;
		if(rR <= w && aR <= 3 * w && w >= r) cout << "Accepted";
		else cout << "Rejected";
	}

	return 0;
}