//https://codeforces.com/contest/1350/problem/B
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
  vi a(1e6),ans(1e6,1);
void solve(vi a, int n) {
    for(int i=0;i<n;i++){
        for(int j=2*i;j<n;j+=i){
            if(a[j]>a[i])   ans[j]=max(ans[j],ans[i]+1);
        }
    }
    int mx=INT_MIN;
    for(int i=0;i<n;i++)  mx=max(mx,ans[i]);
    cout<<mx<<"\n";
}
void init() {
  int T;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;
    fr(i, 0, n) cin >> a[i];
    solve(a,n);
    a.clear(),ans.clear();
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
