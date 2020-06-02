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
int T;cin>>T;
while(T--){
  string s, t;
  cin >> s >> t;
  set<char>p;
  bool ok=false;
  for(auto x:s) p.insert(x);
  for(auto x:t) {
    if (p.count(x)){
        cout<<"YES"<<"\n";
        ok=true;
        break;
    }
  }
  if(!ok)   cout<<"NO"<<endl;
}
}

int32_t main() {
  IOS;
  init();
  return 0;
}
