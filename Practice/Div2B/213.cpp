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
  int n;
  cin >> n;
  vi a(n);
  fr(i, 0, n) cin >> a[i];
  int length = min((int)2,n);
  int cnt=2;
  int mx=INT_MIN;
  for(int i=2;i<n;i++){
     if(a[i]==a[i-1]+a[i-2])    cnt++;
     else{
         mx=max(mx,cnt);
         cnt=2;
     }
     mx=max(mx,cnt);
  }
  cout<<max(mx,length)<<endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
