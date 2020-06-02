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
  int T;
  cin >> T;
  while (T--) {
    int n,sum=0;
    cin >> n;
    vi a(n);
    fr(i, 0, n)
      cin >> a[i],sum+=a[i];
      int psum1=0,psum2=0;
      bool ok=true;
      int i=0,j=n-1;
      while(i<n-1 and j>0) {
          psum1+=a[i];
          psum2+=a[j];
        //   cout<<psum1<<" "<<psum2<<endl;
          if(psum1>=sum or psum2>=sum){
              ok=false;
              break;
          }
          i++,j--;
      }
      if(ok)    cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
