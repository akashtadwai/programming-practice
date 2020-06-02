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
  int T;
  cin >> T;
  while (T--) {
      int n;cin>>n;
      vector<int>ans;
      int cnt=1;
      while(n){
          int rem=n%10;
          if(rem!=0)    ans.pb((n%10)*cnt);
          cnt*=10;
          n/=10;
      }
      cout<<ans.size()<<endl;
      for(auto x:ans)   cout<<x<<" ";
      cout<<endl;
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
