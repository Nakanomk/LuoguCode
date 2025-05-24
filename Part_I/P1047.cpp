#include<bits/stdc++.h>
using namespace std;
int main() {
	int l, m; // length of road, num of metro zones
	cin >> l >> m;
	int start, end, count = 0;
	vector<int> tree(l+1, 1);
	for(int i = 0; i < m; i++) {
		cin >> start >> end;
		for(int i = start; i <= end; i++) {
			tree[i] = 0;
		}
	}
	for(int i = 0; i <= l; i++)
		count += tree[i];
	cout << count;
	system("pause");
	return 0;
}