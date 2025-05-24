#include<bits/stdc++.h>
using namespace std;
#define DEBUG
#define ll long long

typedef struct character
{
	bool isClockwise;
	string name;
} chara;

ll read() {
	ll x = 0, w = 1;
	char ch;
	while(!isdigit(ch = getchar())) {
		if(ch == '-') w = -w;
	}
	while(isdigit(ch)) {
		x = 10 * x + ch - '0';
		ch = getchar();
	}
	return x * w;
}

int main() {
	ll n, m; n = read(), m = read();
	vector<chara> cSet;
	for(int i = 0; i < n; i++) {
		chara c; c.isClockwise = read();
		cin >> c.name;
		cSet.push_back(c);
	}
	ll nowId = 0;
	chara nowChara = cSet[0];
	for(int i = 0; i < m; i++) {
		bool isRight; isRight = read();
		bool isClockwise = (isRight == nowChara.isClockwise);
		ll move; move = read();
		if(isClockwise) move = -move;
		nowId += move; while(nowId < 0) nowId += n;
		nowId %= n;
		nowChara = cSet[nowId];
	}
	cout << nowChara.name;
	
	system("pause");
	return 0;
}