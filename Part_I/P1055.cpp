#include <bits/stdc++.h>
using namespace std;

int main() {
	long long count = 0, code = 0, ver = 0;
	string ISBN;
	char ch;
	while((ch = getchar()), count != 10) {
		ISBN += ch;
		if(ch == '-') continue;
		count++;
		if(count != 10) code += (ch - '0') * count;
		else {
			ver = ch - '0';
			if(ch == 'X') ver = 10;
		}
		#ifdef DEBUG
		cout << "This turn:" << code << " " << ver << endl;
		#endif
	}
	code %= 11;
	#ifdef DEBUG
	cout << code << " " << ver << endl;
	#endif
	if(ver == code) cout << "Right";
	else {
		if(code == 10) ISBN[12] = 'X';
		else ISBN[12] = (code + '0');
		cout << ISBN;
	}
	
	system("pause");
	return 0;
}