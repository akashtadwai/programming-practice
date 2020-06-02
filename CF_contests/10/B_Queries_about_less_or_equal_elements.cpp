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
#define vi vector<int>
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);

void init() {
  int n, m;
  cin >> n >> m;
  vi a(n);
  vector<pair<int, int>> b(m);
  fr(i, 0, n) cin >> a[i];
  fr(i, 0, m) {
    cin >> b[i].ff;
    b[i].ss = i;
  }
  sort(all(a));
  int j = 0;
  vi res(m);
  for (int i = 0; i < m; i++)
    res[b[i].ss] = upper_bound(all(a), b[i].ff) - a.begin();

  for (auto x : res)
    cout << x << " ";
}

int32_t main() {
  IOS;
  init();
  return 0;
}
