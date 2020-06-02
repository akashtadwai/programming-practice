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
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
vector<bool> vis(100005, false),arr(100005,false);
vector<int> a[100005],gold(100005);
int cost=LONG_MAX;
void dfs(int u){
    vis[u]=true;
    cost=min(cost,gold[u]);
    for(auto i:a[u]){
        if(!vis[i]) dfs(i);
    }
}
void init() {
  int n,m,u,v;cin>>n>>m;
  fr(i,0,n) cin>>gold[i];
  while(m--){
      cin>>u>>v;
      --u,--v;
      arr[u] = true;
      arr[v] = true;
      a[u].pb(v);
      a[v].pb(u);
  }
    int ans=0;
  for(int u=0;u<n;u++){
      cost=LONG_MAX;
      if(!vis[u]){
        dfs(u);
        ans+=cost;
      }  
  }
  cout<<ans;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
