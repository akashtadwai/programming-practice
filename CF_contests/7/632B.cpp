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
    void solve(int n, vi &a, vi &b, vi &pos, vi &neg) {
        int temp=0;
      fr(i, 0, n - 1) {
        if (a[i] > 0 and pos[i + 1] ==0) {
          fr(j, i + 1, n) { pos[j] = 1;temp=1; }
        }
        else if(temp==1)    break;
      }
      int flag=0;
      fr(i,0,n-1){
        if (a[i] < 0 and neg[i + 1] == 0) {
          fr(j, i + 1, n) { neg[j] = 1; flag=1; }
        }
        else if(flag==1) break;
      }
bool ok=true;
fr(i,0,n){
    if(a[i]<b[i] and pos[i]<1)  ok=false;
    if(a[i]>b[i] and neg[i]<1)  ok=false;
}

    if(ok)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


    }
    void init() {
      int T;
      cin >> T;
      while (T--) {
        int k;
        cin >> k;
        vi a(k),b(k),pos(k),neg(k);
        for (int i = 0; i < k; i++)
          cin >> a[i];
        fr(i, 0, k) cin >> b[i];
        solve(k,a,b,pos,neg);
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
