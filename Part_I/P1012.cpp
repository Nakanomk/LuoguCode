#include<bits/stdc++.h>
using namespace std;
int chcmp(int c, int e, int d, int f,vector<string>& a) {
	if(e == 0 && a[c] == a[d]) return 0;
	if(a[c].length() == e) e -= 1;
	if(a[d].length() == f) f -= 1;
	if(a[c][e] > a[d][f]) return 0;
	if(a[c][e] < a[d][f]) return 1;
	return chcmp(c,e+1,d,f+1,a);
}

void swap(int a, int b, vector<string>& str) {
	string temp = str[b];
	str[b] = str[a];
	str[a] = temp;
}

int main() {
	int n; cin >> n;
	int temp = 0;
	vector<string> a(n);
	for(int i = 0; i < n; i++)
		cin >> a[i];
	for(int i = 0; i < n; i++) {
		for(int j = i+1; j < n; j++) {
			if(chcmp(i,0,j,0,a)) swap(i, j, a);
		}
	}
	for(int i = 0; i < n; i++) cout << a[i];
	system("pause");
	return 0;
}