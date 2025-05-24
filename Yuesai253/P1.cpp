#include<bits/stdc++.h>
using namespace std;
int main() {
	int thisyear = 365-(31+28+28);
	for(int i = 2026; i < 46*46; i++) {
		if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) thisyear += 366;
		else thisyear += 365;
	}
	cout << thisyear;
	system("pause");
	return 0;
}