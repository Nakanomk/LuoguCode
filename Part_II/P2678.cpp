#include<bits/stdc++.h>
using namespace std;
//#define DEBUG

int L, N, M;

inline int read() {
	int x = 0, s = 1;
	char ch;
	while(!isdigit(ch = getchar())) {
		if(ch == '-') s = -s;
	}
	while(isdigit(ch)) {
		x = 10 * x + ch - '0';
		ch = getchar();
	}

	return x * s;
}

bool isValid(int x, vector<int> &p) {
	int temp = 0, removeSum = 0;
	for(int i = 1; i <= N + 1; i++) {
		#ifdef DEBUG
		printf("x = %3d, distance = %3d, temp = %3d, rmSum = %3d, p[i] = %3d, p[i - 1 - temp] = %3d, M = %3d\n", x, p[i] - p[i - 1 - temp] , temp, removeSum, p[i], p[i - 1 - temp], M);
		#endif
		if(p[i] - p[i-1- temp] < x) {
			temp++;
			removeSum++;
		}
		else {
			temp = 0;
		}
		if(removeSum > M) return false;
	}
	return true;
}

int main() {
	L = read(), N = read(), M = read();
	vector<int> p(N + 2,0);
	p[0] = 0;
	p[N+1] = L;
	for(int i = 1; i <= N; i++) {
		p[i] = read();
	}
	int l = 1, r = L;
	while(l < r) {
		int mid = (l + r) >> 1;
		if(isValid(mid, p)) l = mid + 1;
		else r = mid - 1;
	}
	while(!isValid(l, p)) {
		l--;
	}
	cout << l;

	system("pause");
	return 0;
}
// #include<bits/stdc++.h>
// using namespace std;

// int L, N, M;
// int n = 0, l = 0, d[50001] = {0};

// inline void read(int * t) {
// 	int x = 0, s = 1; char ch;
// 	while(!isdigit(ch = getchar())) {
// 		if(ch == '-') s = -s;
// 	}
// 	while(isdigit(ch)) {
// 		x = 10 * x + ch - '0';
// 		ch = getchar();
// 	}
// 	*t = x * s;
// 	return;
// }

// int main() {
// 	read(&L), read(&N), read(&M);
// 	for(int i = 0; i < N; i++) {
// 		read(&n); d[i] = n - l;
// 		l = n;
// 	}
	

// }