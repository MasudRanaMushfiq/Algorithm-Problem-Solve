#include<bits/stdc++.h>
using namespace std;
//typedef ...
#define int long long
#define ln        '\n'
#define en          '\n';
void solve() {
    int n;cin>>n;
    vector<int>a(n),b(n),c(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    for(int i=0;i<n;i++)c[i]= a[i]-b[i];
    sort(c.begin(),c.end());
    int tar = c[0];
    if(tar>=0){
        cout<<"YES\n";
        return;
    }
    for(int i=1;i<n;i++){
        if(abs(tar)>c[i]){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";

}

int32_t main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t=1;
    cin >> t;
    while(t--)
        solve();
    return 0;
}