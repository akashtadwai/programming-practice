// https://atcoder.jp/contests/dp/tasks/dp_i

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
  double phead;
  vector<double> dp(n + 1); // dp[i] - probability that there are i heads so far
  dp[0]=1;
  for (int i = 0; i < n; i++) {
    cin >> phead;
    for (int j = i + 1; j >= 0; j--) {
      dp[j] = (j == 0 ? 0 : dp[j - 1] * phead) + dp[j] * (1 - phead);
    }
  }
 double ans = 0;
 for (int heads = 0; heads <= n; ++heads) {
   int tails = n - heads;
   if (heads > tails) {
     ans += dp[heads];
   }
 }
 printf("%.9lf\n", ans);
}
int32_t main() {
  IOS;
  init();
  return 0;
}
