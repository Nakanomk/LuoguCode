//MergeSort Template
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll ans = 0;

void mergeSort(int upper, int lower, vector<int> &a, vector<int> &c) {
	if(upper == lower) return;
	int mid = (upper + lower) / 2, i = upper, j = mid+1, k = upper;
	mergeSort(upper,mid,a,c), mergeSort(mid+1, lower,a,c);
	while(i <= mid && j <= lower) {
		if(a[i] <= a[j]) {
			c[k++] = a[i++];
		}
		else {
			c[k++] = a[j++];
			ans += mid - i + 1;
		}
	}
	while(i <= mid) {
		c[k++] = a[i++];
	}
	while(j <= lower) {
		c[k++] = a[j++];
	}
	for(int l = upper; l <= lower; l++) {
		a[l] = c[l];
	}
}

int main() {
	int n; cin >> n;
	vector<int> a(n), c(n);
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	mergeSort(0, n-1, a, c);

	cout << ans;
	system("pause");
	return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int n, c, count = 0;
// 	cin >> n;
// 	multiset<int> data;
// 	for (int i = 0; i < n; i++)
// 	{
// 		cin >> c;
// 		data.insert(c);
// 		auto iter1 = upper_bound(data.begin(), data.end(), c);
// 		auto iter2 = data.begin();
// 		count += distance(iter2, iter1);
// 		cout << count << endl;
// 	}
// 	cout << count;
// 	system("pause");
// 	return 0;
// }