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
	for(int i = 2; i <= sqrt(a); i++) {
		if(a % i == 0) return false;
	}
	return true;
}

bool isPalindrome(int n) {
	int a = 0, b = n;
	while(n != 0) {
		a = 10 * a + n % 10;
		n /= 10;
	}
	if(a == b) return true;
	return false;
}

int main(void) {
	int a, b; cin >> a >> b;
	if(a%2 == 0) a++; b = (b > 9989900) ? 9989900 : b;
	for(int i = a; i <=b; i += 2) {
		if(isPalindrome(i) && isPrime(i)) printf("%d\n", i);
		if(i / 1000 != 0 && i / 10000 == 0) i = 10001;
		else if(i / 100000 != 0 && i / 1000000 == 0) i = 1000001;
	}
	return 0;
}