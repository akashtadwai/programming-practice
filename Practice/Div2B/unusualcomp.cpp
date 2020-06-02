#include <bits/stdc++.h>
using namespace std;
typedef std::pair<int, int> ipair;
#define int long long
#define pb push_back
#define ff first
#define INF INT_MAX
#define ss second
#define rep(i, a) for (int i = 0; i < a; i++)
#define FOR(i, j, a) for (int i = j; i < a; i++)
#define cnt_ones(x) __builtin_popcount(x)
#define all(x) x.begin(), x.end()
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
void init() {
  int T;
  cin >> T;
  for (int t = 0; t < T; t++) {
    int n, k;
    cin >> n;
    int sum = 0, r = 0, c = 0;
    vector<vector<int>> a(n);
    FOR(i, 0, n) {
      FOR(j, 0, n) {
        cin >> k;
        a[i].pb(k);
      }
    }
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
      sum += a[i][i];
    for (int i = 0; i < n; i++) {
      for (auto j : a[i])
        s.insert(j);
      if (s.size() != n)
        r++;
    }
    s.clear();
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++)
        s.insert(a[j][i]);
      if (s.size() != n)
        ++c;
      s.clear();
    }
    printf("Case #%lld: %lld %lld %lld \n", t + 1, sum, r, c);
    s.clear();
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
