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
  int n;cin>>n;
  vi dp(n+1); // dp[i]- no of ways with sum i
  dp[0]=1;
  for(int i=1;i<=n;i++){
      for(int j=1;j<=6 and i-j>=0;j++){
         (dp[i]+=dp[i-j])%=mod;
      }
  }
  cout<<dp[n]<<endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
