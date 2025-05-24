#include<bits/stdc++.h>
using namespace std;

class milker {
public:
	int p;
	int n;

	bool operator <(const milker &other) const {
		return this->p < other.p;
	}
} ;

int main() {
	int n, m; cin >> n >> m;
	int s = 0;
	vector<milker> t(m);
	for(int i = 0; i < m; i++) {
		cin >> t[i].p >> t[i].n;
	}
	sort(t.begin(), t.end());
	for(int i = 0; i < m; i++) {
		if(t[i].n <= n) {
			n -= t[i].n;
			s += t[i].n * t[i].p;
		}
		else {
			s += t[i].p * n;
			n = 0;
		}
		if(n == 0) break;
	}

	cout << s;
	#ifdef DEBUG
	system("pause");
	#endif
	return 0;
}