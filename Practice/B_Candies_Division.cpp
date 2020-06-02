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
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        int ans=n;
        int p = (n % k) - (k / 2);
        if (p>0) ans -= p;
        cout << ans << endl;
    }
  

}
int32_t main() {
  IOS;
  init();
  return 0;
}
