#include<bits/stdc++.h>
using namespace std;


bool isPrime(int n) {
	if(n == 1) return false;
	if(n == 2) return true;
	int q = sqrt((float)n) + 0.5;
	int i;
	int status = 1;
	for(i = 2; i <= q; i++) {
		if(n % i == 0) {
			status = 0;
			break;
		}
	}
	#ifdef DEBUG
	cout << n << "Prime" << status << endl;
	#endif
	return status;
}

bool isMiu(int n) {
	for(int i = 2; i <= sqrt(n) + 0.5; i++) {
		if(n / (i * i) * i * i == n) return true;
	}
	#ifdef DEBUG
	cout << n << "Miu" << false << endl;
	#endif
	return false;
}

int main() {
	int n, m, temp = 2147483647, p = 0;
	cin >> n;
	for(int i = 2; i <= n - 2; i++) {
		if(isMiu(i) && isPrime(n-i)) {
			p++;
			if(abs(i - (n - i)) < temp) {
				temp = abs(i - (n - i));
			}
		}
	}
	cout << p << endl;
	if(temp != 2147483647) cout << temp;
	system("pause");
	return 0;
}