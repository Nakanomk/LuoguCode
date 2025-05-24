#include<bits/stdc++.h>
using namespace std;

int read(void) {
	int x = 0, w = 1;
	char ch = 0;
	while(!isdigit(ch)) {
		if(ch == '-') w = -w;
		ch = getchar();
	}
	while(isdigit(ch)) {
		x = x * 10 + ch - '0';
		ch = getchar();
	}
	return x * w;
}

int main() {
	int n; cin >> n;
	vector<int> coef(n + 1);
	int time = n;
	for(int i = n; i >= 0; i--) {
		coef[i] = read();
		if(coef[i] == 0) continue;
		if(coef[i] < 0) {
			cout << '-';
			coef[i] = -coef[i];
		}
		else {
			if(i != n) cout << '+';
		}
		if(coef[i] != 1 || i == 0) cout << coef[i];
		if(i > 1) cout << "x^" << i;
		if(i == 1) cout << "x";
	}
	system("pause");
	return 0;
}