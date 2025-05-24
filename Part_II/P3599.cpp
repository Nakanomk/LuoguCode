#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define DEBUG
#define inf 0x3f3f3f3f3f
ll read() {
	ll x = 0, w = 1;
	char ch;
	while(!isdigit(ch = getchar())) {
		if(ch == '-') w = -w;
	}
	while(isdigit(ch)) {
		x = 10 * x + ch - '0';
		ch = getchar();
	}
	return x * w;
}

ll quickPow(ll rt, ll p, ll mod) {
	ll result = 1, tmp = rt;
	while(p) {
		if(p & 1) {
			result *= tmp;
			result %= mod;
		}
		tmp *= tmp; tmp %= mod; p >>= 1;
	}
	return result;
}

bool isPrime(ll x) {
	if(x == 1) return false;
	if(x == 2 || x == 3) return true;
	for(int i = 2; i <= sqrt(x); i++) {
		if(x % i == 0) return false;
	}
	return true;
}

int main() {
	ll X, T; X = read(), T = read();
	ll n;
	if(X & 1) {
		for(ll i = 0; i < T; i++) {
			n = read();
			if(n & 1 && n != 1) cout << 0 << endl;
			else {
				cout << 2 << ' ';
				ll a = n, turn = 0;
				while(turn <= n - 1) {
					if(turn & 1) cout << turn << ' ';
					else {
						cout << a << ' ';
						a -= 2;
					}
					turn++;
				}
				cout << endl;
			}
		}
	}
	else {
		for(ll i = 0; i < T; i++) {
			n = read();
			if(isPrime(n) || n == 1 || n == 4) {
				cout << 2 << ' ' << 1 << ' ';
				if(n == 1)  {
					cout << endl;
					continue;
				}
				if(n == 4) {
					puts("3 2 4\n");
					continue;
				}
				ll tmp = 1, pdt = 1;
				for(int i = 2; i < n; i++) {
					tmp = quickPow(pdt, n-2, n) * i % n;
					pdt = pdt * tmp % n;
					printf("%lld ", tmp);
				}
				cout << n;
				putchar('\n');
			}
			else {
				cout << 0 << endl;
			}
		}
	}

	system("pause");
	return 0;
}