#include<bits/stdc++.h>
using namespace std;
#define sadik() ios::sync_with_stdio(false);cin.tie(0)
#define ll long long int
#define nl '\n'
#define MOD 1e9 + 7
bool cmp(pair<vector<int> , int> a , pair<vector<int> , int> b){
    return a.first < b.first;
}
void solve(){ 
    int n , m;
    cin >> n >> m;
    vector<pair<vector<int> , int>>a(n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int x;
            cin >> x;
            a[i].first.push_back(x);
            a[i].second = i + 1;
        }
        sort(a[i].first.begin() , a[i].first.end());
    }
    sort(a.begin() , a.end() , cmp);
    int c = 0;
    for(int j = 0; j < m; j++){
        for(int i = 0; i < n; i++){
            if(a[i].first[j] != c){
                cout << -1 << nl;
                return;
            }
            c++;
        }
    }
    for(auto i : a){
        cout << i.second << ' ';
    }
    cout << nl;
}
int main(){     
    sadik();
    int t = 1;
    cin >> t;
    while(t--)
        solve();
    return 0;
}