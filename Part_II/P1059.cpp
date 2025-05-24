#include<bits/stdc++.h>
using namespace std;
int main() {
	set<int> a;
	int N; cin >> N;
	for(int i = 0; i < N; i++) {
		int inp; cin >> inp;
		a.insert(inp);
	}
	cout << a.size() << endl;
	for(int num : a) {
		cout << num << " ";
	}
	system("pause");
	return 0;
}