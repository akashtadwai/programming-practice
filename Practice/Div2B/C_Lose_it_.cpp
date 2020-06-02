#include <bits/stdc++.h>
using namespace std;
typedef std::pair<int, int> ipair;
// #define int long long
#define pb push_back
#define ff first
#define INF INT_MAX
#define ss second
#define fr(i, j, a) for (int i = j; i < a; i++)
#define cnt_ones(x) __builtin_popcount(x)
#define all(x) x.begin(), x.end()
#define sz size()
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
  int mn=INT_MAX;
  map<int,int>mpa;
  vi c = {4,8,15,16,23,42};
  for(auto x:c) mpa[x]=0;
  fr(i,0,n) {
      cin>>a[i];
      mpa[a[i]]++;
  }
  int ans=0;
  for(auto x:mpa)
      mn=min(mn,x.ss);
for(auto x: mpa)    cout<<x.ss<<" ";
cout<<endl;
for(auto x:mpa){
    while (x.ss > mn)   x.ss-=1,++ans;
}
cout<<ans<<endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
