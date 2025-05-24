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
	int s = read(), v = read();
	int h = 8, m = 0;
	int mi = s / v + 10;
	if(s % v) mi++;
	m -= mi;
	while(m < 0) {
		m += 60;
		h--;
		if(h < 0) h = 23;
	}
	if(h/10 == 0) cout << '0'; 
	cout << h << ':';
	if(m/10 == 0) cout << '0';
	cout << m;

	return 0;
}