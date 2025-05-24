#include<bits/stdc++.h>
#define DEBUG
#define ll long long

using namespace std;

inline ll read() {
	ll x = 0, w = 1;
	char ch;
	while(!isdigit(ch = getchar())) if(ch == '-') w = -w;
	while(isdigit(ch)) x = 10 * x + ch - '0';

	return x * w;
}

bool isPrime(int x) {
	if(x <= 1) return false;
	else if(x <= 3) return true;
	else {
		for(ll i = 2; i <= sqrt(x); i++) {
			if(!(x % i)) return false;
		}
	}

	return true;
}

int main() {
	for(int i = 1; i <= 10000; i++) {
		static int cnt = 0;
		if(isPrime(i)) {cout << i << ' '; cnt++;}
		if(!(cnt % 10) && cnt != 0) {
			cout << endl; cnt = 0;
		}
	}

	system("pause");
	return 0;
}