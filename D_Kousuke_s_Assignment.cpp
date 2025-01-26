#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7
void solve(){
    int n;
    cin >> n;
    ll psum = 0;
    int res = 0;
    set<ll>st;
    st.insert(0);
    for(int i = 0 ; i < n ; i++){
        ll x;
        cin >> x;
        psum += x;
        st.insert(0);
        if(st.find(psum) != st.end()){
            res++;
            psum = 0;
            st.clear();
            st.insert(0);
        }
        st.insert(psum);
    }
    cout << res <<nl;
}
int main(){     
    sadik();
    int t = 1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
