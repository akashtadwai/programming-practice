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
#define endl "\n"
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
  int n;
  cin >> n;
  int ans = n * n;
  vi mx, mn;
  while (n--) {
    int l;
    cin >> l;
    vi a(l);
    fr(i, 0, l) cin >> a[i];
    reverse(all(a));
    if (is_sorted(all(a)))
      mx.pb(a[0]), mn.pb(a.back());
  }
  sort(all(mn));
  int no = 0;
  for (auto x : mx)
    no += upper_bound(all(mn), x) - mn.begin();
  cout << ans - no << endl;
}

int32_t main() {
  IOS;
  init();
  return 0;
}