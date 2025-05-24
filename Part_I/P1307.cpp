#include<bits/stdc++.h>
using namespace std;
int main() {
	int N, M = 0;
	cin >> N;
	while(N) {
		M = 10 * M + N % 10;
		N /= 10;
	}
	cout << M;
	system("pause");
	return 0;
}