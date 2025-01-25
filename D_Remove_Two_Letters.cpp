#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
        cin>>n;
    string s;
        cin>>s;
    int c = 0;
    for(int i = 0; i < n-2; i++){
        if(s[i] == s[i+2])
            c++;
    }
    cout<<(n-c-1)<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
        cin>>t;
    while(t--)
        solve();
    return 0;
    
}