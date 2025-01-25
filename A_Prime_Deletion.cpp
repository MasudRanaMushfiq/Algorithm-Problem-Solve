#include <bits/stdc++.h>
using namespace std;

#define mod 1e9+7
#define ll long long

void solve(){
    string s;
    cin >> s;

    ll x = -1, y = -1;

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '1') {
            x = i;
        } else if(s[i] == '3') {
            y = i;
        }
    }

    if( x < y) {
        cout << "13\n";
    } else {
        cout << "31\n";
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; 
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}