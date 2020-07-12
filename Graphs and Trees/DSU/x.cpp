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
vector<int> par, size, a;
void make_set(int v) {
  par[v] = v;
  size[v] = a[v];
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
  int n, q;
  cin >> n >> q;
  a.resize(n);
  par.resize(n);
  size.resize(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    make_set(i);
  }

  int l, r;
  int mx = *max_element(all(size));
  while (q--) {
    cin >> l >> r;
    --l, --r;
    union_sets(l, r);
    mx = max({mx, size[find_set(l)], size[find_set(r)]});
    cout << mx << endl;
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
