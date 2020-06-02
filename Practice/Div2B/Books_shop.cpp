#include <bits/stdc++.h>
using namespace std;
typedef std::pair<int, int> ipair;
// #define int long long
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
  int n,x;cin>>n>>x;
  vi price(n),pages(n);
  fr(i,0,n) cin>>price[i];
  fr(i,0,n) cin>>pages[i];
  vector<vector<int> > dp(n+1,vector<int>(x+1));
  for(int i=1;i<=n;i++){
      for(int j=0;j<=x;j++){
          dp[i][j]=dp[i-1][j];
        if(j-price[i-1]>=0)  dp[i][j]=max(dp[i-1][j],dp[i-1][j-price[i-1]]+pages[i-1]);
      }
  }
  cout<<dp[n][x]<<endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
