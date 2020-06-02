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
    int n, m;
    cin >> n >> m;
    string ans = "B";
    fr(j, 0, m-1) ans += "W";
    cout << ans << endl;
    fr(i, 1, n) {
      string row;
      fr(j, 0, m) row += "B";
      cout << row << endl;
  }
}
}
    int32_t main() {
      IOS;
      init();
      return 0;
    }
