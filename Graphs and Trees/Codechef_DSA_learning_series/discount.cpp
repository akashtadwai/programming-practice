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
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
string s, t;
int n, m;
void dfs(int s, vector<bool> &vis, vector<vector<int>> &adj,
         vector<vector<int>> &dp) {
  vis[s] = true;
  for (auto v : adj[s]) {
    dp[s].pb(v);
    if (!vis[v])
      dfs(v, vis, adj, dp);
  }
}
void init() {
  int T;
  cin >> T;
  while (T--) {
    vector<vector<int>> dp(26);
    cin >> s >> t;
    n = s.size(), m = t.size();
    int p;
    cin >> p;
    vector<vector<int>> adj(26);
    for (int i = 0; i < p; i++) {
      string q;
      cin >> q;
      adj[q[0] - 'a'].pb(q[3] - 'a');
    }

    if (n != m) {
      cout << "NO" << endl;
      continue;
    }

    for (int i = 0; i < 26; i++) {
      vector<bool> vis(26, false);
      dfs(i, vis, adj, dp);
    }
    bool ok = false;
    for (int i = 0; i < n; i++) {
      if (s[i] != t[i]) {
        for (auto p : dp[s[i] - 'a']) {
          if (p == (int)(t[i] - 'a')) {
            ok = true;
            break;
          }
        }
        if (!ok) {
          break;
        }
      }
    }

    if (ok)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
