#include <bits/stdc++.h>
using namespace std;

#define mod 1e9+7
#define ll long long

void solve(){
     int ban[3];
 
    for(int i=0; i<3; i++)
        cin >> ban[i];
 
    for(int i=0; i<5; i++){
        sort(ban, ban+3);
        ban[0]++;
    }
    cout<<ban[0]*ban[1]*ban[2]<<endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; 
        cin>>t;
    while(t--)
        solve();

    return 0;
}

