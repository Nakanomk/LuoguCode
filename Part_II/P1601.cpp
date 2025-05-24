#include<bits/stdc++.h>
using namespace std;
int main() {
	string a,b;
	cin >> a >> b;
	int carry = 0;
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	int t = (a.size() > b.size()) ? a.size() : b.size();
	string c;
	auto iter1 = a.begin();
	auto iter2 = b.begin();
	int i = 0, temp = 0;
	while(iter1 != a.end() || iter2 != b.end()) {
		temp = 0;
		if(iter1 != a.end()) {
			temp += *iter1 - '0';
			iter1++;
		}
		if(iter2 != b.end()) {
			temp += *iter2 - '0';
			iter2++;
		}
		c += (temp + carry) % 10 + '0';
		if(temp + carry >= 10) {
			carry = 1;
		}
		else carry = 0;
		i++;
	}
	if(carry == 1) c += '1';
	reverse(c.begin(),c.end());
	cout << c;

	system("pause");
	return 0;
}