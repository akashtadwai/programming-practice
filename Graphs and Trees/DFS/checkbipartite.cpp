#include <bits/stdc++.h>
using namespace std;
map<int, int> color;
vector<vector<int>> adj;
bool dfs(int u, int c) {
  if (color.count(u))
    return color[u] == c;
  color[u] = c;
  for (int v : adj[u]) {
    if (!dfs(v, -c))
      return false;
  }
  return true;
}

int main() {
  int N;
  cin >> N;
  adj.resize(N);
  int u, v;
  for (int i = 0; i < N; i++) {
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  for (int i = 0; i < N; i++) {
    if (!color.count(i) and !dfs(i, 1))
      return false;
  }
  return true;
}