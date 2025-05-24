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

int main(void) {
	vector<map<string, int>> json(1);
	int level = 0, val = 0;
	bool Active = true, keyInput = false, valInput = false;
	char ch; string s;
	while(Active) {
		ch = getchar();
		if(!isdigit(ch) && valInput) {
			valInput =false;
			json[level][s] = val;
			val = 0; s.clear();
		}
		if(ch == '{') {
			level++;
			if(json.size() < level+1) {
				map<string, int> m;
				json.push_back(m);
			}
		}
		if(ch == '"') {
			keyInput = !keyInput;
		}
		if(keyInput && ch != '"') {
			s += ch;
		}
		if(ch == ':') {
			valInput = true;
			// val = read();
			// json[level][s] = val;
			// s.clear();
		}
		if(valInput && isdigit(ch)) {
			 val = 10 * val + ch - '0';
		}
		if(ch == '}') {
			level--;
		}
		if(level == 0) {
			Active = false;
		}
	}
	int p = read();
	string ss; 
	for(int i = 0; i < p; i++) cin >> ss;
	cout << json[p][ss];

	return 0;
}