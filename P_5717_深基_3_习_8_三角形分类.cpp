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
	int a = read(), b = read(), c = read();
	vector<int> s = {a,b,c};
	sort(s.begin(), s.end());
	a = s[0], b = s[1], c = s[2];
	if(a + b <= c) {cout << "Not triangle"; return 0;}
	if(a*a + b*b == c*c) cout << "Right triangle" << endl;
	else if(a*a + b*b > c*c) cout << "Acute triangle" << endl;
	else cout << "Obtuse triangle" << endl;
	if(a == b) cout << "Isosceles triangle" << endl;
	if(a == b && b == c) cout << "Equilateral triangle";

	return 0;
}