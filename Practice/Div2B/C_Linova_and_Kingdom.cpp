#include <bits/stdc++.h>
using namespace std;
typedef std::pair<int, int> ipair;
#define int long long
#define pb push_back
#define ff first
#define INF INT_MAX
#define ss second
#define rep(i, a) for (int i = 0; i < a; i++)
#define fr(i, j, a) for (int i = j; i < a; i++)
#define cnt_ones(x) __builtin_popcount(x)
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
vector<int> g[1000000];
vector<int> d(1000000);
vector<int> sz(1000000);
void dfs(int u, int v = -1) {
  for (auto x : g[u]) {
    if (x == v)
      continue;
    d[x] = d[u] + 1;
    dfs(x, u);
    sz[u] += sz[x] + 1;
  }
}
void init() {
  int n, k;
  cin >> n >> k;
  int u, v;
  fr(i, 0, n - 1) {
    cin >> u >> v;
    u--, v--;
    g[u].pb(v);
    g[v].pb(u);
  }
  dfs(0);
  vector<int> ve(n);
  fr(i, 0, n) ve[i] = d[i] - sz[i];
  sort(all(ve), greater<int>());
  int ans = 0;
  fr(i, 0, k) ans += ve[i];
  cout << ans << endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
