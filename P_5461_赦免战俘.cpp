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

void bonus(int n, int x, int y, VVI &M) {
	if(n == 1) return;
	for(int i = x; i <=  x + (n>>1) - 1; i++) {
		for(int j = y; j <= y + (n>>1) - 1; j++) {
			M[i][j] = 0;
		}
	}
	bonus(n>>1, (n>>1)+x, y, M);
	bonus(n>>1, (n>>1)+x, (n>>1)+y, M);
	bonus(n>>1, x, (n>>1)+y, M);
}

int main(void) {
	int t = read();
	int n = 1; for(int i = 0; i <t; i++) n <<= 1;
	VVI M(n+1, VI(n+1, 1));
	bonus(n, 1, 1, M);

	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			cout << M[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}