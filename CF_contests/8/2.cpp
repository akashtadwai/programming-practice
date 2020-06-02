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
void solve(int n,int x, vector<double> &a){
  int S = 0;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    S += a[i];
    if (S >= (i + 1) * 1ll * x)
      ans = i + 1;
  }
  cout << ans << endl;
}
void init() {
int T;cin>>T;
while(T--){
    int n,x;cin>>n>>x;
    vector<double> a(n);
    fr(i,0,n)   cin>>a[i];
    sort(all(a),greater<double>());
    solve(n,x,a);
}

}
int32_t main() {
  IOS;
  init();
  return 0;
}
