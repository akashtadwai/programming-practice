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
void init() {
  int T;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;
    int val = 0;
    int mx = (int)-2e9;
    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      mx = max(mx, a);
      val = max(val, mx - a);
    }
    long long res = 0;
    cout<<val<<endl;
    while ((1LL << res) - 1 < val) {
      ++res;
    }
    // cout << res << '\n';
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
