#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <ll>;
using ii = pair <ll, ll>;
using vii = vector <ii>;

void tc () {
    ll n;
    cin >> n;
    vll ve(n);
    for (ll &i : ve) cin >> i;
    ll j = 0;
    for (ll i = 1; i < n; i++) {
        if (ve[i-1] > ve[i]) j = i;
    }
    if (j == 0) { // all done
        cout << "YES\n";
        return;
    }
    auto fop = [&](ll i) {
        ll minN = min(ve[i], ve[i+1]);
        ve[i] -= minN;
        ve[i+1] -= minN;
    };
    for (ll i = 0; i < j; i++) {
        fop(i);
    }
    cout << (is_sorted(ve.begin(), ve.end()) ? "YES" : "NO") << '\n';
}

int main () {
    cin.tie(nullptr) -> sync_with_stdio(false);
    ll T; cin >> T; while (T--) { tc(); }
    return 0;
}