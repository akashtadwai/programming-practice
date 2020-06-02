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
  int n,m; cin>>n>>m;
  vi a(m);
  fr(i,0,m) cin>>a[i];
  int sum = a[0];
  fr(i,1,m){
      if(a[i]<a[i-1]){
          sum+=n-a[i-1]+a[i];
      }
      else sum+=a[i]-a[i-1];
  }
  cout<<sum-1<<endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
