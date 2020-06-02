// https://atcoder.jp/contests/dp/tasks/dp_o

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
  vector<vector<int>> match(n, vector<int>(n));
  vector<int>dp(1<<n);
  dp[0]=1;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      cin >> match[i][j];
    }
  }
  for(int mask=0;mask<((1<<n)-1);mask++){
    int men = __builtin_popcount(mask);
    for(int women=0;women<n;women++){
      if(match[men][women] and !(mask & (1<<women))){
        int m2 = mask^(1<<women);
        (dp[m2]+=dp[mask])%=mod;
      }
    }
  }
  cout<<dp[(1<<n) - 1]<<endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
