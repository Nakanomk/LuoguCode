#include<bits/stdc++.h>
#define DEBUG
#define ll long long

using namespace std;

ll read() {
	ll x = 0, w = 1;char ch;
	while(!isdigit(ch = getchar())) if(ch == '-') w = -w;
	while(isdigit(ch)) {x = 10 * x + ch - '0'; ch = getchar();}
	return x * w;
}

int main(void) {
	ll n = read();

	return 0;
}
// #include<bits/stdc++.h>
// #define DEBUG
// #define ll long long

// using namespace std;

// struct ore {
// 	ll w;
// 	ll v;
// 	bool operator> (const ore& other) const {
// 		return this->w > other.w;
// 	}
// };

// ll read() {
// 	ll x = 0, w = 1;char ch;
// 	while(!isdigit(ch = getchar())) if(ch == '-') w = -w;
// 	while(isdigit(ch)) {x = 10 * x + ch - '0'; ch = getchar();}
// 	return x * w;
// }

// void msort(vector<ore> a,int l, int r) {
// 	if(l == r) return;
// 	int mid = (l + r) / 2;
// 	msort(a, l, mid), msort(a, mid+1, r);
// 	int iter1 = 1;
// 	int iter2 = mid+1;
// 	int i = 1;
// 	vector<ore> b(r - l + 2);
// 	while(iter1 <= mid && iter2 <= r) {
// 		if(a[iter1] > a[iter2]) b[i++] = a[iter1++];
// 		else b[i++] = a[iter2++];
// 	}
// 	while(iter1 <= mid) {
// 		b[i++] = a[iter1++];
// 	}
// 	while(iter2 <= r) {
// 		b[i++] = a[iter2++];
// 	}
// 	for(int i = 1; i <= r-l+1; i++) {
// 		a[l-1+i] = b[i];
// 	}
// }

// int main(void) {
// 	ll n = read(), m = read(), s = read();
// 	vector<ore> o(n+10);
// 	for(int i = 1; i <= n; i++) {
// 		ore no; no.w = read(), no.v = read();
// 		o[i] = no;
// 	}
// 	vector<ore> core;
// 	ore x; core.push_back(x);
// 	for(int i = 0; i < m; i++) {
// 		ll l = read(), r = read();
// 		for(int j = l; j <= r; j++)
// 			core.push_back(o[j]);
// 	}
// 	msort(core, 1, n);
// 	vector<ore> qzh(n+10); qzh[0].v = 0; qzh[0].w = 0;
// 	ll diff = LLONG_MAX;
// 	for(int i = 1; i <= n; i++) {
// 		qzh[i].v = o[i].v + qzh[i-1].v;
// 		qzh[i].w = o[i].w;
// 		if(qzh[i].w == qzh[i-1].w) continue;
// 		if(diff > abs(qzh[i].v - s)) diff = abs(qzh[i].v - s);
// 		else {
// 			cout << diff;
// 			return 0;
// 		}
// 	}
// 	cout << diff;

// 	return 0;
// }