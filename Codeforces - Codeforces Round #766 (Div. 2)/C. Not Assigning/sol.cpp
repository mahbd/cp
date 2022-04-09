#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_input                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(0)
#define tc()          \
    ll test_case;     \
    cin >> test_case; \
    for (ll tcv = 0; tcv < test_case; tcv++)

class Graph {
   public:
    map<int, bool> visited;
    map<int, list<int> > adj;

    void addEdge(int v, int w);
    void dfs(int v);
    void Graph::bfs(int v);
};

void Graph::addEdge(int v, int w) {
    adj[v].push_back(w);
}

void Graph::dfs(int v) {
    visited[v] = true;

    for (auto i : adj[v]) {
        if (!visited[i]) {
            dfs(i);
        }
    }
}

void Graph::bfs(int v) {
    queue<int> q;
    q.push(v);
    while (!q.empty()) {
        int element = q.front();
        cout << element << " ";
        q.pop();
        for (auto i : adj[element]) {
            q.push(i);
        }
    }
    cout << endl;
}

int main() {
    fast_input;
    tc() {
        Graph g;
        int edges;
        cin >> edges;
        for (int i = 0; i < edges; i++) {
            int v, w;
            cin >> v >> w;
            g.addEdge(v, w);
        }
    }
}
