#include<bits/stdc++.h>
using namespace std;
int main() {
    long long a, b, p, t = 1;
    cin >> a >> b >> p;
	int ap = a, bp = b;
    while(b) {
        if(b & 1) {
            t = a * t % p;
        }
		a = a * a % p;
        b >>= 1;
    }
    cout << ap << "^" << bp << " " << "mod" << " " << p << "=" << t % p;
	system("pause");
    return 0;
}