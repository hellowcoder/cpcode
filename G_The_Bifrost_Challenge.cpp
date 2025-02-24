#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define MAXN 100005
#define LOG 20  // log2(100000) ~ 17, using 20 for safety

vector<pair<int, int>> adj[MAXN]; // {neighbor, weight}
int up[MAXN][LOG];   // Binary lifting table
int minEdge[MAXN][LOG]; // Minimum weight in path
int depth[MAXN];

void dfs(int node, int parent, int weight) {
    up[node][0] = parent;  // Direct parent
    minEdge[node][0] = weight; // Edge weight to parent
    for (int i = 1; i < LOG; i++) {
        if (up[node][i - 1] != -1) {
            up[node][i] = up[up[node][i - 1]][i - 1];
            minEdge[node][i] = min(minEdge[node][i - 1], minEdge[up[node][i - 1]][i - 1]);
        } else {
            up[node][i] = -1;
        }
    }
    
    for (auto &[neighbor, wt] : adj[node]) {
        if (neighbor != parent) {
            depth[neighbor] = depth[node] + 1;
            dfs(neighbor, node, wt);
        }
    }
}

int findLCA(int u, int v) {
    if (depth[u] < depth[v]) swap(u, v);

    int minWeight = INT_MAX;

    // Lift u to the same depth as v
    for (int i = LOG - 1; i >= 0; i--) {
        if (depth[u] - (1 << i) >= depth[v]) {
            minWeight = min(minWeight, minEdge[u][i]);
            u = up[u][i];
        }
    }
    if (u == v) return minWeight;

    // Move both u and v up until they meet
    for (int i = LOG - 1; i >= 0; i--) {
        if (up[u][i] != up[v][i]) {
            minWeight = min({minWeight, minEdge[u][i], minEdge[v][i]});
            u = up[u][i];
            v = up[v][i];
        }
    }

    return min({minWeight, minEdge[u][0], minEdge[v][0]});
}

void solve() {
    int n, q;
    cin >> n>>q;

    // Initialize
    for (int i = 1; i <= n; i++) {
        adj[i].clear();
        depth[i] = 0;
        for (int j = 0; j < LOG; j++) {
            up[i][j] = -1;
            minEdge[i][j] = INT_MAX;
        }
    }

    // Input tree edges
    for (int i = 1; i < n; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    // Preprocess LCA and min weight using DFS
    dfs(1, -1, INT_MAX);

    
    while (q--) {
        int u, v;
        cin >> u >> v;
        cout << findLCA(u, v) << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
