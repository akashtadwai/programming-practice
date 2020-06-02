#include <bits/stdc++.h>
using namespace std;
typedef std::pair<int, int> ipair;
#define int long long
#define pb push_back
#define ff first
#define INF INT_MAX
#define ss second
#define rep(i, a) for (int i = 0; i < a; i++)
#define FOR(i, j, a) for (int i = j; i < a; i++)
#define cnt_ones(x) __builtin_popcount(x)
#define all(x) x.begin(), x.end()
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
const int N = 101000;
int n, u, v, lab[N];
vector<ipair> e[N];
void init() {
    cin>>n;
    FOR(i,1,n){
        cin>>u>>v;
        e[u].pb(mp(v,i));
        e[v].pb(mp(u,i));
    }
    FOR(i,1,n) lab[i]=-1;
    FOR(u,1,n+1){
        if(e[u].size()>=3){
          FOR(i, 1, n) lab[e[u][i].ss] = i;
          int k = 3;
          FOR(j,1,n)    if(lab[j]==-1) lab[j]=k++;
          FOR(j,1,n)    cout<<lab[j]<<endl;
          return;
        }
    }
    FOR(j, 1, n) printf("%d\n", j - 1);
}
int32_t main() {
  IOS;
  init();
  return 0;
}
