#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define MOD 1000000007
#define fastio ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define sz(x) ((ll)(x).size)
#define all(x)(x).begin(),(x).end()

void solve() 
{
     ll n,k;
     cin>>n>>k;
     map<ll,ll> mp;
     for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        mp[x]++;
     }
     vector<ll>v;
     for(auto it : mp){
        v.push_back(it.second);
     }
     sort(v.begin(),v.end());
     ll ans = v.size();
     for(int i=0;i<v.size();i++){
         k=k-v[i];
         if(k>=0) ans--;
         else break;
     }if(ans==0) ans = 1;
     cout<<ans<<endl;

}

int main() 
{
    fastio;
    int t; cin >> t;
    //t=1;
    while(t--)
    {
        solve();
    }  
    return 0;
}