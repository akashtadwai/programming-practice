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
#define mp make_pair
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
void init() {
  int n,l,r,x;
  cin >> n>>l>>r>>x;
  vi c(n);
  int cnt=0;
  fr(i, 0, n) cin >> c[i];
  bool ok = false;
  for (int mask = 0; mask < (1 << n); mask++) {
    int sum = 0,mx=INT_MIN,mn=INT_MAX;
    for (int i = 0; i < n; i++) {
      if (mask & (1 << i)){
        sum += c[i];
        mx=max(mx,c[i]);
        mn=min(mn,c[i]);
      }
    }
    if (sum >= l and sum <= r and mx - mn >= x)
      cnt++;
  }
  cout<<cnt<<endl;
  
}
int32_t main() {
  IOS;
  init();
  return 0;
}
