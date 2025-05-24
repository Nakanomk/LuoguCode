#include<bits/stdc++.h>
using namespace std;
int read() {
	int x = 0;
	char ch = 0;
	while(!isdigit(ch = getchar()));
	while(isdigit(ch)) {
		x = 10 * x + ch - '0';
		ch = getchar();
	}
	return x;
}

int main() {
	int n, m, k, temp; cin >> n >> m >> k;
	int test[1000][1000] = {0};
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			temp = read();
			test[temp - 1][j] = 1;
		}
	}
	for(int i = 0; i < k; i++) {
		int count = 0;
		for(int j = 0; j < m; j++) {
			if(test[i][j]) count++;
		}
		printf("%d ", count);
	}

	system("pause");
	return 0;
}