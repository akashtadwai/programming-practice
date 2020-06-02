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
#define cerr if(false) cerr
#define debug(x) cerr << "\n" << (#x) << "=" << (x) << endl
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);

void solve(string s) {
  int n = s.size();
  int i;
  bool ok=false;
  for(i=0;i<n;i++){
      if(s[i]=='0'){
          ok=true;
          break;
      } 
  }
  if(ok)    cerr<<i+1<<endl;
  else cerr<<i<<endl;
}
void init() {
    int n;cin>>n;
  string s;cin>>s;
  solve(s);
}
int32_t main() {
  IOS;
  init();
  return 0;
}
