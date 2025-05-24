#include<bits/stdc++.h>
#define ll long long
#define DEBUG

using namespace std;

ll N;
bool dfs(ll a, ll l) {
    if(a != N && l >= N) return false;
    else if(a == N) return true;
    else {
        dfs(a, l * 2);
        if(a == l) dfs(a + 1, l * 2);
        else dfs(a + l + 1, l * 2);
        return false;
    }
}

int main() {
    string s;
    cin >> N;
    ll l = s.length();
    for(int i = 1; i <= l; i++) {
        if(dfs(i, l)) {cout << s[i-1]; break;}
    }
    return 0;
}