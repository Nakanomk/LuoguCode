#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, num, p, cost[3], r = 2147483647;
	cin >> n;
	for(int i = 0; i < 3; i++) {
		cin >> num >> p;
		if(n % num) cost[i] = (n / num + 1) * p;
		else cost[i] = n / num * p;
		if(cost[i] < r) r = cost[i];
	}
	cout << r;
	system("pause");
	return 0;
}