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
	return a == b;
}

void strFind(string & str, string & mode) {
	for(int i = 0; i < str.length(); i++) {
		for(int j = i; j <= i + mode.length() && j < str.length(); j++) {
			if(mode[j-i] != str[j]) break;
			else if(j == mode.length() + i - 1) {
				cout << i << endl;
				return;
			}
		}
	}
	cout << -1 << endl;
	return; 
}

int main(void) {
	int q = read();
	string str; cin >> str;
	for(int i = 0; i < q; i++) {
		int opt = read();
		switch(opt) {
			case 1: {
				string add; cin >> add;
				str = str + add;
				cout << str << endl;
				break;
			}
			case 2: {
				int a = read(), b = read();
				string re;
				for(int i = a; i < a + b; i++) {
					re = re + str[i];
				}
				cout << re << endl;
				str = re;
				break;
			}
			case 3: {
				string re; int a = read();
				string ipt; cin >> ipt;
				for(int i = 0; i < a; i++) {
					re = re + str[i];
				}
				re = re + ipt;
				for(int i = a; i < str.length(); i++) {
					re = re + str[i];
				}
				cout << re << endl;
				str = re;
				break;
			}
			case 4: {
				string mode; cin >> mode;
				strFind(str, mode);
				break;
			}
		}
	}

	return 0;
}