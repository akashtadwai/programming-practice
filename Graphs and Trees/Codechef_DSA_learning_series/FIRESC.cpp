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
vector<int> par, size;
void make_set(int v) {
  par[v] = v;
  size[v] = 1;
}
int find_set(int u) {
  if (par[u] == u)
    return u;
  return par[u] = find_set(par[u]);
}
void union_sets(int a, int b) {
  a = find_set(a);
  b = find_set(b);
  if (a != b) {
    if (size[a] < size[b])
      swap(a, b);
    par[b] = a;
    size[a] += size[b];
  }
}
void init() {
  int T;
  cin >> T;
  while (T--) {
    int m, n;
    cin >> m >> n;
    par.resize(m), size.resize(m);
    for (int i = 0; i < m; i++)
      make_set(i);
    for (int i = 0; i < n; i++) {
      int u, v;
      cin >> u >> v;
      --u, --v;
      if (find_set(u) != find_set(v))
        union_sets(u, v);
    }
    set<int> parents;
    int ans = 1;
    for (int i = 0; i < m; i++) {
      if (!parents.count(find_set(i))) {
        parents.insert(find_set(i));
        ans = (ans * (size[find_set(i)] % mod) * 1LL) % mod;
      }
    }
    cout << parents.size() << " " << ans << endl;
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
