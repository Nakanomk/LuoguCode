#include<bits/stdc++.h>
using namespace std;
#define Ni 100003

int main() {
	long long N, K; cin >> N >> K;
	long long s = 0;
	vector<long long> stair(N + 1, 0);
	stair[0] = 0;
	for(int i = 1; i <= K; i++) {
		s += stair[i - 1];
		s %= Ni;
		stair[i] = s + 1;
		#ifdef DEBUG
		cout << s << endl;
		#endif
	}
	for(int i = K + 1; i <= N; i++) {
		s -= stair[i - K - 1];
		if(s < 0) s += Ni;
		s += stair[i - 1];
		s %= Ni;
		stair[i] = s;
		#ifdef DEBUG
		cout << s << endl;
		#endif
	}
	#ifdef DEBUG
	for(int i = 0; i <= N; i++) {
		cout << stair[i] << endl;
	}
	#endif
	cout << stair[N];
	system("pause");
	return 0;
}