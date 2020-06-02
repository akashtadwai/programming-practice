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
  int n;
  cin >> n;
  int sum = (n * (n + 1)) / 2;
  if (sum % 2)
    cout << 0 << endl;
  else {
    sum /= 2;
    vector<vector<int>> dp(n, vector<int>(sum + 1)); // dp[i][x] = number of ways to make sum x using subsets of the numbers 1..i .
    dp[0][0] = 1;
    for (int i = 1; i < n; i++) {
      for (int j = 0; j <= sum; j++) {
        dp[i][j] = dp[i - 1][j];
        if (j - i >= 0)
          (dp[i][j] += dp[i - 1][j - i]) %= mod;
      }
    }
    cout << dp[n - 1][sum];
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
