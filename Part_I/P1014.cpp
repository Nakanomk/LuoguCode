#include<bits/stdc++.h>
using namespace std;
int main() {
	int N;
	cin >> N;
	int a = 1, b = 1, s = 0;
	for(int i = 0; i < N; i++) {
		if(!i) {
			a = 1, b = 1;
			continue;
		}
		if(s == 0) {
			b++;
			s = 1;
			continue;
		}
		if(s == 1) {
			a++;
			b--;
			if(b == 1) s = 2;
			continue;
		}
		if(s == 2) {
			a++;
			s = 3;
			continue;
		}
		if(s == 3) {
			a--; b++;
			if(a == 1) s = 0;
		}
	}
	cout << a << '/' << b;
	system("pause");
	return 0;
}