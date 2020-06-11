#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj; // adjacency list representation
int n;                   // number of nodes
int s;                   // source vertex

queue<int> q;
vector<bool> vis(n);
vector<int> d(n), p(n);
void bfs() {
  q.push(s);
  vis[s] = true;
  p[s] = -1;
  while (!q.empty()) {
    int v = q.front();
    q.pop();
    for (int u : adj[v]) {
      if (!vis[u]) {
        vis[u] = true;
        q.push(u);
        d[u] = d[v] + 1;
        p[u] = v;
      }
    }
  }
  int u; // restoring path from source vertex u
  if (!vis[u]) {
    cout << "No path!";
  } else {
    vector<int> path;
    for (int v = u; v != -1; v = p[v])
      path.push_back(v);
    reverse(path.begin(), path.end());
    cout << "Path: ";
    for (int v : path)
      cout << v << " ";
  }
}
