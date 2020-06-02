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
  int n, m, x, y;
  cin >> n >> m >> x >> y;
  vi a(n), b(m);
  fr(i, 0, n) cin >> a[i];
  fr(i, 0, m) cin >> b[i];
  int i=0,j=0;
  vector<ipair>res;
  while(i<n and j<m){
      if(b[j]>=a[i]-x and b[j]<=a[i]+y ){
          res.pb({i+1,j+1});
          i++,j++;
          continue;
      }
      else if(b[j]>a[i]+y){
        i++;
        continue;
      }
      else if(b[j]<a[i]-x) {
          j++;
          continue;
      }
  }
  cout<<res.size()<<endl;
  for(auto x:res)   cout<<x.ff<<" "<<x.ss<<endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
