#include <bits/stdc++.h>
using namespace std;
typedef std::pair<int, int> ipair;
#define int long long
#define pb push_back
#define ff first
#define INF INT_MAX
#define ss second
#define rep(i, a) for (int i = 0; i < a; i++)
#define FOR(i, j,a) for (int i = j; i < a; i++)
#define cnt_ones(x) __builtin_popcount(x)
#define all(x) x.begin(), x.end()
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
vector<int> a[100001];
int cnt[2];
void dfs(int node, int pnode,int color){
   cnt[color]++;
   for(auto i:a[node]){
       if(i!=pnode){
           dfs(i,node,!color);
       }
   }
}
void init() {
  int n,u,v;
  cin>>n;
  FOR(i,1,n){
      cin>>u>>v;
      a[u].pb(v);
      a[v].pb(u);
  }
  dfs(1,0,0);
  cout<<cnt[0]*cnt[1]-n+1;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
