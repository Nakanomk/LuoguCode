#include <bits/stdc++.h>
#define DEBUG
#define f(i,x,y) for(int (i) = (x), __ = (y); i < __; i++)
using namespace std;
int counter = 0;

void pop(string &a) {
	int k = a.length();
	if(k != 0) a.pop_back();
}

void push(char input, string &a) {
	a += input;
}

int main() {
	vector<string> AC(10000), Rjun(10000);
	string a;
	int i = 0, j = 0;
	while(getline(cin, a), a != "EOF") {
		for(char ch:a) {
			if(ch == '<') pop(AC[i]);
			else {push(ch,AC[i]);}
		}
		i++;
	}
	while (getline(cin, a), a != "EOF")
	{
		for(char ch:a) {
			if(ch == '<') pop(Rjun[j]);
			else {push(ch,Rjun[j]);}
		}
		j++;
	}
	f(p,0,i) {
		int end1 = AC[p].length();
		int end2 = Rjun[p].length();
		int end = (end1 < end2) ? end1 : end2;
		f(index, 0, end) {
			if(AC[p][index] == Rjun[p][index]) counter++;
		}
	}

	double T;
	cin >> T;
	cout << (int)((double)counter * 60 / T + 0.5);
	#ifdef DEBUG
	system("pause");
	#endif
	return 0;
}
/* #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ll count = 0;
	string AC, A, a;
	while(getline(cin,a), a != "EOF")
		AC += a + '1';
	AC += '0';
	while(getline(cin,a), a != "EOF")
		A += a + '1';
	A+= '0';
	int i = 0, j = 0;
	while(AC[i] != '0' && A[j] != '0') {
		while(AC[i] == '1' && A[j] != '1') j++;
		while(A[j] == '1' && AC[i] != '1') i++;
		while(AC[i+1] == '<') i++;
		while(A[j+1] == '<') j++;
		if(AC[i]!='1'&&A[j]!='1'&&AC[i] == A[j]) {
			#ifdef DEBUG
			cout << "here";
			#endif
			count++;
		}
		#ifdef DEBUG
		cout << AC[i] << " " << A[j] << endl;
		#endif
		i++, j++;
	}
	double T; cin >> T;
	cout << (int)((double)count / T * 60 + 0.5);
#ifdef DEBUG
	cout << endl << AC << endl << A << endl;
#endif
	system("pause");
	return 0;
} */