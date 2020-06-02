// https://atcoder.jp/contests/dp/tasks/dp_d

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
  vector<int> weight(n), val(n);
  for (int i = 0; i < n; i++)
    cin >> weight[i] >> val[i];
  /*vector<vector<int> > dp(n+1,vector<int>(w+1));// dp[i][j] -- Max value of items that can be obtained with first i items with weight exactly j
  dp[0][0]=0;
  for(int i=1;i<=n;i++){
      for(int j=0;j<=w;j++){
          dp[i][j]=dp[i-1][j];
          int left = j- weight[i-1];
          if(left>=0)    dp[i][j]= max(dp[i][j],dp[i-1][left]+val[i-1]);
      }
  }
  cout<<dp[n][w]<<endl;*/
  vector<int> dp(w + 1); // dp[j] max value that can be obtained with weight exactly j
  for (int i = 0; i < n; i++) {
    for (int j = w; j >= weight[i]; j--)
      dp[j] = max(dp[j], val[i] + dp[j - weight[i]]);
  }
  int res = INT_MIN;
  for (auto x : dp)
    res = max(res, x);
  cout << res << endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
