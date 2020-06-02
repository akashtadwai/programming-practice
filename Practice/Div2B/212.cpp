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
  int n, m, k;
  cin >> n >> m;
  if(m==0){
      cout<<"YES"<<endl;
      return;
  }
  vi a(m);
  fr(i,0,m) cin>>a[i];
  sort(all(a));
  bool ok=true;
  if(a[0]==1 or a[m-1]==n)  ok=false;
  for(int i=0;i<m-2;i++){
      if(a[i]+1==a[i+1] and a[i]+2==a[i+2]) {
          ok=false;
          break;
      }
  }
  if (ok == true)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
