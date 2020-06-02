//https://codeforces.com/contest/1203/problem/B
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
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);

void init() {
  int q;cin>>q;
  while(q--){
      int n; cin>>n;
      n*=4;
      vi a(n);
      fr(i,0,n) cin>>a[i];
      sort(all(a));
      bool ok=true;
      int ans=a[0]*a[n-1];
      fr(i,0,n/2 +1){
          if(a[i]*a[n-i-1]!= ans ) {
              ok=false;
              break;
          }
      }
      if(ok)    cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
