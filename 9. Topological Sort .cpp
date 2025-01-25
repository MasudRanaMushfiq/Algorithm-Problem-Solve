#include <iostream>
#include <vector>
#include <stack>

using namespace std;

// Function to perform DFS
bool dfs(int node, vector<vector<int>>& adj, vector<bool>& visited, vector<bool>& inStack, stack<int>& topoStack) {
    visited[node] = true;
    inStack[node] = true;

    for (int neighbor : adj[node]) {
        if (inStack[neighbor]) {
            return false; // Cycle detected
        }
        if (!visited[neighbor]) {
            if (!dfs(neighbor, adj, visited, inStack, topoStack)) {
                return false; // Propagate cycle detection
            }
        }
    }

    inStack[node] = false;
    topoStack.push(node);
    return true;
}

// Topological sort function
vector<int> topologicalSort(int n, vector<pair<int, int>>& edges) {
    vector<vector<int>> adj(n + 1);
    for (auto edge : edges) {
        adj[edge.first].push_back(edge.second);
    }

    vector<bool> visited(n + 1, false);
    vector<bool> inStack(n + 1, false);
    stack<int> topoStack;

    // Perform DFS for all nodes
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            if (!dfs(i, adj, visited, inStack, topoStack)) {
                return {}; // Return empty vector if a cycle exists
            }
        }
    }

    // Retrieve the topological order
    vector<int> result;
    while (!topoStack.empty()) {
        result.push_back(topoStack.top());
        topoStack.pop();
    }

    return result;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> edges(m);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        edges[i] = {a, b};
    }

    vector<int> result = topologicalSort(n, edges);

    if (result.empty()) {
        cout << "IMPOSSIBLE" << endl;
    } else {
        for (int course : result) {
            cout << course << " ";
        }
        cout << endl;
    }

    return 0;
}
