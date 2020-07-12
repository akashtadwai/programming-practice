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
#define endl "\n"
#define vi vector<int>
#define vvi vector<vector<int>>
#define vp vector<ipair>
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
void init() {
  int n, s, t;
  cin >> n >> s >> t;
  vi p(n);
  --s, --t;
  for (int i = 0; i < n; i++) {
    cin >> p[i];
    --p[i];
  }
  vector<int> vis(n);
  bool ok = true;
  int ans = 0;
  while (1) {
    if (s == t) {
      break;
    }
    if (vis[s]) {
      ok = false;
      break;
    } else {
      vis[s] = 1;
      s = p[s];
    }
    ans++;
  }
  ok ? cout << ans : cout << -1 << endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}