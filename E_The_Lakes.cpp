#include<bits/stdc++.h>
#define int long long
using namespace std;

vector<pair<int, int>>dir = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

vector<vector<int>>v;
int sum = 0, n, m;

void dfs(int i, int j){

    for(int p = 0; p < 4; p++){
        int nx = j + dir[p].first;
        int ny = i + dir[p].second;
        if(nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
        if(v[ny][nx] == 0) continue;
        sum += v[ny][nx];
        v[ny][nx] = 0;
        dfs(ny, nx);
    }
}

void solve(){
    cin >> n >> m;
    v = vector<vector<int>>(n, vector<int>(m));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> v[i][j];
        }
    }

    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            sum = 0;
            if(v[i][j] > 0){
                sum = v[i][j];
                v[i][j] = 0;
                dfs(i, j);
                ans = max(ans, sum);
            }
        }
    }
    cout << ans << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int test = 1;
    cin>>test;
    for(int t = 1; t <= test; t++){
        solve();
    }
}