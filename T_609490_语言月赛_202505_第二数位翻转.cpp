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
	ll n = read();
	ll r = 0;
	while(n) {
		ll a = n % 100;
		r = 100 * r + a;
		n /= 100;
	}
	cout << r;

	return 0;
}