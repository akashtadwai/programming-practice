// https://codeforces.com/problemset/problem/580/C

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
vector<int> g[(int)(1e5)];
vector<int> cat;
int m, ans = 0;
void dfs(int u, int par, int cnt) {
  if (cnt > m)
    return;
  int ok = 1; // if ok is 1 then this path is feasible
  for (int v : g[u]) {
    if (v == par)
      continue;
    ok = 0;
    dfs(v, u, cnt * cat[v] + cat[v]);
  }
  ans += ok;
}
void init() {
  int n;
  cin >> n >> m;
  cat.resize(n);
  for (int &i : cat)
    cin >> i;
  int u, v;
  for (int i = 0; i < n - 1; i++) {
    cin >> u >> v;
    --u, --v;
    g[u].pb(v);
    g[v].pb(u);
  }
  dfs(0, -1, cat[0]);
  cout << ans << endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
