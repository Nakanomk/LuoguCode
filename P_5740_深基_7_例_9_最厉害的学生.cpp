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

struct Profile {
	string name;
	int a;
	int b;
	int c;
	int score;
};

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
	int n = read();
	vector<Profile> s;
	int tag, max = 0;
	for(int i = 0; i < n; i++) {
		Profile a; cin >> a.name;
		int sum = 0;
		int k = read(), m = read(), p = read();
		a.a = k; a.b = m; a.c = p;
		sum = k + m + p; a.score  =sum;
		s.push_back(a);
		if(max < sum) {
			tag = i;
			max = sum;
		}
	}
	cout << s[tag].name << " " << s[tag].a << " " << s[tag].b
 << " " << s[tag].c;
	return 0;
}