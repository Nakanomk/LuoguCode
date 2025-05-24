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
	int T;
    cin >> T;
    if (T == 1) {
        cout << "I love Luogu!";
    } else if (T == 2) {
        cout << 2 + 4 << " " << 10 - 2 - 4;
    } else if (T == 3) {
		cout << 14/4 << endl << 14- 14%4 << endl << 14%4 << endl;
    } else if (T == 4) {
		cout << 166.666667;
    } else if (T == 5) {
		cout << (260+220) / (12+20);
    } else if (T == 6) {
		cout << sqrt(6*6+9*9);
    } else if (T == 7) {
		cout << 110 << endl << 90 << endl << 0;
    } else if (T == 8) {
		cout << 2 * 3.141593 * 5 << endl << 3.141593 * 5 * 5 << endl << 4 * 3.141593 * 5 * 5 * 5 / 3;
    } else if (T == 9) {
		cout << 22;
    } else if (T == 10) {
		cout << 9;
    } else if (T == 11) {
		cout << 33.33333;
    } else if (T == 12) {
		cout << 'M' - 'A' + 1 << endl;
		printf("%c", 'A' + 17);
    } else if (T == 13) {
		cout << 16;
    } else if (T == 14) {
		cout << 50;
    }

	return 0;
}