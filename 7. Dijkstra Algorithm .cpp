#include <bits/stdc++.h>
using namespace std;

const long long INF = LLONG_MAX; // Use long long for larger weights
const int MAX_NODES = 100005; // Up to 10^5 nodes
long long n, m; // Use long long for nodes and edges

void dijkstra(long long source, long long target, vector<pair<long long, long long>> graph[], vector<long long>& dist, vector<long long>& pred) {
    dist.assign(n + 1, INF); 
    pred.assign(n + 1, -1);
    dist[source] = 0;

    priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>>> pq;
    pq.push({0, source});

    while (!pq.empty()) {
        long long u = pq.top().second;
        long long d = pq.top().first;
        pq.pop();

        if (u == target) break; // Stop if we reached the target
        if (d > dist[u]) continue;

        for (long long i = 0; i < graph[u].size(); i++) {
            long long v = graph[u][i].first;       // Get the neighbor node
            long long weight = graph[u][i].second; // Get the weight of the edge

            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pred[v] = u;
                pq.push({dist[v], v});
            }
        }
    }
}

void printPath(long long source, long long target, vector<long long>& pred) {
    stack<long long> path;
    long long current = target;

    while (current != -1) {
        path.push(current);
        current = pred[current];
    }

    if (path.top() != source) {
        cout << -1 << endl; // No path found
        return;
    }

    while (!path.empty()) {
        cout << path.top() << " ";
        path.pop();
    }
    cout << endl;
}

void solve() {
    cin >> n >> m;
    vector<pair<long long, long long>> graph[MAX_NODES]; // Adjacency list for 1-based indexing

    for (long long i = 0; i < m; i++) {
        long long x, y, z;
        cin >> x >> y >> z;
        graph[x].push_back({y, z});
        graph[y].push_back({x, z});
    }

    vector<long long> dist, pred;
    long long source = 1, target = n;

    dijkstra(source, target, graph, dist, pred);
    printPath(source, target, pred);
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}
