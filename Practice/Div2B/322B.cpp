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
 int n;cin>>n;
 vi a(n);
 fr(i,0,n)  cin>>a[i];
 int msf=a[n-1];
 vi res(n);
 res[n - 1] = 0;
 for(int i=n-2;i>=0;i--){
     if(a[i]<=msf) {
         res[i] = -a[i] + msf + 1;
     } 
     else res[i]=0;
     msf=max(msf,a[i]);
 }
 for(auto x:res)    cout<<x<<" ";
 
}
int32_t main() {
  IOS;
  init();
  return 0;
}
