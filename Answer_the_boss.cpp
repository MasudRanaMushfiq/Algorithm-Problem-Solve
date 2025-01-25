#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n+1);
    vector<int> deg(n+1);

    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        adj[v].push_back(u);
        deg[u]++;
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    for(int i = 0; i < n; i++){
        if(deg[i] == 0){
            q.push({1, i});
        }
    }

    while(!q.empty()){
        auto temp = q.top();
        q.pop();
        int node = temp.second;
        for(auto c: adj[node]){
            deg[c]--;
            if(deg[c] == 0){
                q.push({temp.first + 1, c});
            }
        }
        cout << temp.first << ' ' << node << '\n';
    }
    return;
}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int test = 1;
    cin >> test;
    for(int t = 1; t <= test; t++){
        cout << "Scenario #" << t << ":\n";
        solve();
    }
}
