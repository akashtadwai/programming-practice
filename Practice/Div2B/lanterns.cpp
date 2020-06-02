#include <bits/stdc++.h>
using namespace std;
typedef std::pair<int, int> ipair;
#define pb push_back
#define ff first
#define INF INT_MAX
#define ss second
#define fr(i, j, a) for (int i = j; i < a; i++)
#define cnt_ones(x) __builtin_popcount(x)
#define all(x) x.begin(), x.end()
#define mp make_pair
#define mod 1000000007
#define vi vector<int>
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);

void init() {
  int n,l;
  cin>>n>>l;
  vi a(n),diff(n);
  fr(i,0,n) cin>>a[i];
  sort(all(a));
    fr(i,1,n)   diff[i-1]=a[i]-a[i-1];
  double res=max((double)max(a[0],l-a[n-1]),(double)*max_element(all(diff))/2);
  cout<<fixed<<setprecision(10)<<res<<endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
