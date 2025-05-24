#include<bits/stdc++.h>
using namespace std;
#define DEBUG
int n, k;
multiset<int> primes;

bool isPrime(int x) {
	if(x == 2) {
		#ifdef DEBUG
		cout << "2!" << endl;
		#endif
		return true;
	}
	for(int i = 2; i <= sqrt(x); i++) {
		if(x % i == 0) return false;
	}
	return true;
}

void dfs(int x, int y, int count, int s, vector<int> &nums) {
	#ifdef DEBUG
	cout << x << " " << y << " " << count << " " << s+nums[x] << endl;
	#endif
	if(count == k - 1) {
		if(isPrime(s + nums[x])) 
			{primes.insert(s + nums[x]);}
		return;		
	}
	for(int i = x + 1; i < n; i++) {
		dfs(i, x, count + 1, s + nums[x], nums);
	}
}
int main() {
	cin >> n >> k;
	vector<int> nums(n+1, 0);
	for(int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	for(int i = 0; i < n; i++)
		dfs(i, 0, 0, 0, nums);

	cout << primes.size();
	system("pause");
	return 0;
}