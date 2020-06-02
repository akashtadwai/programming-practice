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
int n;cin>>n;
vi x(n+1),y(n+1),cnt(n+1);
vi ans1(n),ans2(n);
fr(i,1,n+1)   cin>>x[i]>>y[i];
fr(i,1,n+1)   cnt[x[i]]++;
for(auto x:cnt) cout<<x<<" ";
cout<<endl;
fr(i,0,n){
    ans1[i]=n-1;
    ans1[i]+=cnt[y[i]];
    ans2[i]=2*(n-1) - ans1[i];
}

fr(i,0,n)
    cout<<ans1[i]<<" "<<ans2[i]<<endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
