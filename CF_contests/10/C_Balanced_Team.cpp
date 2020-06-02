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
  int n;cin>>n;
  vi a(n);
  fr(i,0,n) cin>>a[i];
  sort(all(a));
  int res=1,pres=1;
  int l=0,r=1;
  while(l<n and r<n){
      if(abs(a[r]-a[l])<=5) pres++,r++;
      else pres--,l++;
      res=max(res,pres);
  }
  cout<<res<<endl;
}

int32_t main() {
  IOS;
  init();
  return 0;
}
