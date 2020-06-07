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
  /* vector<vector<int> >dp(n+1,vector<int>(x+1)); // dp[i]- no of ways from
 first i coins with sum i dp[0][0]=1; for(int i=1;i<=n;i++){ for(int
 j=0;j<=x;j++){ dp[i][j]=dp[i-1][j]; if(j-a[i-1]>=0)
 (dp[i][j]+=dp[i][j-a[i-1]])%=mod;
       }
   }
 cout<<dp[n][x]<<endl;*/
  vector<int> dp(x + 1); // dp[i] no of ways with coins exactly i
  for (int i = 0; i < n; i++) {
    for (int j = a[i]; j <= x; j++) { // we are iterating left to right coz we need to update the values of dp[j] every time 
      dp[j] += dp[j - a[i]]; // For more info see @qqibro's answer , https://stackoverflow.com/questions/27880842/space-optimized-solution-for-coin-change
    }
  }
  cout << dp[x] << endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
