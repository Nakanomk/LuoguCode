#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define DEBUG
#define N 1000000007

inline ll read() {
	ll x = 0, w = 1; char ch;
	while(!isdigit(ch = getchar()))
		if(ch == '-') w = -w;
	while(isdigit(ch)) {
		x = 10 * x + ch - '0';
		ch = getchar();
	}
	return x * w;
}

ll factorial(int n, int m) {
	if(n == 0) return 1;
	ll sum = 1;
	for(int i = m; i <= n; i++) {
		if(i != 0) sum *= i;
	}
	return sum;
}

ll combination(int m, int n) {
	#ifdef DEBUG
	cout << "c" << m << n << '=' << factorial(n, n - m + 1) / factorial(m, 1) << endl << factorial(n, n-m+1) << ' ' << factorial(m, 1) << endl;
	#endif
	return factorial(n, n - m + 1) / factorial(m, 1);
}

ll derangement(int n) {
	ll k = 1, sum = 0;
	for(int i = n; i >= 0; i--) {
		sum += k * combination(n - i,n) * factorial(i, 1);
		k = -k;
		sum %= N;
		#ifdef DEBUG
		cout << sum << endl;
		#endif
	}
	return sum;
}

int main() {
	int T; cin >> T;
	for(int i = 1; i <= T; i++) {
		ll n, m; n = read(); m = read();
		cout << combination(m , n) * derangement(n - m) % N << endl;
	}
	system("pause");
	return 0;
}