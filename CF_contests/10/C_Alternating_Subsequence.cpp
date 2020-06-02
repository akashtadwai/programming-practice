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
  int T;
  cin >> T;
  auto sig = [&](int x) { return true ? x > 0 : false; };
  while (T--) {
    int n;
    cin >> n;
    vi a(n);
    fr(i, 0, n) cin >> a[i];
    int res=0, j;
    for (int i = 0; i < n; i++) {
      int mx = a[i];
      j = i;
      while (j < n and sig(a[i]) == sig(a[j])) {
        mx = max(mx, a[j]);
        j++;
      }
      res += mx;
      i=j;
    }
    cout << res << endl;
  }
}
int32_t main() {
  IOS;
  init();
  return 0;
}
