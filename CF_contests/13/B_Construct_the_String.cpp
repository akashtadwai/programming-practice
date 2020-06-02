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
  int T;cin>>T;
  while(T--){
      int n,a,b;cin>>n>>a>>b;
      string ans="";
      while(n){
          for(int i=0;i<b and n>0;i++)  ans+=(char)('a'+i),n--;
          for(int i=0;i<a%b and n>0;i++)    ans+=(char)('a'+i),n--;
      }
      cout<<ans<<endl;
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
