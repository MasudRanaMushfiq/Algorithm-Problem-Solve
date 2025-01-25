#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7
void solve(){ 
    int n , k;
    cin >> n >> k;
    map<int , int>mp;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        mp[x]++;
    }
    int ans = 0;
    for(auto &i : mp){
        if(mp.count(k - i.first)){
            int x = min(i.second , mp[k- i.first]);
            ans += x;
            i.second = x;
            mp[k- i.first] = x;
        }
    }
    cout << ans / 2 << nl;
}
int main(){     
    sadik();
    int t = 1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}