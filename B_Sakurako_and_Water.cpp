#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;  
    cin>>n;
    int arr[n][n];
    int c = 0, x = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            cin>>arr[i][j];
    }
    
    for(int j=0; j<=n-1; j++){
        x = 0;
        for(int i=0; i<n-j; i++)
            x = min(x, arr[i][i+j]);
        c = c + abs(x);
    }

    for(int j=1; j<=n-1; j++){
        x = 0;
        for(int i=0; i<n-j; i++)
            x = min(x, arr[i+j][i]);
        c = c + abs(x);
    }
    
    cout<<c<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;  
        cin>>t;
    while(t--)
        solve();
    
}
