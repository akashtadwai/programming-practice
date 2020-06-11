#include <bits/stdc++.h>
using namespace std;
#define MAXN (int)1e5
int n;
vector<int> g[MAXN];
bool vis[MAXN];
vector<int> comp;

void dfs(int u) {
  vis[u] = true;
  comp.push_back(u);
  for (int v : g[u]) {
    if (!vis[v])
      dfs(v);
  }
}

void find_comps() {
  int compno = 1;
  for (int i = 0; i < n; ++i)
    vis[i] = false;
  for (int i = 0; i < n; ++i)
    if (!vis[i]) {
      comp.clear();
      dfs(i);
      cout << "Component " << compno << " : ";
      for (auto x : comp)
        cout << x << " ";
      compno++;
      cout << endl;
    }
}