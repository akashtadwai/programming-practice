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
#define mp make_pair
#define mod 1000000007
#define IOS                                                                    \
  std::ios::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
void init() {
    int n;cin>>n;
    vector<ipair>a(n);
    fr(i,0,n)   cin>>a[i].ff>>a[i].ss;
    int c=0;
    int ans=1;
    fr(i,0,n-1){
        if(a[i].ff == a[i+1].ff and a[i].ss == a[i+1].ss)   ++c;
        else c=0;
        ans=max(ans,c+1);
    }

        cout<<ans<<endl;

}
int32_t main() {
  IOS;
  init();
  return 0;
}
