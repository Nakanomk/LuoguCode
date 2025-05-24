#include <bits/stdc++.h>
using namespace std;

int a[1001] = {0};
void dfs(int n, int x, int &count) {
	if(x == 1) return;
	if(n <= x / 2) {
		dfs(n+1, x, count);
		if(a[n] == 0) {
			int temp = count;
			dfs(1, n, count);
			a[n] = count - temp;
		}
		else {
			count += a[n];
		}
		count++;
	}
}
int main() {
	int n; 
	cin >> n;
	int count = 1;
	dfs(1, n, count);
	cout << count << endl;
	system("pause");
	return 0;
}