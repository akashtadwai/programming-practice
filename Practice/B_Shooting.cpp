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
#define vi vector<int>
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);

void init() {
  int n;
  cin >> n;
  vector<pair<int, int>> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i].ff;
    a[i].ss = i+1;
  }
  sort(all(a));
  reverse(all(a));
  vi res;
  int cnt=0,ans=0;
  for(int i=0;i<n;i++){
      ans+= cnt*a[i].ff + 1;
      cnt++;
      res.pb(a[i].ss);
  }
  cout<<ans<<endl;
  for(auto x:res)   cout<<x<<" ";
}
int32_t main() {
  IOS;
  init();
  return 0;
}
