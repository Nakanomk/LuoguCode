#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// #define DEBUG

ll read() {
	ll x = 0, s = 1;
	char ch;
	while(!isdigit(ch = getchar())) {
		if(ch == '-') s = -s;
	}
	while(isdigit(ch)) {
		x = 10 * x + ch - '0';
		ch = getchar();
	}
	return x * s;
}

int main() {
	ll a,b,c;
	ll w[21][21][21];
	for(int i = 0; i < 21; i++) {
		for(int j = 0; j < 21; j++) {
			for(int k = 0; k < 21; k++) {
				if(i == 0 || j == 0 || k == 0) {
					w[i][j][k] = 1;
				}
				else if(i < j && j < k){
					w[i][j][k] = w[i][j][k-1] + w[i][j-1][k-1] - w[i][j-1][k];
				}
				else {
					w[i][j][k] = w[i - 1][j][k] + w[i - 1][j - 1][k] + w[i - 1][j][k - 1] - w[i - 1][j - 1][k - 1];
				}
			}
		}
	}
	#ifdef DEBUG
	for(int i = 0; i < 21; i++) {
		for(int j = 0; j < 21; j++) {
			for(int k = 0; k < 21; k++) {
				printf("%9lld ", w[i][j][k]);
			}
			cout << endl;
		}
		cout << endl;
	}
	#endif
	while(1) {
		a = read(), b = read(), c = read();
		ll ta = a, tb = b, tc = c;
		if(a == -1 && b == -1 && c == -1) break;
		else {
			if(a > 20 || b > 20 || c > 20) ta = tb = tc = 20;
			if(a <= 0 || b <= 0 || c <= 0) ta = tb = tc = 0;
		}
		printf("w(%lld, %lld, %lld) = %lld\n", a, b, c, w[ta][tb][tc]);
	}
	system("pause");
	return 0;
}