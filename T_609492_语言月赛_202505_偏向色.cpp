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
	ll k = read(); char c; cin >> c;
	ll s = 0;
	for(int i = 1; i <= 256 - k; i++) {
		s += i * i;
	}
	cout << s;

	return 0;
}