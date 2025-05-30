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

int result = 1, m = 0;
VI fac, r;

void dfs(int n, int p) {
	if(n == 0) {if(result > m) {m = result;r = fac;} return;}
	for(int i = p+1; i <= n; i++) {
		result *= i;
		fac.push_back(i);
		dfs(n - i, i);
		result /= i;
		fac.pop_back();
	}
}

int main(void) {
	int n = read();
	dfs(n,0);
	for(int i : r) cout << i << " ";
	cout << endl;
	cout << m;

	return 0;
}