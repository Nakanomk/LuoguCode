#include<bits/stdc++.h>
#define DEBUG
using namespace std;
int s = 0, a[5] = {0};
void dfs(int start, int l, int k, int n) {
	if(n < k) return;
	if(n == k) {s++; return;}
	if(l == k) {s++; return;}
	for(int i = start; i <= n / (k - l + 1); i++) {
		n -= i;
		dfs(i,l+1,k,n);
		n += i;
	}
	return;
}

int main() {
	int n,k;
	cin >> n >> k;
	dfs(1,1,k,n);
	cout << s;
	#ifdef DEBUG
	system("pause");
	#endif
	return 0;
}