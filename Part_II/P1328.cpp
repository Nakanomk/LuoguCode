#include<bits/stdc++.h>
using namespace std;
#define DEBUG

int whoWin(int a, int b) {
	a++, b++;
	if(a == b) return 0;
	if(a < b) {
		if(a == 1) {
			if(b == 2 || b == 5) return 2;
			return 1;
		}
		if(a == 2) {
			if(b != 4) return 2;
			return 1;
		}
		if(a == 3) {
			if(b == 4) return 2;
			return 1;
		}
		return 1;
	}
	else {
		int result = whoWin(b - 1, a - 1);
		return (result == 1) ? 2 : 1;
	}
}

int main() {
	int N, Ta, Tb;
	int score[2] = {0};
	cin >> N >> Ta >> Tb;
	vector<int> a(Ta), b(Tb);
	for(int i = 0; i < Ta; i++) {
		cin >> a[i];
	}
	for(int i = 0; i < Tb; i++) {
		cin >> b[i];
	}
	for(int i = 0; i < N; i++) {
		int result = whoWin(a[i % Ta], b[i % Tb]);
		#ifdef DEBUG
		cout << a[i % Ta] + 1 << " " << b[i % Tb] + 1 << " " << result << " ";
		#endif
		if(result == 1) {
			score[0]++;
		}
		else if(result == 2) {
			score[1]++;
		}
		#ifdef DEBUG
		cout << score[0] << " " << score[1] << endl;
		#endif
	}
	cout << score[0] << " " << score[1] << endl;
	system("pause");
	return 0;
}