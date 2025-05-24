#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ll a, b, n; cin >> a >> b >> n;
	ll d = b - a;
	cout << n * a + (n - 1) * n / 2 * d;

	system("pause");
	return 0;
}