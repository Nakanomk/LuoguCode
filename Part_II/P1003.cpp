#include<bits/stdc++.h>
using namespace std;
#define DEBUG
typedef struct {
	int a, b, lx, ly;
	int x, y;
} Carpet;

int main() {
	#ifdef DEBUG
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	#endif
	int n; cin >> n;
	int ca, cb, ans = -1; // Find target
	vector<Carpet> carpet(10000);
	for(int i = 0; i < n; i++) {
		cin >> carpet[i].a;
		cin >> carpet[i].b;
		cin >> carpet[i].lx;
		cin >> carpet[i].ly;
		carpet[i].x = carpet[i].a + carpet[i].lx - 1;
		carpet[i].y = carpet[i].b + carpet[i].ly - 1;
	}
	cin >> ca >> cb;
	for(int i = n-1; i >= 0; i--) {
		if (ca >= carpet[i].a && ca <= carpet[i].x && cb >= carpet[i].b && cb <= carpet[i].y)
			{ans = i + 1; break;}
	}
	cout << ans;
	system("pause");
	return 0;
}