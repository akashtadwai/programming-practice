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
bool compare(ipair &a, ipair &b) {
  if (a.ss == b.ss)
    return a.ff > b.ff;
  return a.ss > b.ss;
}
void init() {
  int n;
  cin >> n;
  vector<ipair> a(n);
  fr(i, 0, n) {
    cin >> a[i].ff >> a[i].ss;
    sort(all(a), compare);
  }
    // for(auto x:a) cout<<x.ff<<" "<<x.ss<<endl;
  int pts = 0;
  int cards = 1;
  for (int i = 0; i < n and cards > 0; i++) {
    pts += a[i].ff;
    cards += a[i].ss;
    cards--;
  }
  cout << pts << endl;
}
int32_t main() {
  IOS;
  init();
  return 0;
}
