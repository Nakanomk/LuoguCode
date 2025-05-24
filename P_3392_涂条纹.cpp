#include<bits/stdc++.h>
#define DEBUG
#define ll long long
#define VI vector<int>
#define VL vector<long long>
#define VVI vector<vector<int>>
#define VVL vector<vector<long long>>
#define SI set<int>
#define SL set<long long>

using namespace std;

inline ll read() {
	ll x = 0, w = 1;char ch;
	while(!isdigit(ch = getchar())) if(ch == '-') w = -w;
	while(isdigit(ch)) {x = 10 * x + ch - '0'; ch = getchar();}
	return x * w;
}

bool isPrime(int x) {
	if(x <= 1) return false;
	else if(x <= 3) return true;
	else {
		for(int i = 2; i <= sqrt(x); i++)
			if(x % i == 0) return false;
	}
	return true;
}

bool isPalindrome(int n) {
	int a = 0, b = n;
	while(n != 0) {
		a = 10 * a + n % 10;
		n /= 10;
	}
	if(a == b) return true;
	return false;
}

int main(void) {
	int N = read(), M = read();
	VVI a(N+1, VI(M+1));
	int cnt = 0;
	for(int i = 1; i <= N; i++) {
		for(int j = 1; j <= M; j++) {
			a[i][j] = read();
			if(i == 1 && a[i][j] != 'W') cnt++;
			else if(i == N && a[i][j] != 'R') cnt++;
			else if(i != 1 && i != N && a[i][j] != 'B') cnt++;
		}
	}

	cout << cnt;

	return 0;
}