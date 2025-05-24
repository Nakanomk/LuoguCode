#include<bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	vector<string> s(2*n);
	vector<string> s2(2*n);
	for(int i = 0; i < 2*n - 1; i++) {
		char ch;
		while((ch = getchar()) != ',') {
			s[i] += ch;
		}
		s[i] += '\0';
	}
	cin >> s[2*n-1];
	auto w1 = s.begin(), w2 = s.begin() + n;
	for(int i = 0; i < 2*n;) {
		char ch; ch = getchar();
		if(ch == 'L') {
			s2[i] = *w1;
			w1++;
			i++;
		}
		else if(ch == 'R') {
			s2[i] = *w2;
			w2++;
			i++;
		}
	}
	int k = 2 * n - 1;
	while(k >= 0) {
		cout << s2[k] << endl;
		k -= 2;
	}
	system("pause");
	return 0;
}