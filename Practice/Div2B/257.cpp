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
void init() {
    int x,y,n,f[7],ans;
  cin >> x >> y >> n;
  f[1] = x;
  f[2] = y;
  for (int i = 3; i < 7; i++)
    f[i] = f[i - 1] - f[i - 2];
  f[0] = f[6];
  ans = f[n % 6];
  while (ans < 0)
    ans += mod;
  cout << ans % mod;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
