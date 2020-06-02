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
  int n,m;
  cin>>n>>m;
  int k,p;
  vi a(n,1);
  int center;
  while(m--){
      cin>>k>>p;
      a[--k]=0,a[--p]=0;
  }
  for(int i=0;i<n;i++){
      if(a[i]!=0) {
          center=i;
          break;
      }
  }
  cout<<n-1<<endl;
  fr(i,0,n){
      if(i==center) continue;
      else{
          cout<<center+1<<" "<<i+1<<endl;
      }
  }

}
int32_t main() {
  IOS;
  init();
  return 0;
}
