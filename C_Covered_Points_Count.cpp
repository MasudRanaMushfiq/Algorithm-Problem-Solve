#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;

    map<int,int>mp;
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        mp[a]++;
        mp[b+1]--;
    }

    int l = 0, r = 0;

    vector<int>ans(n+1, 0);
    for(auto u: mp) {
        ans[r] += u.first - l;
        l = u.first;
        r += u.second;
    }

    for(int i = 1; i <= n; i++) {
        cout << ans[i] << " ";
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}