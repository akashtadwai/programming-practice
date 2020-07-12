#include <bits/stdc++.h>
using namespace std;
typedef std::pair<int, int> ipair;
#define int long long
#define pb push_back
#define ff first
#define INF INT_MAX
#define ss second
#define fr(i, j, a) for (int i = j; i < a; i++)
#define cnt_ones(x) __builtin_popcount(x)
#define all(x) x.begin(), x.end()
#define sz size()
#define vi vector<int>
#define vvi vector<vector<int>>
#define vp vector<ipair>
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);

void init() {
  string s;
  cin >> s;
  int n = s.size();
  vector<int> vis(n), dis(n, 1e9);
  vector<vector<int>> adj(10);
  for (int i = 1; i < n; i++) {
    int val = s[i] - '0';
    adj[val].pb(i);
  }
  queue<int> q;
  dis[0] = 0;
  q.push(0);
  vis[0] = 1;
  while (!q.empty()) {
    int idx = q.front();
    q.pop();
    if (idx == n - 1)
      break;
    int val = s[idx] - '0';
    for (int v : adj[val]) {
      if (!vis[v]) {
        vis[v] = true;
        dis[v] = dis[idx] + 1;
        q.push(v);
      }
    }
    adj[val].clear();
    if (idx >= 1 and !vis[idx - 1]) {
      q.push(idx - 1);
      vis[idx - 1] = true;
      dis[idx - 1] = dis[idx] + 1;
    }
    if (idx < n - 1 and !vis[idx + 1]) {
      vis[idx + 1] = true;
      dis[idx + 1] = dis[idx] + 1;
      q.push(idx + 1);
    }
  }
  cout << dis[n - 1] << endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
