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
  vi a(n);
  fr(i, 0, n) cin >> a[i];
  int sum = accumulate(all(a), (int)0);
  vector<vector<int>> dp(n, vector<int>(n)); // dp[l][r] = difference𝑠𝑐𝑜𝑟𝑒1−𝑠𝑐𝑜𝑟𝑒2if considering the game played only on interval [l, r].
  for (int left = n - 1; left >= 0; left--) {
    for (int right = left; right < n; right++) {
      if (left == right)
        dp[left][right] = a[left];
      else
        dp[left][right] =
            max(a[left] - dp[left + 1][right], a[right] - dp[left][right - 1]);
    }
  }
  cout << (sum + dp[0][n - 1]) / 2 << endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
