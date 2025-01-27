#include<bits/stdc++.h>
using namespace std;

void solve(){ 
    int n;
        cin>>n;
    vector<int> sub(n);
    
    for(int i = 0; i < n; i++)
        cin >> sub[i];
    
    for(int i = 1; i < n; i++){
        if(sub[i-1] > sub[i]){
            cout<<"NO"<<endl;
            return;
        }else{
            int x;
            x = min(sub[i-1],sub[i]);
            sub[i-1] -= x;
            sub[i] -= x;
        }
    }cout<<"YES"<<endl;

}

int main(){     
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
g
    int t;
    cin>>t;
    while(t--)
        solve();
    
}
