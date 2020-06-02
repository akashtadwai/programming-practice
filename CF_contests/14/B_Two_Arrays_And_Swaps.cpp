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
void solve(vi a, vi b, int k) {
    sort(all(a));
    int sum=0;
    sort(all(b),greater<int>());
    if(a[0]>b[0]){
        sum=accumulate(all(a),0LL);
        cout<<sum<<"\n";
        return;
    }
    for(int i=0;i<k;i++){
        if(b[i]>a[i])   a[i]=b[i];
        else break;
    }
    sum=accumulate(all(a),0LL);
    cout<<sum<<"\n";

}
void init() {
  int T;
  cin >> T;
  int n, k;
  while (T--) {
    cin >> n >> k;
    vi a(n), b(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];
    for (int i = 0; i < n; i++)
      cin >> b[i];
    solve(a,b,k);
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
