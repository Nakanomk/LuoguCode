#include<bits/stdc++.h>
#define DEBUG
#define ll long long

using namespace std;

ll read() {
	ll x = 0, w = 1;char ch;
	while(!isdigit(ch = getchar())) if(ch == '-') w = -w;
	while(isdigit(ch)) {x = 10 * x + ch - '0'; ch = getchar();}
	return x * w;
}

bool isES(string &s) {
	for(int i = 0; i < s.length(); i++) {
		if(s[i] != s[s.length()-1 - i] && (s[i] != '?' && s[s.length() - 1 - i] != '?')) return false;
	}
	return true;
}

int main(void) {
	ll n = read();
	for(int m = 0; m < n; m++) {
		string s; cin >> s;
		int cnt = 0; cnt += s.length();
		for(int i = 0; i < s.length(); i++) {
			string s1; s1 += s[i];
			for(int j = i + 1; j < s.length(); j++) {
				s1 += s[j];
				if(isES(s1)) cnt++;
			}
		}
		cout << cnt << endl;
	}

	return 0;
}