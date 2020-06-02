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
  int n,k,m;
  cin>>n>>m;
  vector<vector<int> >a(m);
  fr(i,0,m) {
      fr(j,0,n){
          cin>>k;
          a[i].pb(k);
      }
  }
  vi index(n);
  fr(i,0,m){
      int max_i = max_element(a[i].begin(),a[i].end()) - a[i].begin();
      index[max_i]++;
  }
  cout<<max_element(all(index)) - index.begin()+1<<endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
