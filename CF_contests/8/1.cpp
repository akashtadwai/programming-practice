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
#define vvi vector<vector<int>>
#define vp vector<ipair>
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
void solve(int n, vi p, vi c) {
  bool ok = true;
  if (n == 1) {
    if (p[0] < c[0]) {
      cout << "NO" << endl;
      return;
    } else {
      cout << "YES" << endl;
      return;
    }
  }
  fr(i, 0, n - 1) {
    if ((p[i] < c[i]) || (p[i + 1]-p[i] < c[i+1]-c[i]) || (c[i + 1] < c[i])) {
      ok = false;
      break;
    }
  }
  if (ok==true)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}
void init() {
  int T;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;
    vi p(n), c(n);
    fr(i, 0, n) cin >> p[i] >> c[i];
    solve(n, p, c);
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
