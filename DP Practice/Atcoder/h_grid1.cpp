// https://atcoder.jp/contests/dp/tasks/dp_h

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
void init() {
  int h, w;
  cin >> h >> w;
  string grid;
  vector<vector<int>> dp(h, vector<int>(w));
  dp[0][0] = 1;
  for (int i = 0; i < h; i++) { // dp[i][j]- no.of ways possible for reaching (i,j)
    cin >> grid;
    for (int j = 0; j < w; j++) {
      if (grid[j] == '.') {
        (dp[i][j] += (i > 0 ? dp[i - 1][j] : 0) + (j > 0 ? dp[i][j - 1] : 0)) %=mod;
      } else
        dp[i][j] = 0;
    }
  }
  cout << dp[h-1][w-1];
}
int32_t main() {
  IOS;
  init();
  return 0;
}
