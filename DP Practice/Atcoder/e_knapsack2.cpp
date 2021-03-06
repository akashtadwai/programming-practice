// https://atcoder.jp/contests/dp/tasks/dp_e

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
  int n, w;
  cin >> n >> w;
  int maxval=0;
  vector<int> weight(n), val(n);
  for (int i = 0; i < n; i++)
    cin >> weight[i] >> val[i];
  for (auto x : val)
    maxval += x;
 vector<int> dp(maxval + 1,1e9+1); // dp[j] min total weight that can be obtained with value exactly j
 dp[0]=0;
  for (int i = 0; i < n; i++) {
    for (int j = maxval; j >= val[i]; j--)
      dp[j] = min(dp[j], weight[i] + dp[j - val[i]]);
  }
//   for(auto x:dp)    cout<<x<<" ";
  int res = 0;
  for (int i = 0; i <= maxval; i++) {
    if (dp[i] <= w)
      res = max(res, i);
  }
  cout << res << endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
