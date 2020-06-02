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
int n;cin>>n;
int maxi=n*1000;
vi a(n);
fr(i,0,n)    cin>>a[i];
vector<vector<int>> dp(n + 1, vector<int>(maxi + 1)); // dp[i][j]- true if it is possible to make j using the first i coins, false otherwise.
dp[0][0]=1;
for(int i=1;i<=n;i++){
    for(int j=0;j<=maxi;j++){
        dp[i][j]=dp[i-1][j];
        int left=j-a[i-1];
        if(left>=0 and dp[i-1][left]) dp[i][j]=1;
    }
}
vi res;
for(int i=1;i<=maxi;i++) if(dp[n][i])    res.pb(i);
cout<<res.size()<<endl;
for(auto x:res) cout<<x<<" ";
}
int32_t main() {
  IOS;
  init();
  return 0;
}
