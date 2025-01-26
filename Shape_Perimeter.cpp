#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl        '\n'
#define en          '\n';
void solve() {
    int n,m;
    cin>>n>>m;
    int ans=4*m*n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        if(i==0)continue;
        ans-=(2*m-(x+y))*2;
    }
    cout<<ans<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t=1;
    cin >> t;
    while(t--)
        solve();
    return 0;
}