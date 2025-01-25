#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int>a(n), ans;
    multiset<int>ms;

    for(int i = 0; i < n; i++){
        cin >> a[i];
        ms.insert(a[i]);
    }

    for(int i = 0; i < n; i++){
        if(a[i] == *ms.begin()){
            ans.push_back(a[i]);
            ms.erase(ms.find(a[i]));
        }
        else{
            ms.erase(ms.find(a[i]));
            ms.insert(a[i]+1);
            ans.push_back(a[i]+1);
        }
    }
    sort(ans.begin(), ans.end());
    for(auto c: ans)
        cout << c << " ";
    cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int test;
        cin>>test;
    while(test--)
        solve();
    
}