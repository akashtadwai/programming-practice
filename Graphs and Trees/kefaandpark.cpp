#include <bits/stdc++.h>
using namespace std;
typedef std::pair<int, int> ipair;
#define int long long
#define pb push_back
#define ff first
#define INF INT_MAX
#define ss second
#define rep(i, a) for (int i = 0; i < a; i++)
#define FOR(i, j, a) for (int i = j; i <=a; i++)
#define cnt_ones(x) __builtin_popcount(x)
#define all(x) x.begin(), x.end()
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
vector<int> a[100001],cat(100001);
void dfs(int node, int pnode,vector<int> cnt) {
    cnt[node]=cnt[pnode];
  if(cat[node-1]==1)    cnt[node]++;
  for (auto i : a[node]) {
    if (i != pnode) {
      dfs(i, node,cnt);
    }
  }
}
void init() {
  int n, m,u, v;
  cin >> n>>m;
  rep(i,n)  cin>>cat[i];
  FOR(i, 1, n) {
    cin >> u >> v;
    a[u].pb(v);
    a[v].pb(u);
  }
  vector<int> cnt(n+1);
  int ans=0;
  dfs(1,0,cnt);
  for(int i=u+1;i<=n;i++){
      if(cnt[i]<=m and cat[i]==0){
          ans++;
      }
      else if(cat[i]==1 and cnt[i]<=m-1){
          ans++;
      }
  }
  cout<<ans<<endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
