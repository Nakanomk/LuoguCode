#include<bits/stdc++.h>
using namespace std;
#define ll long long
// #define DEBUG

void calculate(string &a, string &b) {
	// a > b, clean extra digits
	// calculate
	int carrier = 1, j = a.length() - b.length();
	for(int i = 0; i <= b.length(); i++) {
		if(a[j+i] >= b[i]) a[j+i] = a[j+i] - b[i] + '0';
		else if(a[j+i-1] == '0') {
			while(a[j+i-carrier] == '0') carrier++;
			a[j+i-carrier]--;
			carrier--;
			while(carrier > 0) {
				a[j+i-carrier] = '9';
				carrier--;
			}
			carrier = 1;
			a[j+i] += '9' + 1 - b[i];
		}
		else {
			a[j+i-1]--;
			a[j+i] += '9' + 1 - b[i];
		}
	}
	int status = 0;
	#ifdef DEBUG
	cout << a.length() << endl;
	#endif
	for(int i = 0; i < a.length(); i++) {
		if(a[i] != '0') status = 1;
		if(status) putchar(a[i]);
	}
	if(!status) putchar('0');
}

int main() {
	string a, b;
	cin >> a >> b;
	if(a.length() > b.length() || (a.length() == b.length() && a >= b)) calculate(a,b);
	else {
		putchar('-');
		calculate(b,a);
	}
	system("pause");
	return 0;
}