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
  int n,m;cin>>n>>m;
  vi a(n);
  fr(i,0,n) cin>>a[i];
  cin>>m;
  vi b(m);
  fr(i,0,m) cin>>b[i];
  sort(all(a)),sort(all(b));
  int ans=0;
  int i=0,j=0;
  while(i<n and j<m){
      if(abs(a[i]-b[j])<=1){
          ans++;
          i++,j++;
      }
      else if(a[i]>b[j])    j++;
      else i++;    
  }
  cout<<ans<<endl;

}
int32_t main() {
  IOS;
  init();
  return 0;
}
