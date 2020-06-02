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
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
vector<int> parent(100005),sz(100005);
int find_set(int x){
if(parent[x]==x)   return x;
else return find_set(parent[x]);
}
void make_set(int v) {
  parent[v] = v;
  sz[v] = 1;
}

void union_sets(int a, int b) {
  a = find_set(a);
  b = find_set(b);
  if (a == b) {
    return;
  }
  if (a != b) {
    if (sz[a] < sz[b]){
        parent[a]=parent[b];
        sz[b]+=sz[a];
    }
    else{
        parent[b]=parent[a];
        sz[a]+=sz[b];
    }
  }
}
void init() {
int T;cin>>T;
while(T--){
int n,m,u,v;
cin>>n>>m;
fr(i,1,n+1)   make_set(i);
for(int i=0;i<m;i++){
    cin>>u>>v;
    union_sets(u,v);
} int ans=1;
fr(i,1,n+1)
     ans*=sz[i]%mod;
set<int>st(parent.begin()+1,parent.begin()+n+1);
cout<<st.size()<<" "<<ans<<endl;
parent.clear();
sz.clear();
}
}
int32_t main() {
  IOS;
  init();
  return 0;
}
