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
  int a,b;cin>>a>>b;
  vector<vector<int> > dp(a+1,vector<int>(b+1)); // dp[w][h] = minimum number of cuts needed to cut a w x h piece into squares.
  for(int i=0;i<=a;i++){
      for(int j=0;j<=b;j++){
          if(i==j)  dp[i][j]=0;
          else{
              dp[i][j]=INT_MAX;
              if(i){
                  for(int k=1;k<i;k++)  dp[i][j]=min(dp[i][j],dp[i-k][j]+dp[k][j]+1);
              }
              if(j){
                  for(int k=1;k<j;k++)  dp[i][j]=min(dp[i][j],dp[i][j-k]+dp[i][k]+1);
              }
          }
      }
  }
  cout<<dp[a][b];
}
int32_t main() {
  IOS;
  init();
  return 0;
}
