#include <bits/stdc++.h>
using namespace std;
typedef std::pair<int, int> ipair;
#define int long long
#define pb push_back
#define ff first
#define INF INT_MAX
#define ss second
#define rep(i, a) for (int i = 0; i < a; i++)
#define fr(i,j,a) for (int i = j; i < a; i++)
#define cnt_ones(x) __builtin_popcount(x)
#define all(x) x.begin(), x.end()
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
void init() {
  int T;
  cin >> T;
  while (T--) {
      int n;
      cin>>n;
      vector<ipair>a(n);
      fr(i,0,n) cin>>a[i].ff>>a[i].ss;
      sort(a.begin(),a.end());
      pair<int,int>mx={0,0};
      string ans;
      bool ok=true;
      fr(i,0,n){
          int r=a[i].ff-mx.ff;
          int u=a[i].ss-mx.ss;
          if(r<0 or u<0){
              cout<<"NO"<<endl;
              ok=false;
              break;
          }
          ans+=string(r,'R');
          ans+=string(u,'U');
          mx=a[i];
      }
      if(ok)    cout<<"YES"<<endl<<ans<<endl;
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
