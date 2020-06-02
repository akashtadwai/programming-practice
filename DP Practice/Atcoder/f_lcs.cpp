// https://atcoder.jp/contests/dp/tasks/dp_f

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

string trace(vector<vector<int>> &dp, string s, string t, int i, int j) {
  if (i == 0 or j == 0)
    return "";
  if (s[i - 1] == t[j - 1])
    return trace(dp, s, t, i - 1, j - 1) + s[i-1];
  if (dp[i][j - 1] > dp[i - 1][j])
    return trace(dp, s, t, i, j - 1);
  return trace(dp, s, t, i - 1, j);
}
void init() {
  string s, t;
  cin >> s >> t;
  int m = s.size(), n = t.size();
  vector<vector<int>> dp(m + 1, vector<int>(n + 1));
  for (int i = 0; i <= m; i++) { // dp[i][j]- length of lcs of s[:i] and t[:j]
    for (int j = 0; j <= n; j++) {
      if (i == 0 or j == 0)
        dp[i][j] = 0;
      else if (s[i - 1] == t[j - 1])
        dp[i][j] = dp[i - 1][j - 1] + 1;
      else
        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
    }
  }
//   cout << trace(dp, s, t, m, n) << endl;
  string ans = "";
  for (int i = m, j = n; (i > 0 && j > 0);) {
    if (s[i - 1] == t[j - 1])
      ans += s[i - 1], i--, j--;
    else if (dp[i][j - 1] > dp[i - 1][j])
      j--;
    else
      i--;
  }
  reverse(all(ans));
  cout << ans << endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
