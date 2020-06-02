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
  int T;
  cin >> T;
  while (T--) {
    int n, k;
    cin >> n >> k;
    vi peaks(n, 0);
    vi a(n);
    fr(i, 0, n) cin >> a[i];
    fr(i, 1, n - 1) if (a[i] > a[i - 1] and a[i] > a[i + 1]) peaks[i] = 1;
    vi pre(n);
    fr(i,1,n) pre[i]+=pre[i-1]+peaks[i]; 
    int mx=INT_MIN,ans;
  fr(i,0,n){
    if(i+k-1==n)  break;
    if(pre[i+k-2]-pre[i]>mx){
      mx=pre[i+k-2]-pre[i];
      ans=i;
    }
  }
  cout<<mx+1<<" "<<ans+1<<endl;
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
