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
int n,m,d;cin>>n>>m>>d;
vi a(n*m);
fr(i,0,n*m) cin>>a[i];
int rm=a[0]%d;
fr(i,1,n*m){
    if(a[i]%d != rm)    {
        cout<<-1<<endl;
        return;
    }
}
sort(all(a));
// for(auto x:a)   cout<<x<<" ";
// cout<<endl;
int ans=0;
fr(i,0,n*m){
    ans+=abs(a[i]-a[n*m/2])/d;
}
cout<<ans<<endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
