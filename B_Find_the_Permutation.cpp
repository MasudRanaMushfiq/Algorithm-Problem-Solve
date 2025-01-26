#include<bits/stdc++.h>
using namespace std;
//typedef ...
#define ll long long
#define endl        '\n'
#define en          '\n';
void solve() {
    int n;  cin>>n;
    vector<string>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    vector<int>ans(n,0);
    for(int i=0;i<n;i++){
        int c=0;
        for(int j=0;j<n;j++){
            if(a[i][j]=='1' && i>j)c++;
            else if(a[i][j]=='0' && j>i)c++;

        }
        ans[c] = i+1;
    }
    for(int x:ans)cout<<x<<" ";
    cout<<en

}

int32_t main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t=1;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
