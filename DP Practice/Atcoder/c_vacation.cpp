// https://atcoder.jp/contests/dp/tasks/dp_c

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
  vector<vector<int>> arr(n + 1, vector<int>(3));
  for (int i = 0; i < n; i++)
    cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
  vector<vector<int>> dp(n + 1, vector<int>(3)); // dp[i][j] - Max happiness by upto i considering jth activity
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < 3; j++) {
      dp[i][j] = arr[i-1][j]+ max(dp[i - 1][(j + 1) % 3], dp[i - 1][(j + 2) % 3]);
    }
  }
  cout << max({dp[n][0], dp[n][1], dp[n][2]});
}
int32_t main() {
  IOS;
  init();
  return 0;
}
