#include<bits/stdc++.h>
using namespace std;

int main() {
	char ch;
	int count = 0;
	while((ch = getchar()) != '\n') {
		if(ch == ' ') continue;
		count++;
	}
	cout << count;
	return 0;
}