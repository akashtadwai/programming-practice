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
  int t;cin>>t;
  while(t--){
      int k,n;cin>>n;
      vi pos(n);
      for(int i=0;i<n;i++)  cin>>k,pos[--k]=i;
      int l=n,r=0;
      string ans;
      fr(i,0,n){
          l=min(l,pos[i]);
          r=max(r,pos[i]);
          if(r-l == i)  ans+='1';
          else ans+='0';
      }
      cout<<ans<<endl;
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
