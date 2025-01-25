#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7
void solve(){ 
    vector<int>a(5);
    cin >> a[0] >> a[1] >> a[3] >> a[4];
    int mx = -1;
    for(int i = -1000; i <= 1000; i++){
        a[2] = i;
        int c = 0;
        for(int j = 0; j < 3; j++){
            if(a[j+2] == (a[j+1] + a[j])){
                c++;
            }
        }
        mx = max(mx , c);
    }
    cout << mx << nl;
}
int main(){     
    sadik();
    int t = 1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}