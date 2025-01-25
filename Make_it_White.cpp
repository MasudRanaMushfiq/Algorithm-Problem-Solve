#include<bits/stdc++.h>
using namespace std;
    
void solve(){
    int n, x = 1, y = 1;
    cin>>n;
    string s; cin>>s;
    for(int i=0; i<n; i++){
        if(s[i]=='B'){
        x += i;
        break;
        }
    }

    for(int i=n-1; i>0; i--){
        if(s[i]=='B'){
        y += i;
        break;
        }
    }
    cout<<y-x+1<<endl;
    
}
    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
            
    int t;
    cin>>t;
    while(t--){
        solve();
    }
            
    return 0;
}