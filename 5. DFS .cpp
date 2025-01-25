#include<bits/stdc++.h>
using  namespace  std;

vector<int>adj[1002];
bool visited[1003];

void DFS(int node){
    visited[node]= true;
    cout<<node<<" -> ";

    for(int i=0; i<adj[node].size(); i++){
        if(visited[adj[node][i]]==false){
            DFS(adj[node][i]);
        }
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    while(m--){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    DFS(1);
}
