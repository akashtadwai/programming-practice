// https://codeforces.com/contest/1203/problem/B
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
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);

void init() {
int t;cin>>t;
while(t--){
    int n;cin>>n;
    vi a(n);
    int ans=n+1;
    fr(i,0,n)   cin>>a[i];
    vector<int> lst(n + 1, -1);
    for (int i = 0; i < n; i++) {
      if (lst[a[i]] != -1)
        ans = min(ans, i - lst[a[i]] + 1);
      lst[a[i]] = i;
    }
    if(ans>n)   cout<<-1<<endl;
    else cout<<ans<<endl;
}
}
int32_t main() {
  IOS;
  init();
  return 0;
}
