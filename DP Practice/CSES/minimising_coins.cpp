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
  int n, x;
  cin >> n >> x;
  vi a(n);
  fr(i, 0, n) cin >> a[i];
  vi dp(x + 1, 1e9); // dp[i]- min no of coins with sum i
  dp[0] = 0;
  for (int i = 0; i <= x; i++)
    for (int j = 0; j < n; j++)
      if (i - a[j] >= 0)
        (dp[i] = min(dp[i], dp[i - a[j]] + 1)) %= mod;
  if (dp[x] == 1e9)
    cout << -1 << endl;
  else
    cout << dp[x] << endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
