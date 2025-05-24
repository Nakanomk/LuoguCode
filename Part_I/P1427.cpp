#include<bits/stdc++.h>
using namespace std;
void read() {
	int a; cin >> a;
	if(a != 0) read();
	else return;
	cout << a << " ";
}
int main() {
	read();
	return 0;
}