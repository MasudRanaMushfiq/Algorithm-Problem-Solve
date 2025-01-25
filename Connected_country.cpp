#include<bits/stdc++.h>

using namespace std;

void dfs(vector<vector<int>>&adj,vector<int>&visited,int v){
	visited[v] = 1;
	for(int i = 0; i < adj[v].size() ;++i){
		int u = adj[v][i];
		if(!visited[u]){
			dfs(adj,visited,u);
		}
	}
}



long dfs_util(vector<vector<int>>&adj){
	vector<int>visited(adj.size(),0);
	long connected = 0;
	for(int i = 0 ;i < adj.size() ;++i){
		if(!visited[i]){
			connected++;
			dfs(adj,visited,i);
		}
	}
	return connected;
}

int main(){
	long v,e;
	cin>>v>>e;
	vector<vector<int>>adj(v);
	for(int i = 0; i < e ;++i){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	long connected = dfs_util(adj);
	cout<<connected-1<<endl;

}