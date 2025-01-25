#include<bits/stdc++.h>
using namespace std;
//typedef ...
#define int long long
#define endl        '\n'
#define en          '\n';
void solve() {
    int n,l,r;  cin>>n>>l>>r;
    vector<int>lft,rt;
    for(int i=0;i<n;i++){
        int x;  cin>>x;
        if(i<r)lft.push_back(x);
        if(i>=l-1)rt.push_back(x);
    }
    sort(lft.begin(),lft.end());
    sort(rt.begin(),rt.end());
    int s1=0,s2=0;
    for(int i=0;i<(r-l)+1;i++){
        s1 +=lft[i];
        s2 +=rt[i];
    }
    cout<<min(s1,s2)<<en 
    // cout<<"hello";
}

int32_t main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t=1;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
 