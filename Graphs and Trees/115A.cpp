#include <bits/stdc++.h>
using namespace std;
typedef std::pair<int, int> ipair;
#define int long long
#define pb push_back
#define ff first
#define INF INT_MAX
#define ss second
#define rep(i, a) for (int i = 0; i < a; i++)
#define cnt_ones(x) __builtin_popcount(x)
#define all(x) x.begin(), x.end()
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
  int a[2001],h[2001];
int geth(int x) {
  if (h[x] != 0)
    return h[x];
  if (a[x] == -2)
    return h[x] = 1;
return h[x]=geth(a[x])+1;
}
void init() {
int n;
int maxh=-1;
cin>>n;
rep(i,n){
    cin>>a[i];
    a[i]--;
}
rep(i,n) maxh=max(maxh,geth(i));
cout<<maxh<<endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
