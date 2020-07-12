// https://atcoder.jp/contests/dp/tasks/dp_a

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
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
void init() {
  int n;
  cin >> n;
  vector<int> h(n), dp(n);
  fr(i, 0, n) cin >> h[i];
  /*dp[0]=0;
  dp[1]=abs(h[1]-h[0]);
  fr(i,2,n) dp[i]=min(dp[i-1]+abs(h[i]-h[i-1]),dp[i-2]+abs(h[i-2]-h[i]));
  cout<<dp[n-1]<<endl;*/
  for (int i = 0; i < n; i++) { // dp[j] - min total cost incurred to reach step j
    for (int j : {i + 1, i + 2}) {
      if (j < n)
        dp[j] = min(dp[j], dp[i] + abs(h[i] - h[j]));
    }
  }
  cout << dp[n - 1];
}
int32_t main() {
  IOS;
  init();
  return 0;
}
