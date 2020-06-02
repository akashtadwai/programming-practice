// https://atcoder.jp/contests/dp/tasks/dp_b

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
  int n,K;
  cin >> n>>K;
  vector<int> h(n), dp(n,INT_MAX);
  fr(i, 0, n) cin >> h[i];
  dp[0] = 0;
  /*for(int i=0;i<n;i++){
    for(int k=K;k>=0;k--){
      if(i-k>=0) dp[i]=min(dp[i],dp[i-k]+abs(h[i]-h[i-k]));
    }
  }*/
  for (int i = 0; i < n; ++i) { // dp[j] - min total cost incurred to reach step j
    for (int j = i + 1; j <= i + K; ++j) {
      if (j < n) {
        dp[j] = min(dp[j], dp[i] + abs(h[i] - h[j]));
      }
    }
  }
  cout<<dp[n-1]<<endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
