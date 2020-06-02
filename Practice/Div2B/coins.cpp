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
#define vi vector<int>
#define vvi vector<vector<int>>
#define vp vector<ipair>
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
int f(int n,vi &dp) {
  if (n == 0)
    return 0;
  if (dp[n] != 0)
    return dp[n];
  int temp = f(n / 2,dp) + f(n / 3,dp) + f(n / 4,dp);
  return dp[n] = max(n, temp);
}
void init() {
vector<int> dp(1000);
  int n;
    while(scanf("%lld",&n)==1) printf("%lld\n",f(n,dp));
}
int32_t main() {
  IOS;
  init();
  return 0;
}


