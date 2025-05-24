#include<bits/stdc++.h>
using namespace std;

long long l, k, x[100010] = {0};

int read() {
	int x = 0, s = 1;
	char ch;
	while(!isdigit(ch = getchar())) {
		if(ch == '-') {
			s = -s;
		}
	}
	while(isdigit(ch)) {
		x = 10 * x + ch - '0';
		ch = getchar();
	}
	return x * s;
}

int isValid(long long mid) {
	if(mid == 0) return 1;
	long long stacker = 0, score = 0;
	for(int i = 0; i < l; i++) {
		stacker += x[i];
		if(stacker < 0) stacker = 0;
		if(stacker >= mid) {
			score++;
			stacker = 0;
			if(score > k) return 1;
		}
	}
	if(score < k) return -1;
	return 0;
}

int main() {
	cin >> l >> k;
	long long le = 1, r = 1;
	long long ans1 = -1, ans2 = -1;
	for(int i = 0; i < l; i++) {
		x[i] = read();
		if(x[i] > 0) r += x[i];
	}
	r = (r + k - 1) / k;
	long long tempr = r;
	while(le < r) {
		long long mid = ((le + r) >> 1);
		if(isValid(mid) == 1) {
			le = mid + 1;
		}
		else if(isValid(mid) == 0) {
			r = mid - 1;
			ans1 = mid;
		}
		else r = mid - 1;
	}
	if(ans1 == -1) {
		cout << -1;
		return 0;
	}
	if(isValid(ans1 - 1) == 0) ans1--;
	cout << ans1 << " ";

	r = tempr;
	le = 1;
	while(le < r) {
		long long mid = ((le + r) >> 1);
		if(isValid(mid) == 1) {
			le = mid + 1;
		}
		else if(isValid(mid) == 0) {
			le = mid + 1;
			ans2 = mid;
		}
		else r = mid - 1;
	}
	if(isValid(ans2 + 1) == 0) ans2++;
	cout << ans2;

	system("pause");
	return 0;
}