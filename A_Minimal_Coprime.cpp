#include<bits/stdc++.h>
using namespace std;

void solve(){
    int l,r;
        cin>>l>>r;
    if(l==1 && r==1){
        cout<<"1"<<endl;
        return;
    }
    cout<<r-l<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
        solve();
}
