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
	ll n = read(), k = read();
	vector<ll> s;
	for(int i = 1; i <= k; i++) {
		ll b = read(); s.push_back(b);
	}
	for(int i = 1; i <= k; i++) {
		ll cnt = 0;
		for(int j = 1; j <= n/k; j++) {
			ll b = read();
			if(find(s.begin(), s.end(), b) != s.end()) cnt++;
			if(cnt == 2) {
				cout << "\\QAQ/";
				return 0;
			}
		}
		if(cnt == 0) {
			cout << "\\QAQ/";
			return 0;
		}
	}
	cout << "\"MiaoW\"";

	return 0;
}