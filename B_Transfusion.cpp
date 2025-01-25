#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define int long long
const int N = 1e5;

void solve() {
    int n;
    cin >> n;

    vector<int>a(n);
    int sum1 = 0, sum2 = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];

        if(i&1) sum1+= a[i];
        else sum2 += a[i];
    }

    if(sum1%(n/2) != 0 or sum2%((n+1)/2) != 0) {
        cout << "NO\n";
        return;
    }

    if((sum1/(n/2) == sum2/((n+1)/2))) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
        cin>>t;
    while(t--)
        solve();
}
