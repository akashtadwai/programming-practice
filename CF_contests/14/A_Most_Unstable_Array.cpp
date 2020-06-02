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
void solve(int n,int m){
    if(n==1)  {
      cout << 0 << endl;
      return;
    } 
    if(n==2)  {
        cout<<m<<endl;
        return;
    }
    cout<<2*m<<endl;
    
}
void init() {
 int T;cin>>T;
 int n,m;
 while(T--){
cin>>n>>m;
    solve(n,m);
 }
 
}
int32_t main() {
  IOS;
  init();
  return 0;
}
