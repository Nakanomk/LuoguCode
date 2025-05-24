#include<bits/stdc++.h>
using namespace std;
#define DEBUG
#define ll long long

int main() {
	char ch; ll a = 0, b = 0, c = 0, d = 0;
	vector<pair<ll, ll>> p1, p2;
	bool isExcceed1 = false, isExcceed2 = false;
	while((ch = getchar()) != 'E') {
		if(ch == 'W') a++, c++;
		if(ch == 'L') b++, d++;
		if(a >= 10 && b >= 10) isExcceed1 = true;
		if(isExcceed1 && llabs(a - b) >= 2) {
			pair<ll,ll> np = make_pair(a, b);
			p1.push_back(np);
			a = 0, b = 0;
			isExcceed1 = false;
		}
		if(!isExcceed1 && a == 11) {
			pair<ll, ll> np = make_pair(a, b);
			p1.push_back(np);
			a = 0; b = 0;
		}
		if(!isExcceed1 && b == 11) {
			pair<ll, ll> np = make_pair(a, b);
			p1.push_back(np);
			a = 0, b = 0;
		}
		if(c >= 20 && d >= 20) isExcceed2 = true;
		if(isExcceed2 && llabs(c - d) >= 2) {
			pair<ll ,ll> mp = make_pair(c, d);
			p2.push_back(mp);
			c = 0, d = 0;
			isExcceed2 = false;
		}
		if(!isExcceed2 && c == 21) {
			pair<ll, ll> mp = make_pair(c, d);
			p2.push_back(mp);
			c = 0, d = 0;
		}
		if(!isExcceed2 && d == 21) {
			pair<ll, ll> mp = make_pair(c, d);
			p2.push_back(mp);
			c = 0, d = 0;
		}
	}
	pair<ll, ll> np = make_pair(a, b);
	pair<ll, ll> mp = make_pair(c, d);
	p1.push_back(np); p2.push_back(mp);
// Output
	for(pair<ll,ll> np : p1) {
		cout << np.first << ':' << np.second << endl;
	}
	cout << endl;
	for(pair<ll, ll> mp : p2) {
		cout << mp.first << ':' << mp.second << endl;
	}
// Ending
	system("pause");
	return 0;
}