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

int len(int a) {
	int i = 0;
	if(a > 0) while(a > 0) {
		i++; a /= 10;
	}
	else if(a == 0) return 0;
	else if(a < 0) {
		while(a < 0) {i++; a /= 10;}
		i++;
	}
	return i;
}

int main(void) {
	int n = read();
	string calp;
	for(int i = 0; i < n; i++) {
		string cal;
		cin >> cal;
		string a, b;
		if(isdigit(cal[0])) {a = cal; cal = calp; cin >> b;}
		else cin >> a >> b;
		if(cal == "a") {
			string result = a + '+' + b + '=' + to_string(stoi(a) + stoi(b));
			cout << result << endl;
			cout << result.length() << endl;
		}
		else if(cal == "b") {
			string result = a + '-' + b + '=' + to_string(stoi(a) - stoi(b));
			cout << result << endl;
			cout << result.length() << endl;
		}
		else if(cal == "c") {
			string result = a + '*' + b + '=' + to_string(stoi(a) * stoi(b));
			cout << result << endl;
			cout << result.length() << endl;
		}
		calp = cal;
	}

	return 0;
}