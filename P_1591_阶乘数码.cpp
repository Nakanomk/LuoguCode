#include<bits/stdc++.h>
// #define DEBUG
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

string plusString(string a, string b) {
	string c;
//	a.reverse(), b. reverse();
	char tmp = '0'; bool isCarry = false;
	int i = a.length() - 1, j = b.length() - 1;
	while(i >= 0 || j >= 0) {
		if(isCarry) {
			tmp = '1';
			isCarry = false;
		}
		if(i >= 0) tmp += a[i] - '0';
		if(j >= 0) tmp += b[j] - '0';
		if(tmp > '9') {
			tmp -= 10;
			c = tmp + c;
			isCarry = true;
		}
		else c = tmp + c;
		i--; j--;
#ifdef DEBUG
		cout << c << endl;
#endif
		tmp = '0';
	}
	if(isCarry) {
		c = '1' + c;
	}
	string d;
	for(int i = 0; i < c.length(); i++) {
		static bool isDel = true;
		if(c[i] != '0') isDel = false;
		if(!isDel) d = d + c[i];
	}
	if(d.length() == 0) d = "0";
	return d;
}

string singleMultiply(string a, char b) {
	string c;
//	a.reverse(), b. reverse();
	unsigned char tmp = '0'; int Carry = 0;
	int i = a.length() - 1;
	while(i >= 0) {
		tmp = (a[i] - '0') * (b - '0') + '0';
		tmp += Carry; Carry = 0;
		if(tmp > '9') {
			while(tmp > '9') {
				tmp -= 10;
				Carry++;
			}
		}
		c = (char)tmp + c;
		i--;
	}
	
	if(Carry) {
		char ca = '0' + Carry;
		c = ca + c;
	}
	
	
	string d;
	for(int i = 0; i < c.length(); i++) {
		static bool isDel = true;
		if(c[i] != '0') isDel = false;
		if(!isDel) d = d + c[i];
	}
	if(d.length() == 0) d = "0";
	return d;
}

string multiply(string a, string b) {
	string c; int cnt = 0;
	for(int i = b.length() - 1; i > -1; i--) {
		string d = singleMultiply(a, b[i]);
		for(int j = 0; j < b.length() - 1 - i; j++) {
			d = d + '0';
		}
		c = plusString(c, d);
#ifdef DEBUG
		cout << '+' << d << ' ' << '=' << c << endl;
#endif
	}
	
	string d;
	for(int i = 0; i < c.length(); i++) {
		static bool isDel = true;
		if(c[i] != '0') isDel = false;
		if(!isDel) d = d + c[i];
	}
	if(d.length() == 0) d = "0";
	return d;
}

void factor(string &n) {
	if(n == "0") n = "1";
	for(int i = stoi(n)-1; i >= 1; i--) n = multiply(n, to_string(i));
}

// void choose(ll n, ll a) {
// 	int cnt = 0;
// 	while(n != 0) {
// 		if(n % 10 == a) cnt++;
// 		n /= 10;
// 	}
// 	cout << cnt << endl;
// }
void choose(string n, string a) {
	int cnt = 0;
	for(char c: n) {
		if(c == a[0]) cnt++;
	}
	cout << cnt << endl;
}

int main(void) {
	int t = read();
	for(int i = 0; i < t; i++) {
		string n, a; cin >> n >> a;
		factor(n);
		choose(n, a);
	}

	return 0;
}