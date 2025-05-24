#include<bits/stdc++.h>
#define DEBUG
#define ll long long

using namespace std;

struct request {
	int val;
	int id;
};

vector<vector<request>> rqs;

bool isValid(int n) {
	int sum = 0;
	for(int i = 1; i <= rqs.size()-1; i++) {
		for(request rq: rqs[i]) {
			if(rq.id <= n)
				sum += rq.val;
			if(sum < 0)
				return false;
		}
	}
	return true;
}

int main() {
	int n, m; cin >> n >> m;
	request k, pk; k.val = pk.val = 0;
	for(int i = 0; i <= n; i++) {
		vector<request> v; rqs.push_back(v);
		if(i != 0) {
			cin >> k.val; k.id = 0;
		}
		request kt; kt.id = 0; kt.val = k.val - pk.val;
		rqs[i].push_back(kt);
		pk.val = k.val;
	}
	vector<request> vb; rqs.push_back(vb);
	for(int i = 1; i <= m; i++) {
		int d, s, t; cin >> d >> s >> t;
		k.id = i; pk.id = i;
		k.val = -d; pk.val = d;
		rqs[s].push_back(k); rqs[t+1].push_back(pk);
	}
	if(isValid(m)) {cout << 0; return 0;}
	int l = 1, r = m;
	while(l < r) {
		int mid = (l + r) / 2;
		if(isValid(mid)) l = mid + 1;
		else r = mid;
	}
	while(isValid(r)) r++;
	cout << -1 << endl << r;

	return 0;
}