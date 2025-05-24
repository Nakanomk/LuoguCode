#include<bits/stdc++.h>
using namespace std;

int read() {
	int x = 0, s = 1;
	char ch = 0;
	while(!isdigit(ch = getchar()))
		if(ch == '-') s = -s;
	while(isdigit(ch)) {
		x = 10 * x + ch - '0';
		ch = getchar();
	}
	return x * s;
}

int main() {
    int T; cin >> T;
	set<int> a;
	for(int i = 0; i < T; i++) {
		a.clear();
		int n = read();
		for(int j = 0; j < n; j++) {
			int num; num = read();
			if(a.find(num) == a.end()) {
				a.insert(num);
				printf("%d ", num);
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}