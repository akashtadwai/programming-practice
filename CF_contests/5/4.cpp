#include <bits/stdc++.h>
using namespace std;
typedef std::pair<int, int> ipair;
#define int long long
#define pb push_back
#define ff first
#define INF INT_MAX
#define ss second
#define rep(i, a) for (int i = 0; i < a; i++)
#define FOR(i, j, a) for (int i = j; i <= a; i++)
#define cnt_ones(x) __builtin_popcount(x)
#define all(x) x.begin(), x.end()
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
    vector<int>a(n),c(n);
    vector<bool>b(n);
    unordered_set<int>uset;
    rep(i,n) cin>>a[i];
    b[0]=0;
    for(int i=1;i<n;i++){
        if(a[i]!=a[i-1])    b[i]=!(b[i-1]);
        else b[i]=(b[i-1]);
    }
    for(int i=0;i<n;i++)    c[i]=b[i]+1;
    if(a[0]!=a[n-1] and c[0]==c[n-1])
        c[n-1]=b[0]^b[n-2]+1;
    // if(c[n-1]==c[n-2] and a[n-1]!=a[n-2])   c[n-1]=3;
    for(int i=0;i<n;i++)   uset.insert(c[i]);
    cout<<uset.size()<<endl;
    for(auto i: c)  cout<<i<<" ";
    cout<<endl; 
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}