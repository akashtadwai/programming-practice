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
#define vi vector<int>
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);

void init() {
int n,k;cin>>n>>k;
vi a(n);
fr(i,0,n)   cin>>a[i];
sort(all(a));
int ans=n;
int j;
for(int i=0;i<n-1;i=j){
 j=upper_bound(all(a),a[i])-a.begin();
 if(i==0 and j==n)    break;
if(a[j]>a[i] and a[j]-a[i]<=k) ans-=j-i;
}
cout<<ans<<endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
