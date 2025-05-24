#include<bits/stdc++.h>
#define DEBUG
#define ll long long
#define VT vector<int>
#define VVT vector<vector<int>>

using namespace std;

ll read() {
	ll x = 0, w = 1;char ch;
	while(!isdigit(ch = getchar())) if(ch == '-') w = -w;
	while(isdigit(ch)) {x = 10 * x + ch - '0'; ch = getchar();}
	return x * w;
}

bool isPrime(int a) {
	if(a <= 1) return false;
	else if(a <= 3) return true;
	else {
		for(int i = 2; i <= sqrt(a); i++)
			if(a%i == 0) return false;
	}
	return true;
}

int main(void) {
	int L; cin >> L;
	int cnt = 0, cnt1 = 0, i = 1;
	while(cnt1 <= L) {
		if(isPrime(i)) {
			cnt1 += i;
			if(cnt1 <= L) {
				cnt++;
				cout << i << endl;
			}
			else {
				break;
			}
		}
		i++;
	}
	cout << cnt;

	return 0;
}